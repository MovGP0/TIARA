/* Ghidra address: 007d5020 */
/* Ghidra symbol: FUN_007d5020 */


undefined8 FUN_007d5020(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005fbf20();
  if ((int)uVar1 == 0x1fffffff) {
    uVar1 = 0xffffffff;
  }
  else if ((int)uVar1 == 0x20000000) {
    uVar1 = 0xff000000;
  }
  return uVar1;
}

