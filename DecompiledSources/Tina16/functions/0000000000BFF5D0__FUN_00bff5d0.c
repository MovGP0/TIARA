/* Ghidra address: 00bff5d0 */
/* Ghidra symbol: FUN_00bff5d0 */


void FUN_00bff5d0(longlong *param_1,ulonglong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [4];
  int local_34;
  undefined8 local_30;
  undefined1 local_28 [4];
  int local_24;
  longlong local_20 [2];
  
  local_40 = 0;
  local_20[0] = 0;
  local_30 = *param_2;
  uVar4 = FUN_00c09df0(param_1);
  if ((uVar4 & 0x40000) != 0) {
    cVar1 = FUN_00c10e70(param_1);
    if (cVar1 == '\0') {
      iVar2 = FUN_00bcbe50(local_30 & 0xffffffff,1,(int)param_1[0xa2] + 1);
      local_30._0_4_ = iVar2;
      goto LAB_00bff644;
    }
  }
  iVar2 = (int)local_30;
  if ((int)local_30 < 2) {
    iVar2 = 1;
  }
  local_30._0_4_ = iVar2;
LAB_00bff644:
  uVar3 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
  local_30._4_4_ = FUN_00bcbe50(local_30._4_4_,1,uVar3);
  (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
            ((longlong *)param_1[0x9d],&local_40,local_30._4_4_ + -1);
  FUN_00416ba0(local_20,local_40,&DAT_00bff784);
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  if (iVar2 < (int)local_30) {
    uVar3 = 0;
    if (local_20[0] != 0) {
      uVar3 = *(undefined4 *)(local_20[0] + -4);
    }
    local_48 = FUN_00bb7750(uVar3,local_30._4_4_);
    (**(code **)(*param_1 + 0x2a8))(param_1,&local_48);
  }
  else {
    FUN_00bff510(auStack_68);
    local_34 = local_30._4_4_;
    local_24 = local_30._4_4_;
    FUN_00c0a5f0(param_1,local_28,local_38,local_28);
    FUN_00c0dc30(param_1,local_30._4_4_);
    FUN_00c0a950(param_1,0x80);
  }
  FUN_00414480(&local_40);
  FUN_00414480(local_20);
  return;
}

