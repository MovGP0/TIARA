/* Ghidra address: 004bf680 */
/* Ghidra symbol: FUN_004bf680 */


void FUN_004bf680(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x158) + -8);
  }
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_30[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x158) + (longlong)iVar1 * 8);
      FUN_00597e50(*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x68) + 8,local_30);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

