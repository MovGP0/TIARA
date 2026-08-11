/* Ghidra address: 01499150 */
/* Ghidra symbol: FUN_01499150 */


void FUN_01499150(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0149a5d0(param_1);
  uVar4 = FUN_00b89270();
  FUN_0041ddd0(&local_40,PTR_PTR_020035d8);
  FUN_00b8e650(uVar4,&local_38,L"d.DesignToolObject_Msg_NewSession",local_40);
  cVar3 = FUN_01493b00(param_1,local_38);
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0xbc0) + 0xa8))(*(longlong **)(param_1 + 0xbc0));
    if (cVar3 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0xbc0),&local_48);
      (**(code **)(*local_20 + 0xd8))(local_20,local_48);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b8) + 0x4e8);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      lVar2 = *(longlong *)(param_1 + 0x930);
      local_58 = lVar2 + 0x650;
      FUN_010cd270(local_20,local_28,lVar2 + 0x628,lVar2 + 0x630);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b8) + 0x4e8);
      (**(code **)(*plVar1 + 0x88))(plVar1,local_28);
      FUN_00c0dad0(*(undefined8 *)(param_1 + 0x8b8),0);
    }
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,2);
  return;
}

