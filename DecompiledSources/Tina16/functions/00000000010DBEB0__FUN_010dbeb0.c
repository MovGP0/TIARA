/* Ghidra address: 010dbeb0 */
/* Ghidra symbol: FUN_010dbeb0 */


undefined8 FUN_010dbeb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x408) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x408) + 0xe08);
  }
  return uVar2;
}

