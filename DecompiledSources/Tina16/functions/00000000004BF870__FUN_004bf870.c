/* Ghidra address: 004bf870 */
/* Ghidra symbol: FUN_004bf870 */


undefined8 FUN_004bf870(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 0x147) & 1) == 0) && (*(longlong *)(param_1 + 0x188) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

