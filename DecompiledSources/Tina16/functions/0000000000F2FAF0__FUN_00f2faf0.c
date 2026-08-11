/* Ghidra address: 00f2faf0 */
/* Ghidra symbol: FUN_00f2faf0 */


undefined8 FUN_00f2faf0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  int local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_18 = *(longlong *)(param_1 + 0x10);
    local_1c = 0;
    if (local_18 != 0) {
      local_1c = *(int *)(local_18 + -4);
    }
    puVar1 = auStack_58;
    if (0xb < local_1c) {
      FUN_00416780(&local_38,DAT_0202ecda);
      cVar2 = FUN_004562e0(param_1 + 0x10,local_38);
      puVar1 = local_30;
      if (cVar2 == '\0') {
        uVar3 = FUN_00f2fcd0(param_1);
        FUN_0043f780(param_2,uVar3);
        goto code_r0x00f2fbdb;
      }
    }
    local_30 = puVar1;
    FUN_00414480(&local_10);
    local_28 = FUN_00f2bb80(*(undefined8 *)(param_1 + 0x10));
    FUN_00448450(&local_10,local_28,PTR_DAT_02004830);
    FUN_00414ad0(param_2,local_10);
    FUN_00414480(&local_10);
  }
  else {
    local_30 = auStack_58;
    FUN_00414480(param_2);
  }
code_r0x00f2fbdb:
  FUN_00414480(&local_38);
  FUN_00414480(&local_10);
  return param_2;
}

