/* Ghidra address: 00c52a00 */
/* Ghidra symbol: FUN_00c52a00 */


void FUN_00c52a00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_58;
  FUN_00c51bb0(param_1);
  local_c = FUN_00c52b80(param_1);
  local_c = local_c + -1;
  if (-1 < local_c) {
    do {
      uVar1 = FUN_00c52b60(param_1,local_c);
      local_38 = param_5;
      FUN_00c51a80(uVar1,param_2,param_3,param_4);
      if (*(char *)(param_1 + 0x88) != '\0') break;
      local_c = local_c + -1;
    } while (local_c != -1);
  }
  FUN_00c52ac0(param_1);
  return;
}

