/* Ghidra address: 018d6ff0 */
/* Ghidra symbol: FUN_018d6ff0 */


void FUN_018d6ff0(longlong param_1,undefined1 param_2,undefined1 param_3,char param_4,
                 undefined1 param_5,char param_6,undefined1 param_7,int param_8)

{
  *(undefined1 *)(param_1 + 0xa9) = param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 8) = param_3;
  *(char *)(param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_4 != '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0x80;
  }
  if (param_6 != '\0') {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 4;
  }
  *(undefined1 *)(param_1 + 0xa8) = param_5;
  *(int *)(param_1 + 0x78) = param_8 % 0x168;
  *(undefined1 *)(param_1 + 0xaa) = param_7;
  return;
}

