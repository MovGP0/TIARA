/* Ghidra address: 01b9a640 */
/* Ghidra symbol: FUN_01b9a640 */


void FUN_01b9a640(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30[0] = 0;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x810),0);
  plVar4 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x818),local_30);
  iVar2 = (**(code **)(*plVar4 + 0xb0))(plVar4,local_30[0]);
  if (iVar2 == -1) {
    plVar4 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x818),&local_38);
    uVar3 = (**(code **)(*plVar4 + 0x78))(plVar4,local_38);
    (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x278))(*(longlong **)(param_1 + 0x7e0),uVar3);
    uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x870) + 0x260))(*(longlong **)(param_1 + 0x870))
    ;
    if (cVar1 == '\0') {
      plVar4 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,uVar3);
      FUN_00416cd0(&local_50,4,*(undefined8 *)PTR_DAT_02001340,&DAT_01b9a8ec,local_58,L".tcr");
      (**(code **)(**(longlong **)(param_1 + 0x880) + 0x80))
                (*(longlong **)(param_1 + 0x880),local_50,uVar5);
    }
    else {
      plVar4 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,uVar3);
      FUN_00416cd0(&local_40,4,*(undefined8 *)PTR_DAT_02004438,&DAT_01b9a8ec,local_48,L".tcr");
      (**(code **)(**(longlong **)(param_1 + 0x880) + 0x80))
                (*(longlong **)(param_1 + 0x880),local_40,uVar5);
    }
    plVar4 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
    (**(code **)(*plVar4 + 0x48))(plVar4,uVar3,1);
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x818),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7e0),1);
  FUN_01b9aa30(param_1,param_2);
  FUN_00414560(&local_58,4);
  FUN_00414560(&local_38,2);
  return;
}

