#define MAX_FILE_NAME_LENGTH 101
#define MAX_WORD_LENGTH 101

// Given a collectionFilename, copies and normalizes all files into identical files with a 
// '1' added to the end to make it different
void Normalize_files(char *collectionFilename);

// Checks whether a given character is classified as punctuation
int is_punctuation(int character);
