/* Ghidra address: 00a0a4e0 */
/* Ghidra symbol: FUN_00a0a4e0 */


void FUN_00a0a4e0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_398 [40];
  undefined1 *local_370;
  undefined1 local_368 [232];
  undefined1 local_280 [16];
  undefined8 local_270;
  undefined4 local_1f8;
  undefined4 local_1f4;
  
  local_370 = auStack_398;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    FUN_00a0a260(param_1,local_368);
    local_270 = 0;
    FUN_00a0e410(local_280);
    *(undefined4 *)(param_1 + 0x58) = local_1f8;
    *(undefined4 *)(param_1 + 0x5c) = local_1f4;
    iVar1 = FUN_00a0c2d0(local_280);
    *(bool *)(param_1 + 0x72) = iVar1 != 0;
    FUN_00a0a230(local_368);
  }
  return;
}

