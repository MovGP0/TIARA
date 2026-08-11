/* Ghidra address: 00693310 */
/* Ghidra symbol: FUN_00693310 */


void FUN_00693310(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  int local_a0 [2];
  int local_98;
  undefined1 *local_90;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [72];
  longlong local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_90 = auStack_d8;
  local_30 = *(longlong *)(param_2 + 8);
  local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  if (local_30 == 0) {
    uVar3 = FUN_00786090(param_1);
    uVar3 = thunk_FUN_041804fe(uVar3,local_78);
    FUN_005ffb10(local_20,uVar3);
  }
  else {
    FUN_005ffb10(local_20,local_30);
  }
  uVar3 = FUN_005ffa40(local_20);
  local_24 = thunk_FUN_03b57162(uVar3);
  (**(code **)(*param_1 + 0x98))(param_1,local_20);
  uVar3 = FUN_005ffa40(local_20);
  thunk_FUN_0402759f(uVar3,local_24);
  cVar1 = FUN_006927d0(param_1);
  if ((cVar1 != '\x01') && (param_1[0xe] == 0)) {
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],&local_88);
    FUN_00423b10(&local_88,0xfffffffd,0xfffffffd);
    if (*(char *)(param_1[2] + 0xb1) == '\x01') {
      FUN_00692750(param_1,local_a0);
      local_88 = local_98 + 1;
    }
    else {
      FUN_00692750(param_1,local_a0);
      local_80 = local_a0[0] + -1;
    }
    uVar3 = FUN_005ffa40(local_20);
    local_24 = thunk_FUN_03b57162(uVar3);
    uVar3 = FUN_005ffa40(local_20);
    local_b8 = local_7c;
    FUN_00428be0(uVar3,local_88,local_84,local_80);
    cVar1 = FUN_006926e0(param_1);
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x260))((longlong *)param_1[2]);
      local_b8 = CONCAT31(local_b8._1_3_,*(undefined1 *)((longlong)param_1 + 0x1a));
      (**(code **)(*param_1 + 0x88))(param_1,local_20,uVar2,&local_88);
    }
    else {
      local_b8 = CONCAT31(local_b8._1_3_,*(undefined1 *)((longlong)param_1 + 0x1a));
      (**(code **)(*param_1 + 0x88))(param_1,local_20,(int)param_1[0x12],&local_88);
    }
    uVar3 = FUN_005ffa40(local_20);
    thunk_FUN_0402759f(uVar3,local_24);
  }
  FUN_005ffb10(local_20,0);
  FUN_00410f20(local_20);
  if (local_30 == 0) {
    uVar3 = FUN_00786090(param_1);
    thunk_FUN_0416269d(uVar3,local_78);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

