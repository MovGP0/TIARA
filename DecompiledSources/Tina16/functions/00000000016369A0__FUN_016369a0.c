/* Ghidra address: 016369a0 */
/* Ghidra symbol: FUN_016369a0 */


longlong * FUN_016369a0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 *local_70;
  byte *local_68;
  longlong *local_60;
  longlong local_58;
  byte *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  
  local_70 = auStack_b8;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_60 = *(longlong **)(param_2 + 0x48);
  local_38 = local_60;
  iVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))(*(longlong **)(param_2 + 8));
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x28))(*(longlong **)(param_1 + 0x6b0));
  FUN_01d01990(local_60,iVar2 + iVar3);
  iVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))(*(longlong **)(param_2 + 8));
  local_40 = (iVar2 + -2) / 2;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x28))
                    (*(longlong **)(param_1 + 0x6b8),(longlong)(iVar2 + -2) % 2 & 0xffffffff);
  local_40 = local_40 + iVar2;
  (**(code **)(*local_28 + 0x88))(local_28,*(undefined8 *)(param_1 + 0x6b0));
  (**(code **)(*local_28 + 0x88))(local_28,*(undefined8 *)(param_2 + 8));
  local_58 = param_1;
  if (*(char *)(param_1 + 0x5b8) == '\0') {
    local_58 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(param_3 + 0x48));
  }
  FUN_01634e60(local_58,local_28);
  local_98 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))(*(longlong **)(param_2 + 8));
  local_88 = 1;
  local_80 = 0;
  local_90 = param_2;
  FUN_016274c0(local_38,local_28,*(undefined8 *)(param_3 + 0x13980),param_3);
  uVar1 = (**(code **)(*local_60 + 0x2c8))(local_60);
  lVar4 = FUN_00409570(uVar1);
  local_60[0x18] = lVar4;
  (**(code **)(*local_60 + 0x2d0))(local_60,0,&local_48);
  local_68 = local_48;
  if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x4a) == '\0') {
    local_48[0x40] = 2;
  }
  else {
    local_48[0x40] = 4;
  }
  *local_48 = (byte)local_40;
  *(ushort *)(local_48 + 0x10) = (ushort)(byte)local_40;
  uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_68 + 8) = uVar5;
  uVar5 = FUN_00409570((ulonglong)*(ushort *)(local_68 + 0x10) << 3);
  *(undefined8 *)(local_68 + 0x18) = uVar5;
  local_68[0x30] = 0;
  local_68[0x31] = 0;
  FUN_0163e150(param_3,local_38,*(char *)(*(longlong *)(param_2 + 0x20) + 0x49) == '\0');
  if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x49) != '\0') {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),local_38);
  }
  *(int *)(param_3 + 0x74) = *(int *)(param_3 + 0x74) + 1;
  local_30 = local_38;
  FUN_00410f20(local_28);
  return local_30;
}

