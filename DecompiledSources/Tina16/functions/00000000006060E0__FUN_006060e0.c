/* Ghidra address: 006060e0 */
/* Ghidra symbol: FUN_006060e0 */


undefined8 FUN_006060e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

