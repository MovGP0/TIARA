/* Ghidra address: 00ea7d60 */
/* Ghidra symbol: FUN_00ea7d60 */


void FUN_00ea7d60(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if ((iVar1 < param_3) || (param_3 < 1)) {
    FUN_00ea68e0(param_3);
  }
  FUN_00ea4ee0(*(undefined8 *)(param_1 + 0x20),param_2);
  FUN_00ea4e40(*(undefined8 *)(param_1 + 0x20),param_3);
  FUN_00ea4940(*(undefined8 *)(param_1 + 0x20));
  return;
}

