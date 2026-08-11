/* Ghidra address: 005fbdf0 */
/* Ghidra symbol: FUN_005fbdf0 */


void FUN_005fbdf0(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  int local_2c;
  longlong local_28;
  int local_20;
  
  local_40 = auStack_68;
  local_20 = 0;
  local_28 = FUN_004afa30(DAT_02012038);
  while (local_20 < *(int *)(local_28 + 0x10)) {
    local_38 = FUN_004aeac0(local_28,local_20);
    FUN_005fdf10(local_38);
    local_20 = local_20 + 1;
    FUN_005ffa80(local_38);
  }
  FUN_005fbd20(auStack_68,DAT_02012028);
  FUN_005fbd20(auStack_68,DAT_02012030);
  local_2c = 0;
  iVar2 = local_20;
  if (-1 < local_20 + -1) {
    do {
      uVar1 = FUN_004aeac0(local_28,local_2c);
      FUN_005fe090(uVar1);
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00412130(*(undefined8 *)(DAT_02012038 + 0x10));
  return;
}

