/* Ghidra address: 01d839e0 */
/* Ghidra symbol: FUN_01d839e0 */


void FUN_01d839e0(longlong param_1)

{
  if (*(char *)(param_1 + 0xaa0) == '\0') {
    *(undefined1 *)(param_1 + 0xaa0) = 1;
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x110))
              (*(longlong **)(param_1 + 0xa88),param_1 + 0xaa0);
    if (*(char *)(param_1 + 0xaa0) == '\0') {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x9c8),1);
    }
    else {
      if (*(char *)(param_1 + 0x7ed) != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x168))(*(longlong **)(param_1 + 0xa88));
      }
      FUN_01d80d00(param_1,1,0);
    }
  }
  return;
}

