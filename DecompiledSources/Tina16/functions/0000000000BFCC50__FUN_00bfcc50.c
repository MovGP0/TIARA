/* Ghidra address: 00bfcc50 */
/* Ghidra symbol: FUN_00bfcc50 */


void FUN_00bfcc50(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar2 = FUN_00c09df0(param_1);
  if ((uVar2 & 0x20000) == 0) {
    iVar1 = FUN_00c10fb0(param_1);
    iVar1 = (iVar1 - (int)param_1[0xa1]) + 1;
    if (iVar1 <= param_2) {
      param_2 = iVar1;
    }
  }
  else {
    iVar1 = FUN_00c10fb0(param_1);
    if (iVar1 <= param_2) {
      param_2 = iVar1;
    }
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (param_2 != *(int *)((longlong)param_1 + 0x534)) {
    uVar4 = *(int *)((longlong)param_1 + 0x534) - param_2;
    *(int *)((longlong)param_1 + 0x534) = param_2;
    if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < (int)param_1[0xa1]) {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_0418ab71(uVar3,0,*(int *)((longlong)param_1 + 0x52c) * uVar4,0,0);
    }
    else {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_0415faac(uVar3);
    FUN_00bfd160(param_1);
    FUN_00c0a950(param_1,0x10);
  }
  return;
}

