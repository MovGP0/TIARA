/* Ghidra address: 00d98b50 */
/* Ghidra symbol: FUN_00d98b50 */


undefined8 FUN_00d98b50(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x180) + 0x48);
  if ((lVar1 != 0) && (iVar2 = FUN_00d74940(lVar1), 0 < iVar2)) {
    return 1;
  }
  return 0;
}

