/* Ghidra address: 006f6b30 */
/* Ghidra symbol: FUN_006f6b30 */


void FUN_006f6b30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0x97];
  if (param_2 != lVar1) {
    if (lVar1 != 0) {
      FUN_007d7c60(lVar1,param_1[0xae]);
    }
    param_1[0x97] = param_2;
    if (param_2 == 0) {
      FUN_006f2430(param_1,0,1);
    }
    else {
      FUN_007d7c70(param_2,param_1[0xae]);
      FUN_004d26c0(param_1[0x97],param_1);
      uVar2 = FUN_007d56e0(param_1[0x97]);
      FUN_006f2430(param_1,uVar2,1);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

