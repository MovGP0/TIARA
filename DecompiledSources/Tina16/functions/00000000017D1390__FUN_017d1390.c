/* Ghidra address: 017d1390 */
/* Ghidra symbol: FUN_017d1390 */


undefined1 FUN_017d1390(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x28);
  }
  return uVar1;
}

