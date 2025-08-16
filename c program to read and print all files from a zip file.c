#include <stdio.h>
#include <string.h>
#include <zip.h>

void print_zip_contents(const char *zip_filename) {
    int err = 0;
    struct zip *zip = zip_open(zip_filename, 0, &err);
    if (!zip) {
        fprintf(stderr, "Failed to open zip file: %s\n", zip_filename);
        return;
    }

    zip_int64_t num_entries = zip_get_num_entries(zip, 0);
    printf("Number of files in the archive: %lld\n", num_entries);

    for (zip_uint64_t i = 0; i < num_entries; ++i) {
        const char *name = zip_get_name(zip, i, 0);
        if (!name) {
            fprintf(stderr, "Error reading file name at index %llu\n", i);
            continue;
        }

        printf("\n--- File: %s ---\n", name);

        struct zip_file *zfile = zip_fopen_index(zip, i, 0);
        if (!zfile) {
            fprintf(stderr, "Failed to open file inside zip: %s\n", name);
            continue;
        }

        char buffer[1024];
        zip_int64_t n;
        while ((n = zip_fread(zfile, buffer, sizeof(buffer))) > 0) {
            fwrite(buffer, 1, n, stdout);
        }

        zip_fclose(zfile);
    }

    zip_close(zip);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <zipfile>\n", argv[0]);
        return 1;
    }

    print_zip_contents(argv[1]);

    return 0;
}
