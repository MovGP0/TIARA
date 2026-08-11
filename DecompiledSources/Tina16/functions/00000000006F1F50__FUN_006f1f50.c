/* Ghidra address: 006f1f50 */
/* Ghidra symbol: FUN_006f1f50 */


void FUN_006f1f50(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  undefined8 local_20;
  
  local_30 = auStack_58;
  FUN_00655080(param_1);
  FUN_006f2db0(param_1);
  FUN_006f33c0(param_1,*(undefined4 *)(param_1 + 200));
  FUN_006f3380(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x28));
  FUN_006f3430(param_1,*(undefined4 *)(param_1 + 0x548));
  FUN_006f8c90(param_1,*(undefined4 *)(param_1 + 0x560));
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FUN_006efe50(*(undefined8 *)(param_1 + 0x4e0));
    *(undefined1 *)(param_1 + 0x589) = 1;
    FUN_004b1f10(*(undefined8 *)(param_1 + 0x500));
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x508),0);
    if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
      FUN_004b8d00(*(undefined8 *)(param_1 + 0x508),param_1);
      if ((*(ushort *)(param_1 + 0x34) & 1) != 0) {
        FUN_00651da0(param_1);
      }
    }
    else {
      FUN_004b8d00(*(undefined8 *)(param_1 + 0x508),param_1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x508) + -0x20))(*(longlong **)(param_1 + 0x508),1);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (*(char *)(param_1 + 0x510) != '\0') {
      FUN_006efda0(*(undefined8 *)(param_1 + 0x4e0),*(undefined4 *)(param_1 + 0x5b0));
    }
    if (*(char *)(param_1 + 0x558) != '\0') {
      FUN_006f2ed0(param_1);
    }
    FUN_006f1e60(auStack_58);
    FUN_0064df10(param_1,*(undefined8 *)(param_1 + 0xb8));
    if (*(int *)(param_1 + 0x4b0) != -1) {
      uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),*(int *)(param_1 + 0x4b0));
      FUN_006f7000(param_1,uVar2);
      lVar3 = FUN_006f6fe0(param_1);
      if (lVar3 != 0) {
        uVar2 = FUN_006f6fe0(param_1);
        FUN_006eedc0(uVar2,0);
      }
    }
    FUN_006f8e10(param_1);
    FUN_006f0150(*(undefined8 *)(param_1 + 0x4e0));
    *(undefined1 *)(param_1 + 0x589) = 0;
  }
  FUN_006edbc0(*(undefined8 *)(param_1 + 0x500));
  local_20 = FUN_0065b870(param_1);
  local_24 = -(uint)(*(char *)(param_1 + 0x778) != '\0');
  thunk_FUN_041b2403(local_20,0x109d,(longlong)local_24,0);
  FUN_006f7580(param_1);
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    cVar1 = FUN_007d53b0(*(longlong *)(param_1 + 0x4a8));
    if (cVar1 != '\0') {
      uVar2 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x4a8));
      FUN_006f2430(param_1,uVar2,0);
    }
  }
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    cVar1 = FUN_007d53b0(*(longlong *)(param_1 + 0x4b8));
    if (cVar1 != '\0') {
      uVar2 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x4b8));
      FUN_006f2430(param_1,uVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    cVar1 = FUN_007d53b0(*(longlong *)(param_1 + 0x4c0));
    if (cVar1 != '\0') {
      uVar2 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x4c0));
      FUN_006f2430(param_1,uVar2,2);
    }
  }
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    cVar1 = FUN_007d53b0(*(longlong *)(param_1 + 0x4c8));
    if (cVar1 != '\0') {
      uVar2 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x4c8));
      FUN_006f2430(param_1,uVar2,3);
    }
  }
  FUN_006f7fa0(param_1);
  plVar4 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
  if ((cVar1 != '\0') && (5 < *(int *)PTR_DAT_02001bd8)) {
    uVar2 = FUN_00777cd0();
    cVar1 = FUN_00779360(uVar2);
    if (cVar1 != '\0') {
      uVar2 = FUN_0065b870(param_1);
      (**(code **)PTR_DAT_02005bc8)(uVar2,L"explorer",0);
    }
  }
  return;
}

