/* Ghidra address: 0060ce00 */
/* Ghidra symbol: FUN_0060ce00 */


undefined8 FUN_0060ce00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((*(longlong *)(lVar1 + 0x20) == 0) && (*(longlong *)(lVar1 + 0x10) == 0)) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

