/* Ghidra address: 012b17d0 */
/* Ghidra symbol: FUN_012b17d0 */


void FUN_012b17d0(longlong param_1)

{
  if (*(char *)(param_1 + 0xdd0) == '\0') {
    *(undefined1 *)(param_1 + 0xdd0) = 1;
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x110))
              (*(longlong **)(param_1 + 0xdb8),param_1 + 0xdd0);
    if (*(char *)(param_1 + 0xdd0) == '\0') {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0xcd8),1);
    }
    else {
      if (*(char *)(param_1 + 0x7ed) != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x168))(*(longlong **)(param_1 + 0xdb8));
      }
      *(undefined1 *)(param_1 + 0x990) = 0xc;
      *(undefined1 *)(param_1 + 0xde8) = 4;
      FUN_012ae470(param_1,1,0);
      FUN_010f6af0(param_1,2,0,0);
      (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x18))
                (*(longlong **)(param_1 + 0x9b0),*(undefined1 *)(param_1 + 0x990));
      FUN_010e7b90(*(undefined8 *)(param_1 + 0x9b0));
    }
  }
  return;
}

