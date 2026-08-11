/* Ghidra address: 00f7f600 */
/* Ghidra symbol: FUN_00f7f600 */


undefined8 FUN_00f7f600(longlong param_1)

{
  short sVar1;
  char cVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  ushort local_34;
  ushort local_32;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_10;
  
  local_40 = auStack_98;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0x38));
  FUN_00f7f400(param_1);
  while( true ) {
    cVar2 = FUN_01b215f0(*(undefined2 *)(param_1 + 0x38));
    if (cVar2 == '\0') break;
    FUN_00416780(&local_48,*(undefined2 *)(param_1 + 0x38));
    FUN_00416ad0(&local_28,local_48);
    FUN_00f7f400(param_1);
  }
  if (*(short *)(param_1 + 0x38) == *(short *)(PTR_DAT_02004830 + 0x17a)) {
    FUN_00416780(&local_50,*(short *)(param_1 + 0x38));
    FUN_00416ad0(&local_28,local_50);
    FUN_00f7f400(param_1);
  }
  while( true ) {
    cVar2 = FUN_01b215f0(*(undefined2 *)(param_1 + 0x38));
    if (cVar2 == '\0') break;
    FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0x38));
    FUN_00416ad0(&local_28,local_58);
    FUN_00f7f400(param_1);
  }
  local_32 = *(ushort *)(param_1 + 0x38);
  local_34 = local_32;
  if ((ushort)(local_32 - 0x61) < 0x1a) {
    local_34 = local_32 & 0xffdf;
  }
  if (local_34 == 0x45) {
    FUN_00416780(&local_60,local_32);
    FUN_00416ad0(&local_28,local_60);
    FUN_00f7f400(param_1);
    sVar1 = *(short *)(param_1 + 0x38);
    if ((sVar1 == 0x2b) || (sVar1 == 0x2d)) {
      FUN_00416780(&local_68,sVar1);
      FUN_00416ad0(&local_28,local_68);
      FUN_00f7f400(param_1);
    }
    while( true ) {
      cVar2 = FUN_01b215f0(*(undefined2 *)(param_1 + 0x38));
      if (cVar2 == '\0') break;
      FUN_00416780(&local_70,*(undefined2 *)(param_1 + 0x38));
      FUN_00416ad0(&local_28,local_70);
      FUN_00f7f400(param_1);
    }
  }
  local_20 = FUN_00448650(local_28,PTR_DAT_02004830);
  local_10 = local_20;
  FUN_00414560(&local_70,6);
  FUN_00414480(&local_28);
  return local_20;
}

