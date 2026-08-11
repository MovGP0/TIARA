/* Ghidra address: 0149ba10 */
/* Ghidra symbol: FUN_0149ba10 */


void FUN_0149ba10(longlong param_1,undefined8 param_2,short *param_3)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_00bfaa40(*(undefined8 *)(param_1 + 0x8c0));
  if ((iVar1 < 6) && ((*param_3 == 0x25 || (*param_3 == 8)))) {
    *param_3 = 0;
  }
  FUN_00414480(&local_10);
  return;
}

