/* Ghidra address: 004cb4c0 */
/* Ghidra symbol: FUN_004cb4c0 */


void FUN_004cb4c0(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined1 *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [378];
  undefined2 local_4e;
  undefined8 local_40;
  undefined8 local_38;
  char local_29;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_1e0 = auStack_208;
  local_1e8 = 0;
  local_40 = 0;
  local_1d0 = 0;
  FUN_00417580(local_1c8,&DAT_00437810);
  local_1c = 0;
  local_29 = '\0';
  local_38 = FUN_004baeb0(&PTR_FUN_0047f878,1,param_1,0x1000);
  FUN_0044bd60(local_1c8,L"en-US");
  local_4e = 0x2e;
  local_1d8 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_28 = FUN_004baeb0(&PTR_FUN_004812f0,1,local_1d8,0x1000);
  FUN_004c1d40(local_38);
  FUN_004cb400(auStack_208);
  FUN_00410f20(local_28);
  if (local_29 != '\0') {
    plVar2 = (longlong *)FUN_0045ae90();
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_1e8);
    (**(code **)(*param_2 + 0x20))(param_2,local_1e8,3);
  }
  uVar1 = (**(code **)*local_1d8)(local_1d8);
  (**(code **)(*param_2 + 0x20))(param_2,local_1d8[1],uVar1);
  FUN_00410f20(local_1d8);
  FUN_00410f20(local_38);
  FUN_00419430(&local_1e8,&DAT_00406578);
  FUN_00414480(&local_1d0);
  FUN_00417740(local_1c8,&DAT_00437810);
  FUN_00414480(&local_40);
  return;
}

