/* Ghidra address: 006f69f0 */
/* Ghidra symbol: FUN_006f69f0 */


void FUN_006f69f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0x99];
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_007d7c60(lVar1,param_1[0xaf]);
    }
    param_1[0x99] = param_2;
    if (param_2 == 0) {
      FUN_006f2430(param_1,0,3);
    }
    else {
      FUN_007d7c70(param_2,param_1[0xaf]);
      FUN_004d26c0(param_1[0x99],param_1);
      uVar2 = FUN_007d56e0(param_1[0x99]);
      FUN_006f2430(param_1,uVar2,3);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

