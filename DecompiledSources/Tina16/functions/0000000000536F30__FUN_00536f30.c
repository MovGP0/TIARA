/* Ghidra address: 00536f30 */
/* Ghidra symbol: FUN_00536f30 */


undefined8 FUN_00536f30(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_00589390();
  puVar2 = (undefined8 *)FUN_00588300(uVar1);
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}

