/* Ghidra address: 01820fc0 */
/* Ghidra symbol: FUN_01820fc0 */


void FUN_01820fc0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  iVar2 = FUN_00414cb0(param_2);
  iVar3 = 1;
  if (0 < iVar2) {
    do {
      uVar4 = (ulonglong)*(byte *)(param_2 + -2 + (longlong)iVar3 * 2);
      pbVar1 = (byte *)(param_1 + 0x58 + ((longlong)uVar4 >> 3));
      *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

