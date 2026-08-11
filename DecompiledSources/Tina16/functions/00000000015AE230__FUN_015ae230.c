/* Ghidra address: 015ae230 */
/* Ghidra symbol: FUN_015ae230 */


undefined1 FUN_015ae230(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 *local_90;
  undefined4 local_7c;
  longlong local_78;
  undefined1 local_69 [64];
  char local_29;
  longlong *local_28;
  undefined1 local_19;
  
  local_90 = auStack_b8;
  local_98 = 0;
  local_78 = 0;
  local_29 = *PTR_DAT_020019b0;
  FUN_00410ae0(param_1,&local_98);
  FUN_00415dd0(&local_78,local_98,0);
  local_19 = DAT_01f6c3e0;
  local_28 = (longlong *)FUN_015ade10(param_1,1,0,0);
  DAT_01f6c3e0 = 0;
  *(undefined1 *)(local_28 + 5) = 0;
  local_7c = 0;
  if (local_78 != 0) {
    local_7c = *(undefined4 *)(local_78 + -4);
  }
  uVar2 = FUN_00415ab0(local_78);
  (**(code **)(*local_28 + 0x68))(local_28,uVar2,local_7c,0);
  uVar2 = FUN_015abdc0();
  FUN_015ae9c0(local_28,uVar2,local_69,0x20);
  if (local_29 == '\0') {
LAB_015ae351:
    local_29 = '\0';
  }
  else {
    uVar2 = (**(code **)(*local_28 + 0x50))(*local_28);
    iVar1 = FUN_015ab4e0(uVar2,local_69,0x20);
    if (iVar1 != 0) goto LAB_015ae351;
    local_29 = '\x01';
  }
  (**(code **)(*local_28 + 0x70))(local_28);
  FUN_015af530(local_28,local_69,local_69,0x20);
  if (local_29 != '\0') {
    uVar2 = FUN_015abdc0();
    iVar1 = FUN_015ab4e0(uVar2,local_69,0x20);
    if (iVar1 == 0) {
      local_29 = 1;
      goto LAB_015ae3b5;
    }
  }
  local_29 = 0;
LAB_015ae3b5:
  DAT_01f6c3e0 = local_19;
  FUN_00410f20(local_28);
  FUN_0040d200(local_69,0x40,0);
  FUN_00414480(&local_98);
  FUN_004144d0(&local_78);
  return local_29;
}

