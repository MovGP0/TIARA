/* Ghidra address: 01068a80 */
/* Ghidra symbol: FUN_01068a80 */


undefined8 FUN_01068a80(longlong param_1,int param_2)

{
  short sVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) + (longlong)param_2 * 2);
  uVar2 = (ulonglong)(ushort)(sVar1 - 0x2bU);
  if ((((ushort)(sVar1 - 0x2bU) == 0) ||
      (uVar2 = (ulonglong)(ushort)(sVar1 - 0x2dU), (ushort)(sVar1 - 0x2dU) == 0)) ||
     (uVar2 = (ulonglong)(ushort)(sVar1 - 0x30U), (ushort)(sVar1 - 0x30U) < 10)) {
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

