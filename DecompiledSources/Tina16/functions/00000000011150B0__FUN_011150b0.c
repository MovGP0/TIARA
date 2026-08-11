/* Ghidra address: 011150b0 */
/* Ghidra symbol: FUN_011150b0 */


void FUN_011150b0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00bff830(param_1);
  *(longlong *)(param_2 + 0x18) = (longlong)(int)(uVar1 & 0xff);
  FUN_00c00ff0(param_1);
  return;
}

