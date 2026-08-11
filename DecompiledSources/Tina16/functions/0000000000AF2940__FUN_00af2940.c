/* Ghidra address: 00af2940 */
/* Ghidra symbol: FUN_00af2940 */


void FUN_00af2940(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_c;
  
  local_20 = auStack_48;
  cVar1 = FUN_00af2f30(param_1);
  if (cVar1 == '\0') {
    FUN_00afe640(param_1,1);
    local_c = FUN_00af5fb0(param_1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x8b0) + 0x2b8) = 0;
    FUN_00aff150(param_1);
    FUN_00af2250(param_1);
    FUN_00af6000(param_1,local_c);
    FUN_00aff1c0(param_1);
    FUN_00afe640(param_1,0);
  }
  return;
}

