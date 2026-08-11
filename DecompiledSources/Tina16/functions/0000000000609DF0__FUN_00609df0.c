/* Ghidra address: 00609df0 */
/* Ghidra symbol: FUN_00609df0 */


undefined8 FUN_00609df0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (((*(longlong *)(lVar1 + 0x10) == 0) && (*(longlong *)(lVar1 + 0x28) == 0)) &&
     (*(longlong *)(lVar1 + 0x30) == 0)) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

