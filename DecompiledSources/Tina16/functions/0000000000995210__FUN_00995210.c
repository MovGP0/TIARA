/* Ghidra address: 00995210 */
/* Ghidra symbol: FUN_00995210 */


undefined8 FUN_00995210(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (lVar1 == 0) {
    FUN_00414520(param_2);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    FUN_009949a0(uVar2,param_2,param_3);
  }
  return param_2;
}

