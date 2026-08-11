/* Ghidra address: 00609ec0 */
/* Ghidra symbol: FUN_00609ec0 */


undefined8 FUN_00609ec0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

