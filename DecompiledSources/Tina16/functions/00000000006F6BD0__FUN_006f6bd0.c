/* Ghidra address: 006f6bd0 */
/* Ghidra symbol: FUN_006f6bd0 */


void FUN_006f6bd0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0x98];
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_007d7c60(lVar1,param_1[0xb0]);
    }
    param_1[0x98] = param_2;
    if (param_2 == 0) {
      FUN_006f2430(param_1,0,2);
      if ((char)param_1[0xab] != '\0') {
        FUN_006f3060(param_1,0);
        FUN_006f3060(param_1,1);
      }
    }
    else {
      FUN_006f3060(param_1,0);
      FUN_007d7c70(param_1[0x98],param_1[0xb0]);
      FUN_004d26c0(param_1[0x98],param_1);
      uVar2 = FUN_007d56e0(param_1[0x98]);
      FUN_006f2430(param_1,uVar2,2);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

