/* Ghidra address: 013d3770 */
/* Ghidra symbol: FUN_013d3770 */


void FUN_013d3770(char param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined2 local_2a;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (0 < iVar2) {
    plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    plVar4 = (longlong *)FUN_006d6380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    (**(code **)(*plVar3 + 0x18))(plVar3,local_20,iVar2 + -1);
    iVar2 = 0;
    if (local_20[0] != 0) {
      iVar2 = *(int *)(local_20[0] + -4);
    }
    while( true ) {
      if (iVar2 < 1) {
        cVar1 = '\0';
      }
      else {
        local_2a = *(undefined2 *)(local_20[0] + -2 + (longlong)iVar2 * 2);
        cVar1 = FUN_00432270(&local_2a);
      }
      if (cVar1 == '\0') break;
      FUN_00416780(&local_28,*(undefined2 *)(local_20[0] + -2 + (longlong)iVar2 * 2));
      iVar2 = iVar2 + -1;
    }
    if (param_1 == '\0') {
      FUN_005b8650(&local_48,local_28);
      FUN_00416ba0(local_20,L"Transient",local_48);
    }
    else {
      FUN_005b8650(local_40,local_28);
      FUN_00416ba0(local_20,L"Mixed Transient",local_40[0]);
    }
    plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    plVar4 = (longlong *)FUN_006d6380(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    (**(code **)(*plVar3 + 0x40))(plVar3,iVar2 + -1,local_20[0]);
  }
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_28,2);
  return;
}

