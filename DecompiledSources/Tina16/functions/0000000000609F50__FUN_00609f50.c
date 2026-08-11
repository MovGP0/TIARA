/* Ghidra address: 00609f50 */
/* Ghidra symbol: FUN_00609f50 */


undefined8 FUN_00609f50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((*(short *)(lVar1 + 0x50) == 1) && (*(short *)(lVar1 + 0x52) == 1)) {
    uVar2 = CONCAT71((int7)((ulonglong)(lVar1 + 0x40) >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

