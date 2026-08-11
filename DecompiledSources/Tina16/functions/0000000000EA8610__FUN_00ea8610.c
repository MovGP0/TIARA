/* Ghidra address: 00ea8610 */
/* Ghidra symbol: FUN_00ea8610 */


undefined8
FUN_00ea8610(longlong param_1,undefined8 param_2,longlong param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  char local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  int local_28;
  char local_21;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_58 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (param_3 != 0) {
    local_28 = *(int *)(param_3 + -4);
  }
  if ((local_28 < param_4) || (puVar1 = auStack_88, param_4 < 1)) {
    FUN_00ea68e0(param_4);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  local_2c = 0;
  if (param_3 != 0) {
    local_2c = *(int *)(param_3 + -4);
  }
  iVar2 = param_4 + param_5 + -1;
  if ((local_2c < iVar2) || (iVar2 < 1)) {
    FUN_00ea68e0(iVar2);
  }
  FUN_00ea4ee0(*(undefined8 *)(param_1 + 0x20),param_3);
  FUN_00ea4e40(*(undefined8 *)(param_1 + 0x20),param_4);
  FUN_00ea4e60(*(undefined8 *)(param_1 + 0x20),iVar2);
  local_21 = FUN_00ea4940(*(undefined8 *)(param_1 + 0x20));
  if (local_21 == '\0') {
    FUN_00ea47c0(*(undefined8 *)(param_1 + 0x20),&local_58);
    local_68 = 0;
    local_60 = local_21;
    FUN_00ea7370(param_2,*(undefined8 *)(param_1 + 0x18),local_58,0);
  }
  else {
    local_20[0] = 0;
    FUN_00ea47c0(*(undefined8 *)(param_1 + 0x20),local_20);
    local_38 = *(undefined8 *)(param_1 + 0x20);
    local_44 = FUN_00ea4500(local_38,0);
    local_40 = *(undefined8 *)(param_1 + 0x20);
    local_68 = FUN_00ea4460(local_40,0);
    local_60 = local_21;
    FUN_00ea7370(param_2,*(undefined8 *)(param_1 + 0x18),local_20[0],local_44);
    FUN_00414480(local_20);
  }
  FUN_00414480(&local_58);
  return param_2;
}

