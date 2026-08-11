/* Ghidra address: 01d04970 */
/* Ghidra symbol: FUN_01d04970 */


void FUN_01d04970(longlong param_1,int param_2,int param_3,int *param_4,int *param_5,char param_6)

{
  *param_4 = param_2 - *(int *)(param_1 + 0xc);
  *param_5 = param_3 - *(int *)(param_1 + 0x10);
  if (param_6 != '\0') {
    FUN_01cf1530(*(undefined1 *)(param_1 + 0xd1),*(undefined1 *)(param_1 + 0xd3),param_4,param_5);
  }
  return;
}

