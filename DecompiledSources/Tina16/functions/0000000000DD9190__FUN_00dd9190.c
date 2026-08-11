/* Ghidra address: 00dd9190 */
/* Ghidra symbol: FUN_00dd9190 */


void FUN_00dd9190(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  byte local_49;
  longlong local_48;
  byte local_39;
  longlong local_38;
  byte local_29;
  longlong local_28;
  byte local_19;
  longlong local_18;
  longlong *local_10;
  
  local_60 = auStack_98;
  local_68 = 0;
  local_70 = 0;
  local_10 = (longlong *)0x0;
  puVar1 = auStack_98;
  if ((*(char *)(param_1 + 0x30) == '\0') &&
     (puVar1 = auStack_98, *(longlong *)(param_1 + 0x18) != 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    FUN_0041b890(&local_10,*(undefined8 *)(param_1 + 0x18),&LAB_00dd9454);
    FUN_005fccd0(*(undefined8 *)(param_1 + 0x38),&local_68);
    FUN_004168e0(&local_70,local_68);
    (**(code **)(*local_10 + 0x20))(local_10,local_70);
    iVar3 = FUN_005fce00(*(undefined8 *)(param_1 + 0x38));
    (**(code **)(*local_10 + 0x30))(local_10,(longlong)iVar3 * 10000);
    local_18 = *(longlong *)(param_1 + 0x38);
    local_19 = *(byte *)(*(longlong *)(local_18 + 0x18) + 0x31);
    (**(code **)(*local_10 + 0x40))(local_10,-(uint)((local_19 & 1) != 0));
    local_28 = *(longlong *)(param_1 + 0x38);
    local_29 = *(byte *)(*(longlong *)(local_28 + 0x18) + 0x31);
    (**(code **)(*local_10 + 0x50))(local_10,-(uint)((local_29 & 2) != 0));
    local_38 = *(longlong *)(param_1 + 0x38);
    local_39 = *(byte *)(*(longlong *)(local_38 + 0x18) + 0x31);
    (**(code **)(*local_10 + 0x60))(local_10,-(uint)((local_39 & 4) != 0));
    local_48 = *(longlong *)(param_1 + 0x38);
    local_49 = *(byte *)(*(longlong *)(local_48 + 0x18) + 0x31);
    (**(code **)(*local_10 + 0x70))(local_10,-(uint)((local_49 & 8) != 0));
    uVar2 = FUN_005fcf90(*(undefined8 *)(param_1 + 0x38));
    (**(code **)(*local_10 + 0x90))(local_10,uVar2);
    *(undefined1 *)(param_1 + 0x30) = 0;
    puVar1 = local_60;
  }
  local_60 = puVar1;
  FUN_00414520(&local_70);
  FUN_00414480(&local_68);
  FUN_0041b800(&local_10);
  return;
}

