/* Ghidra address: 006e1500 */
/* Ghidra symbol: FUN_006e1500 */


void FUN_006e1500(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  int local_1c;
  
  local_70 = auStack_98;
  *(undefined1 *)(param_1 + 0x530) = 0;
  FUN_00655080(param_1);
  local_28 = FUN_0065b870(param_1);
  local_2c = FUN_005fbf20(*(undefined4 *)(param_1 + 200));
  thunk_FUN_041b2403(local_28,0x111d,0,local_2c);
  local_38 = FUN_0065b870(param_1);
  local_3c = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x28));
  thunk_FUN_041b2403(local_38,0x111e,0,local_3c);
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FUN_006df690(*(undefined8 *)(param_1 + 0x550));
    FUN_006dfb20(*(undefined8 *)(param_1 + 0x550),*(undefined8 *)(param_1 + 0x500));
    FUN_006dfd70(*(undefined8 *)(param_1 + 0x550),*(undefined8 *)(param_1 + 0x500));
    local_48 = (undefined8 *)(param_1 + 0x500);
    local_50 = *local_48;
    *local_48 = 0;
    FUN_00410f20(local_50);
    uVar3 = FUN_006df500(*(undefined8 *)(param_1 + 0x550),*(undefined4 *)(param_1 + 0x528));
    FUN_006e24b0(param_1,uVar3);
    *(undefined4 *)(param_1 + 0x528) = 0;
    if (*(longlong *)(param_1 + 0x570) == 0) {
      if (*(int *)(param_1 + 0x514) != -1) {
        uVar3 = FUN_006df500(*(undefined8 *)(param_1 + 0x550),*(int *)(param_1 + 0x514));
        FUN_006e2590(param_1,uVar3);
      }
    }
    else {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x570) + 0x10);
      local_1c = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x570),local_1c);
          uVar3 = FUN_006df500(*(undefined8 *)(param_1 + 0x550),uVar2);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x568),uVar3);
          local_1c = local_1c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_58 = (undefined8 *)(param_1 + 0x570);
      local_60 = *local_58;
      *local_58 = 0;
      FUN_00410f20(local_60);
      FUN_006e5a00(param_1);
      uVar3 = FUN_006e5360(param_1,0);
      FUN_006e2590(param_1,uVar3);
    }
    *(undefined4 *)(param_1 + 0x514) = 0xffffffff;
    FUN_006df710(*(undefined8 *)(param_1 + 0x550));
  }
  if (*(int *)(param_1 + 0x518) != -1) {
    FUN_006e2350(param_1,*(int *)(param_1 + 0x518));
  }
  if ((*(longlong *)(param_1 + 0x4e8) != 0) &&
     (cVar1 = FUN_007d53b0(*(longlong *)(param_1 + 0x4e8)), cVar1 != '\0')) {
    uVar3 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x4e8));
    FUN_006e4280(param_1,uVar3,0);
  }
  if ((*(longlong *)(param_1 + 0x538) != 0) &&
     (cVar1 = FUN_007d53b0(*(longlong *)(param_1 + 0x538)), cVar1 != '\0')) {
    uVar3 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x538));
    FUN_006e4280(param_1,uVar3,2);
  }
  plVar4 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
  if ((cVar1 != '\0') && (5 < *(int *)PTR_DAT_02001bd8)) {
    uVar3 = FUN_00777cd0();
    cVar1 = FUN_00779360(uVar3);
    if (cVar1 != '\0') {
      uVar3 = FUN_0065b870(param_1);
      (**(code **)PTR_DAT_02005bc8)(uVar3,L"explorer",0);
    }
  }
  return;
}

