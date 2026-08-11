/* Ghidra address: 014f9c20 */
/* Ghidra symbol: FUN_014f9c20 */


undefined8 FUN_014f9c20(void)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = FUN_01d03160();
  if (((sVar1 == 0xf0) || (sVar1 == 0xf1)) || (sVar1 == 0xf2)) {
    uVar2 = CONCAT71((uint7)(byte)((ushort)sVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

