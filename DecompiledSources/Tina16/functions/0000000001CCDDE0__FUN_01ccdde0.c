/* Ghidra address: 01ccdde0 */
/* Ghidra symbol: FUN_01ccdde0 */


undefined8 FUN_01ccdde0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x58) == '\x02') {
    uVar1 = 3;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

