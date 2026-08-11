/* Ghidra address: 00f012b0 */
/* Ghidra symbol: FUN_00f012b0 */


void FUN_00f012b0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar7;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20 [2];
  
  uVar7 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_30 = 0;
  local_20[0] = 0;
  if (*(char *)((longlong)param_1 + 0x531) != '\0') {
    lVar5 = thunk_FUN_041d93e9();
    if (lVar5 != 0) {
      uVar6 = thunk_FUN_041d93e9();
      thunk_FUN_041b2403(uVar6,0x1f,0,0);
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0xa4] + 0x260))((longlong *)param_1[0xa4]);
    if (iVar3 != -1) {
      plVar1 = (longlong *)param_1[0xa4];
      uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_20,uVar4);
    }
    uVar6 = FUN_0065b870(param_1[0xa5]);
    thunk_FUN_041cc6e2(uVar6,0,0,0,(ulonglong)uVar7 << 0x20,0,0x97);
    *(undefined1 *)((longlong)param_1 + 0x531) = 0;
    FUN_0083e5c0();
    if ((param_2 != '\0') && (local_20[0] != 0)) {
      cVar2 = (**(code **)(*param_1 + 0x2a8))(param_1);
      if (cVar2 != '\0') {
        FUN_00835220(param_1,local_20[0]);
        FUN_00849eb0(param_1[0xa1],(int)param_1[0x12] + 1,*(int *)((longlong)param_1 + 0x94) + 1,
                     &local_24,&local_28);
        FUN_00835150(param_1,&local_30);
        FUN_0084e3e0(param_1[0xa1],local_24,local_28,local_30);
        (**(code **)(*(longlong *)param_1[0xa1] + 0x180))((longlong *)param_1[0xa1]);
      }
    }
  }
  FUN_00414480(&local_30);
  FUN_00414480(local_20);
  return;
}

