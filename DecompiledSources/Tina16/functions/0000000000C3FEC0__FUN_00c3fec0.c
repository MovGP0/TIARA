/* Ghidra address: 00c3fec0 */
/* Ghidra symbol: FUN_00c3fec0 */


ulonglong FUN_00c3fec0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  short sVar4;
  
  sVar4 = *(short *)(param_1 + 0x10);
  uVar3 = 0;
  if (-1 < (short)(sVar4 + -1)) {
    do {
      lVar2 = FUN_004aeac0(param_1,(longlong)(short)uVar3);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x10),param_2);
      if (iVar1 == 0) {
        return uVar3;
      }
      uVar3 = (ulonglong)(ushort)((short)uVar3 + 1);
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
  }
  return 0xffffffff;
}

