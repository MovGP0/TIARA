/* Ghidra address: 01068ac0 */
/* Ghidra symbol: FUN_01068ac0 */


undefined8 FUN_01068ac0(longlong param_1,int param_2)

{
  short sVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) + (longlong)param_2 * 2);
  uVar2 = (ulonglong)(ushort)(sVar1 - 0x30U);
  if ((((ushort)(sVar1 - 0x30U) < 10) ||
      (uVar2 = (ulonglong)(ushort)(sVar1 - 0x41U), (ushort)(sVar1 - 0x41U) < 6)) ||
     (uVar2 = (ulonglong)(ushort)(sVar1 - 0x61U), (ushort)(sVar1 - 0x61U) < 6)) {
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

