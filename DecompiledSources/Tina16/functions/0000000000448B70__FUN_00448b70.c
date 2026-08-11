/* Ghidra address: 00448b70 */
/* Ghidra symbol: FUN_00448b70 */


undefined8 FUN_00448b70(uint param_1,ushort param_2,ushort param_3,double *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  uVar2 = FUN_00448b30(param_1);
  lVar1 = (uVar2 & 0xff) * 0x18;
  if (((((ushort)param_1 != 0) && ((ushort)param_1 < 10000)) && (param_2 != 0)) &&
     (((param_2 < 0xd && (param_3 != 0)) &&
      (param_3 <= *(ushort *)(&DAT_01dbe786 + (ulonglong)param_2 * 2 + lVar1))))) {
    iVar4 = param_2 - 1;
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        param_3 = param_3 + *(short *)(&DAT_01dbe786 + (longlong)iVar3 * 2 + lVar1);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar3 = (param_1 & 0xffff) - 1;
    *param_4 = (double)(int)(((iVar3 * 0x16d + iVar3 / 4) - iVar3 / 100) + iVar3 / 400 +
                             (uint)param_3 + -0xa955a);
    uVar5 = 1;
  }
  return uVar5;
}

