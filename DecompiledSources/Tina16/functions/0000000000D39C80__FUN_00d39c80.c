/* Ghidra address: 00d39c80 */
/* Ghidra symbol: FUN_00d39c80 */


void FUN_00d39c80(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  lVar2 = FUN_00d39420(param_1,param_1[1]);
  param_1[0x10] = lVar2;
  uVar1 = FUN_00d39400(param_1);
  *(undefined4 *)(param_1 + 0xf) = uVar1;
  local_2c = 0;
  local_28 = *(longlong *)(param_2 + 8);
  if (local_28 == 0) {
    local_28 = thunk_FUN_040ef593(param_1[1]);
  }
  else {
    local_2c = thunk_FUN_03b57162(local_28);
  }
  local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  FUN_005ffb10(local_20,local_28);
  (**(code **)(*param_1 + 0x20))(param_1,local_20);
  FUN_00410f20(local_20);
  if (*(longlong *)(param_2 + 8) == 0) {
    thunk_FUN_041a9b5c(param_1[1],local_28);
  }
  else {
    thunk_FUN_0402759f(local_28,local_2c);
  }
  iVar3 = (int)param_1[0xf];
  if ((iVar3 < 0) || ((char)param_1[0xc] != '\0')) {
    if ((-1 < (int)param_1[0xf]) &&
       ((-1 < *(int *)((longlong)param_1 + 100) &&
        (*(int *)((longlong)param_1 + 100) < (int)param_1[0xf] + -1)))) {
      thunk_FUN_0413e052(param_1[1],0x1e5,(longlong)*(int *)((longlong)param_1 + 100),0);
    }
  }
  else {
    local_30 = 0;
    if (-1 < iVar3 + -1) {
      do {
        thunk_FUN_0413e052(param_1[1],0x1e5,(longlong)local_30,0);
        local_30 = local_30 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

