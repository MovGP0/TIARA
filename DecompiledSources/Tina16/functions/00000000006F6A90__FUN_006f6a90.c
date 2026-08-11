/* Ghidra address: 006f6a90 */
/* Ghidra symbol: FUN_006f6a90 */


void FUN_006f6a90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0x95];
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_007d7c60(lVar1,param_1[0xad]);
    }
    param_1[0x95] = param_2;
    if (param_2 == 0) {
      FUN_006f2430(param_1,0,0);
    }
    else {
      FUN_007d7c70(param_2,param_1[0xad]);
      FUN_004d26c0(param_1[0x95],param_1);
      uVar2 = FUN_007d56e0(param_1[0x95]);
      FUN_006f2430(param_1,uVar2,0);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

