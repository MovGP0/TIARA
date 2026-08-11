/* Ghidra address: 0195c180 */
/* Ghidra symbol: FUN_0195c180 */


void FUN_0195c180(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_019546c0(param_1);
  FUN_00414ad0(param_1 + 0x3b,param_1[0x3a]);
  FUN_00414ad0(param_1 + 0x3c,*(undefined8 *)(param_1[0x41] + 0x30));
  lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
    FUN_019775b0(uVar2,param_1);
  }
  return;
}

