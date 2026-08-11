/* Ghidra address: 0111d670 */
/* Ghidra symbol: FUN_0111d670 */


void FUN_0111d670(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x150);
  if ((*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) + (longlong)(iVar1 + 1) * 2)
       == 0x2e) &&
     (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) + (longlong)(iVar1 + 2) * 2)
      == 0x2e)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x2d) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x163) = 0xd;
  }
  return;
}

