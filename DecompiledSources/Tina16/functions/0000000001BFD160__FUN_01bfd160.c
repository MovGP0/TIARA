/* Ghidra address: 01bfd160 */
/* Ghidra symbol: FUN_01bfd160 */


void FUN_01bfd160(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(param_1[7],param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 7,param_2);
    (**(code **)(*param_1 + 0x30))(param_1,param_2);
  }
  return;
}

