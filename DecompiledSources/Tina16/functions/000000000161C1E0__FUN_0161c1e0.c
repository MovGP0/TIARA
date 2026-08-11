/* Ghidra address: 0161c1e0 */
/* Ghidra symbol: FUN_0161c1e0 */


undefined8 FUN_0161c1e0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x21) == 'd') || (*(char *)(param_1 + 0x21) == 'q')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

