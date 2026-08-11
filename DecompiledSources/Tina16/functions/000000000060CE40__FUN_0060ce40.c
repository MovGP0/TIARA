/* Ghidra address: 0060ce40 */
/* Ghidra symbol: FUN_0060ce40 */


undefined8 FUN_0060ce40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

