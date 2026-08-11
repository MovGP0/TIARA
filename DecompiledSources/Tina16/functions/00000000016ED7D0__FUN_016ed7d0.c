/* Ghidra address: 016ed7d0 */
/* Ghidra symbol: FUN_016ed7d0 */


undefined8 FUN_016ed7d0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\x06') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

