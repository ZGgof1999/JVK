/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   basic_frag_spv;
    const int            basic_frag_spvSize = 452;

    extern const char*   basic_vert_spv;
    const int            basic_vert_spvSize = 1052;

    extern const char*   basic_frag;
    const int            basic_fragSize = 197;

    extern const char*   basic_vert;
    const int            basic_vertSize = 310;

    extern const char*   invert_frag_spv;
    const int            invert_frag_spvSize = 732;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 5;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
