/* Ghidra address: 00c3f0d0 */
/* Ghidra symbol: FUN_00c3f0d0 */


ulonglong FUN_00c3f0d0(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  short sVar3;
  
  sVar3 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
  uVar2 = 0;
  if (-1 < (short)(sVar3 + -1)) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(longlong)(short)uVar2);
      if (*(int *)(lVar1 + 8) == param_2) {
        return uVar2;
      }
      uVar2 = (ulonglong)(ushort)((short)uVar2 + 1);
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
  }
  return 0xffffffff;
}

