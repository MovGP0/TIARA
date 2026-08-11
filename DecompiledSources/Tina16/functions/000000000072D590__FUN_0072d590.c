/* Ghidra address: 0072d590 */
/* Ghidra symbol: FUN_0072d590 */


undefined8 FUN_0072d590(ushort param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = (byte)(param_1 >> 8);
  if ((param_1 & 4) == 0) {
    if ((param_1 & 1) == 0) {
      uVar2 = CONCAT71((uint7)bVar1,5);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = CONCAT71((uint7)bVar1,2);
  }
  return uVar2;
}

