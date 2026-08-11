/* Ghidra address: 018a9fe0 */
/* Ghidra symbol: FUN_018a9fe0 */


void FUN_018a9fe0(longlong *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  puVar1 = auStack_58;
  if (*(char *)((longlong)param_1 + 0x531) == '\0') {
    if (*(longlong *)PTR_PTR_02003650 == 0) {
      local_20 = FUN_01979e40(*(undefined8 *)PTR_PTR_020034c0,1);
    }
    else {
      local_30 = auStack_58;
      local_20 = FUN_01979e40(*(undefined8 *)PTR_PTR_02003650,1);
    }
    *(undefined1 *)(local_20 + 0xd2) = 1;
    FUN_00414ad0(local_20 + 0xa0,L".fp3");
    uVar2 = FUN_0180bfb0();
    FUN_01809b60(uVar2,&local_38,L"clFP3files");
    FUN_00416ba0(local_20 + 0xb0,local_38,L" (*.fp3)|*.fp3");
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    (**(code **)(*plVar3 + 0x148))(plVar3,local_20,0);
    (**(code **)(*(longlong *)param_1[0xaa] + 0x188))((longlong *)param_1[0xaa]);
    FUN_00410f20(local_20);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00414480(&local_38);
  return;
}

