/* Ghidra address: 014f9ce0 */
/* Ghidra symbol: FUN_014f9ce0 */


undefined8 FUN_014f9ce0(void)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = FUN_01d03160();
  if ((sVar1 == 0x7d) || (sVar1 == 0x7e)) {
    uVar2 = CONCAT71((uint7)(byte)((ushort)sVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

