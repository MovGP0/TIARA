/* Ghidra address: 00dd72a0 */
/* Ghidra symbol: FUN_00dd72a0 */


undefined1 FUN_00dd72a0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_00dd7270(param_1);
  if (cVar1 == '\x04') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x94);
  }
  return uVar2;
}

