/* Ghidra address: 00e814c0 */
/* Ghidra symbol: FUN_00e814c0 */


undefined8 FUN_00e814c0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x78);
  if ((uVar1 < *(ulonglong *)(param_1 + 0x88)) &&
     (uVar1 = (ulonglong)*(uint *)(param_1 + 0xac),
     (int)*(uint *)(param_1 + 0xac) < *(int *)(param_1 + 0xa4))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar2;
}

