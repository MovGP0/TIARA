/* Ghidra address: 004bd8c0 */
/* Ghidra symbol: FUN_004bd8c0 */


void FUN_004bd8c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_b0 [2];
  longlong local_a0;
  undefined8 local_68 [2];
  longlong local_58;
  undefined8 local_20;
  
  local_58 = *(longlong *)(param_1 + 0x78) + 8;
  local_20 = param_2;
  iVar1 = FUN_00596a10(local_58,&local_20);
  if (iVar1 < 0) {
    local_a0 = *(longlong *)(param_1 + 0x70) + 8;
    local_68[0] = param_2;
    iVar1 = FUN_00596a10(local_a0,local_68);
    if (-1 < iVar1) {
      local_b0[0] = param_2;
      FUN_00597e50(*(longlong *)(param_1 + 0x78) + 8,local_b0);
    }
  }
  return;
}

