/* Ghidra address: 00f8b910 */
/* Ghidra symbol: FUN_00f8b910 */


undefined8 FUN_00f8b910(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3518) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x3518));
  }
  return uVar1;
}

