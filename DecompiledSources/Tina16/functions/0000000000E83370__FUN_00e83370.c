/* Ghidra address: 00e83370 */
/* Ghidra symbol: FUN_00e83370 */


ushort * FUN_00e83370(longlong param_1,ushort *param_2,int param_3,longlong param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  
  uVar2 = *param_2;
  iVar8 = 0;
  if (uVar2 < 0x100) {
    iVar8 = param_3;
  }
  uVar5 = 0xff;
  if (uVar2 < 0xff) {
    uVar5 = uVar2;
  }
  *(byte *)(param_1 + (ulonglong)(uVar5 >> 3)) =
       *(byte *)(param_1 + (ulonglong)(uVar5 >> 3)) | (byte)(1 << ((byte)uVar5 & 7));
  if ((param_5 == 0) || (uVar5 < 0x80)) {
    if ((iVar8 != 0) && ((*(byte *)(*(longlong *)(param_4 + 0x18) + (ulonglong)uVar5) & 2) != 0)) {
      bVar1 = *(byte *)(*(longlong *)(param_4 + 8) + (ulonglong)uVar5);
      uVar4 = (ulonglong)(bVar1 >> 3);
      *(byte *)(param_1 + uVar4) = *(byte *)(param_1 + uVar4) | (byte)(1 << (bVar1 & 7));
    }
    puVar7 = param_2 + 1;
  }
  else {
    uVar6 = (uint)*param_2;
    if ((uVar6 & 0xfc00) == 0xd800) {
      puVar7 = param_2 + 2;
      uVar6 = (*param_2 & 0x3ff) * 0x400 + 0x10000 + (param_2[1] & 0x3ff);
    }
    else {
      puVar7 = param_2 + 1;
    }
    if (iVar8 != 0) {
      uVar3 = 0xff;
      if (uVar6 + *(int *)(&DAT_01ee2144 +
                          (ulonglong)
                          *(ushort *)
                           (&DAT_01ee59c0 +
                           ((longlong)(int)(uVar6 % 0x80) +
                           (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar6 >> 7] * 0x80) * 2) * 8) <
          0xff) {
        uVar3 = uVar6 + *(int *)(&DAT_01ee2144 +
                                (ulonglong)
                                *(ushort *)
                                 (&DAT_01ee59c0 +
                                 ((longlong)(int)(uVar6 % 0x80) +
                                 (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar6 >> 7] * 0x80) * 2) * 8)
        ;
      }
      *(byte *)(param_1 + (ulonglong)(uVar3 >> 3)) =
           *(byte *)(param_1 + (ulonglong)(uVar3 >> 3)) | (byte)(1 << ((byte)uVar3 & 7));
    }
  }
  return puVar7;
}

