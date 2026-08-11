/* Ghidra address: 010dbe80 */
/* Ghidra symbol: FUN_010dbe80 */


undefined8 FUN_010dbe80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x408) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x408) + 0xe00);
  }
  return uVar2;
}

