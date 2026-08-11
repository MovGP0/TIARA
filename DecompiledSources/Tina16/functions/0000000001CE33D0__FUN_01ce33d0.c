/* Ghidra address: 01ce33d0 */
/* Ghidra symbol: FUN_01ce33d0 */


undefined1 FUN_01ce33d0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_01ce3400(param_1);
  if (iVar2 < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x59);
  }
  return uVar1;
}

