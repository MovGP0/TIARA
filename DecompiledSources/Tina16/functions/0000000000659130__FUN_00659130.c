/* Ghidra address: 00659130 */
/* Ghidra symbol: FUN_00659130 */


undefined8 FUN_00659130(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x338) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x338));
  }
  return uVar1;
}

