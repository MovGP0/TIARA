/* Ghidra address: 004b1870 */
/* Ghidra symbol: FUN_004b1870 */


undefined8 FUN_004b1870(longlong param_1)

{
  undefined8 uVar1;
  longlong local_10;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = param_1;
    uVar1 = FUN_00596a10(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8,&local_10);
  }
  return uVar1;
}

