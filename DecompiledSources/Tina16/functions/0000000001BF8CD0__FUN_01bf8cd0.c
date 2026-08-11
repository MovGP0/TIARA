/* Ghidra address: 01bf8cd0 */
/* Ghidra symbol: FUN_01bf8cd0 */


undefined8 FUN_01bf8cd0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x118) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_01bf8df0();
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x10) >> 8),
                     0 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0x10));
  }
  return uVar2;
}

