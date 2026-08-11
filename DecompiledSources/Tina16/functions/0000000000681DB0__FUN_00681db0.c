/* Ghidra address: 00681db0 */
/* Ghidra symbol: FUN_00681db0 */


void FUN_00681db0(longlong *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  if (*PTR_DAT_02003210 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    uVar2 = thunk_FUN_04118143(uVar1,0xfffffff0);
    if ((uVar2 & 4) == 0) {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0xd3,3,0);
    }
  }
  return;
}

