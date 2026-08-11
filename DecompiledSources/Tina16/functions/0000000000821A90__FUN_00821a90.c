/* Ghidra address: 00821a90 */
/* Ghidra symbol: FUN_00821a90 */


void FUN_00821a90(longlong *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == 0x20) {
    uVar1 = (**(code **)(*param_1 + 0x260))(param_1);
    FUN_00821d50(param_1,uVar1);
  }
  FUN_0068dba0(param_1,param_2);
  return;
}

