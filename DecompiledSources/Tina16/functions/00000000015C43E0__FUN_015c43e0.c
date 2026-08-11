/* Ghidra address: 015c43e0 */
/* Ghidra symbol: FUN_015c43e0 */


void FUN_015c43e0(longlong param_1)

{
  FUN_015c2ad0(*(undefined8 *)(param_1 + 0x28),0);
  FUN_0040d200(param_1 + 0x84,0x16,0);
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x85) == '\0') {
    *(undefined4 *)(param_1 + 0x84) = 0x6054141;
  }
  else {
    *(undefined4 *)(param_1 + 0x84) = 0x6054b50;
  }
  *(undefined2 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x8a) = 0;
  return;
}

