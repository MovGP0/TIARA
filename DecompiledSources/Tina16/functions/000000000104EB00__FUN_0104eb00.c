/* Ghidra address: 0104eb00 */
/* Ghidra symbol: FUN_0104eb00 */


void FUN_0104eb00(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 local_38 [8];
  int local_30;
  
  if (*(int *)(param_1 + 0x918) == 1) {
    FUN_01052d50(param_1);
    _MCU_SetAborted(*(undefined8 *)(param_1 + 0x970),0);
  }
  iVar4 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
  if (iVar4 == DAT_0202f418) {
    FUN_0064cbf0(param_1,0x44c);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x808),0x226);
    (**(code **)(**(longlong **)PTR_DAT_02004e40 + 0xe0))(*(longlong **)PTR_DAT_02004e40,local_38);
    FUN_00806af0(param_1,local_30 - *(int *)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x920) = 1;
    *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)(param_1 + 0x810);
    FUN_0104e100(param_1,2);
    FUN_0104fc70(param_1);
    FUN_00f8fbb0(*(undefined8 *)(param_1 + 0x9d8),*(undefined8 *)(param_1 + 0x958),
                 *(undefined8 *)(param_1 + 0x950),*(undefined8 *)(param_1 + 0x960),
                 *(undefined8 *)(param_1 + 0x968),*(undefined8 *)(param_1 + 0x6d0),
                 *(undefined8 *)(param_1 + 0x798),*(undefined8 *)(param_1 + 0x7a0));
    uVar6 = FUN_0065b870(*(undefined8 *)(param_1 + 0x958));
    thunk_FUN_041b2403(uVar6,0x435,0,0x7fffffff);
    FUN_00f8f2b0(*(undefined8 *)(param_1 + 0x9d8),param_1,1,0);
  }
  else if (*(int *)(param_1 + 0x910) == DAT_0202f418) {
    FUN_0064cbf0(param_1,600);
    (**(code **)(**(longlong **)PTR_DAT_02004e40 + 0xe0))(*(longlong **)PTR_DAT_02004e40,local_38);
    FUN_00806af0(param_1,local_30 - *(int *)(param_1 + 0x98));
  }
  iVar4 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
  if ((iVar4 == DAT_0202f414) && (*(int *)(param_1 + 0x910) == DAT_0202f410)) {
    bVar3 = 1;
    cVar2 = FUN_00f629c0(*(undefined8 *)(param_1 + 0x980));
    if ((cVar2 == '\0') && (*(int *)(param_1 + 0x918) != 0)) {
      bVar7 = 0;
    }
    else {
      bVar7 = 1;
    }
    if (bVar7 != 0) {
      bVar3 = FUN_01050af0(param_1,0);
    }
    if ((bVar3 & bVar7) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x958) + 0x298))(*(longlong **)(param_1 + 0x958));
      bVar3 = FUN_01050900(param_1);
      if (bVar3 != 0) {
        FUN_00f629b0(*(undefined8 *)(param_1 + 0x980),0);
      }
    }
    if (bVar3 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x278))
                (*(longlong **)(param_1 + 0x6d8),DAT_0202f410);
    }
  }
  else {
    iVar4 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
    if (iVar4 == DAT_0202f41c) {
      FUN_00f773c0(*(undefined8 *)(param_1 + 0x978));
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7b0) + 0x4d8);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x990));
    }
  }
  iVar4 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
  if (iVar4 == DAT_0202f410) {
    *(undefined4 *)(param_1 + 0x920) = 0;
    *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)(param_1 + 0x7f8);
    FUN_0104e100(param_1,1);
    FUN_0104fc70(param_1);
  }
  iVar4 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
  if ((iVar4 == DAT_0202f414) && (*(int *)(param_1 + 0x920) == 1)) {
    *(undefined4 *)(param_1 + 0x920) = 0;
    *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)(param_1 + 0x7f8);
    FUN_0104e100(param_1,1);
    FUN_0104fc70(param_1);
    if (*(int *)(param_1 + 0x918) == 1) {
      FUN_00f8fbb0(*(undefined8 *)(param_1 + 0x9d8),*(undefined8 *)(param_1 + 0x958),
                   *(undefined8 *)(param_1 + 0x950),*(undefined8 *)(param_1 + 0x960),
                   *(undefined8 *)(param_1 + 0x968),*(undefined8 *)(param_1 + 0x6d0),
                   *(undefined8 *)(param_1 + 0x798),*(undefined8 *)(param_1 + 0x7a0));
      uVar6 = FUN_0065b870(*(undefined8 *)(param_1 + 0x958));
      thunk_FUN_041b2403(uVar6,0x435,0,0x7fffffff);
      FUN_00f8f2b0(*(undefined8 *)(param_1 + 0x9d8),param_1,1,0);
    }
  }
  FUN_010504b0(param_1,*(undefined4 *)(param_1 + 0x918),*(undefined4 *)(param_1 + 0x91c));
  uVar5 = FUN_01053d50(param_1);
  FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x858),uVar5);
  if (*(int *)(param_1 + 0x918) == 1) {
    iVar4 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
    if (iVar4 != DAT_0202f418) {
      iVar4 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
      if (iVar4 != DAT_0202f414) goto LAB_0104ef13;
    }
    FUN_00f8d910(*(undefined8 *)(param_1 + 0x9d8));
  }
LAB_0104ef13:
  uVar5 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
  *(undefined4 *)(param_1 + 0x910) = uVar5;
  return;
}

