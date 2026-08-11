/* Ghidra address: 0084c690 */
/* Ghidra symbol: FUN_0084c690 */


undefined8 FUN_0084c690(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_0084bd30(*(undefined8 *)(param_1 + 0x38));
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}

