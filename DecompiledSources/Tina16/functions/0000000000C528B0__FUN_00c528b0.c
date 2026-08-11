/* Ghidra address: 00c528b0 */
/* Ghidra symbol: FUN_00c528b0 */


void FUN_00c528b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_48;
  FUN_00c51bb0(param_1);
  local_c = FUN_00c52b80(param_1);
  local_c = local_c + -1;
  if (-1 < local_c) {
    do {
      uVar1 = FUN_00c52b60(param_1,local_c);
      FUN_00c51a20(uVar1,param_2,param_3);
      if (*(char *)(param_1 + 0x88) != '\0') break;
      local_c = local_c + -1;
    } while (local_c != -1);
  }
  FUN_00c52ac0(param_1);
  return;
}

