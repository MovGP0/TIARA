/* Ghidra address: 01c03340 */
/* Ghidra symbol: FUN_01c03340 */


void FUN_01c03340(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1[0x97];
  if (lVar2 != param_2) {
    if (lVar2 != 0) {
      FUN_01bff350(lVar2,param_1);
    }
    param_1[0x97] = param_2;
    if (param_2 == 0) {
      lVar2 = FUN_01c03420(param_1);
      param_1[0x97] = lVar2;
    }
    FUN_01bff100(param_1[0x97],param_1);
    FUN_0064e030(param_1,*(undefined4 *)(param_1[0x97] + 0x8c));
    (**(code **)(*param_1 + 0x180))(param_1);
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar3,0x85,1,0);
    }
  }
  return;
}

