/* Ghidra address: 00f95f60 */
/* Ghidra symbol: FUN_00f95f60 */


void FUN_00f95f60(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_98;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_38);
  cVar2 = FUN_00f60aa0(local_38);
  if (cVar2 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_50);
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_60,PTR_PTR_02002020);
    FUN_00b8e650(uVar4,&local_58,L"HDLStrings.Msg_FC_InvIdentifier",local_60);
    local_78 = local_58;
    FUN_00416cd0(&local_48,3,local_50,&DAT_00f9619c);
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_48);
    FUN_004134c0(uVar4);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_40);
    FUN_00414ad0(param_1 + 0x700,local_40);
  }
  plVar1 = *(longlong **)(param_1 + 0x6f0);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_68,uVar3);
  FUN_00414ad0(param_1 + 0x708,local_68);
  uVar3 = FUN_00f962d0(param_1);
  *(undefined4 *)(param_1 + 0x710) = uVar3;
  FUN_00414560(&local_68,3);
  FUN_00414560(&local_50,4);
  return;
}

