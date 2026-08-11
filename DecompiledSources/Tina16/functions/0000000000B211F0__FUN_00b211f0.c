/* Ghidra address: 00b211f0 */
/* Ghidra symbol: FUN_00b211f0 */


undefined1 FUN_00b211f0(undefined8 param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined2 *local_70;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_30 [4];
  int local_2c [3];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_78 = param_1;
  local_70 = param_2;
  FUN_00b15a50(&local_38,param_1);
  FUN_004144d0(&local_40);
  FUN_004144d0(&local_48);
  bVar6 = 0;
  FUN_00415ad0(&local_50,local_38,1,1);
  iVar2 = FUN_00415a60(local_50,&DAT_00b21468);
  if (iVar2 == 0) {
    bVar6 = 1;
    iVar2 = 0;
    if (local_38 != 0) {
      iVar2 = *(int *)(local_38 + -4);
    }
    FUN_00415ad0(&local_38,local_38,2,iVar2 + -1);
  }
  iVar2 = 0;
  if (local_38 != 0) {
    iVar2 = *(int *)(local_38 + -4);
  }
  iVar5 = 1;
  if (0 < iVar2) {
    do {
      cVar1 = *(char *)(local_38 + -1 + (longlong)iVar5);
      bVar3 = cVar1 - 0x40;
      if (0x1f < bVar3 || (1 << (bVar3 & 0x1f) & 0x7fffffeU) == 0) break;
      FUN_004153d0(&local_58,cVar1,0);
      FUN_004155b0(&local_40,local_58);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  if (local_40 != 0) {
    iVar2 = *(int *)(local_40 + -4);
  }
  uVar4 = 0;
  if (local_38 != 0) {
    uVar4 = *(undefined4 *)(local_38 + -4);
  }
  FUN_00415ad0(&local_48,local_38,iVar2 + 1,uVar4);
  FUN_00415ad0(&local_60,local_48,1,1);
  iVar2 = FUN_00415a60(local_60,&DAT_00b21468);
  if (iVar2 == 0) {
    bVar6 = bVar6 | 2;
    iVar2 = 0;
    if (local_48 != 0) {
      iVar2 = *(int *)(local_48 + -4);
    }
    FUN_00415ad0(&local_48,local_48,2,iVar2 + -1);
  }
  cVar1 = FUN_00b21170(auStack_98,local_48,local_2c);
  if (cVar1 == '\0') {
    local_61 = 0;
  }
  else {
    local_2c[0] = local_2c[0] + -1;
    cVar1 = FUN_00b20d50(local_40,local_30);
    if (cVar1 == '\0') {
      local_61 = 0;
    }
    else {
      *local_70 = (undefined2)local_2c[0];
      *(undefined1 *)(local_70 + 1) = local_30[0];
      *(byte *)((longlong)local_70 + 3) = bVar6;
      local_61 = 1;
    }
  }
  FUN_00414590(&local_60,6);
  return local_61;
}

