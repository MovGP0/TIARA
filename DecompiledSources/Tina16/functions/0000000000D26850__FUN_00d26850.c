/* Ghidra address: 00d26850 */
/* Ghidra symbol: FUN_00d26850 */


uint FUN_00d26850(longlong param_1,uint param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_1028 [4096];
  uint auStack_28 [4];
  
  uVar9 = ((longlong)param_4 + 1) * 4 + 0xfU & 0xfffffffffffffff0;
  uVar11 = -uVar9;
  uVar4 = uVar11 & 0xfff;
  while ((longlong)uVar11 < (longlong)uVar4) {
    auStack_1028[uVar4] = (char)(uVar4 - 0x1000);
    uVar4 = uVar4 - 0x1000;
  }
  lVar3 = -uVar9;
  puVar7 = (undefined4 *)((longlong)auStack_28 + lVar3);
  for (lVar6 = (longlong)param_4 + 1; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_3;
    param_3 = param_3 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar5 = param_2 & 0xff;
  uVar8 = param_2 >> 8 & 0xff;
  uVar10 = param_2 >> 0x10 & 0xff;
  param_2 = param_2 >> 0x18;
  if (*(int *)(*(longlong *)(param_1 + 0xa0) + 0x70) == 0x20) {
    uVar1 = *(uint *)((longlong)auStack_28 + lVar3 + 0xc);
    uVar5 = (uint)(byte)(&DAT_01ebef10)[(int)uVar5] ^ uVar1 & 0xff;
    uVar8 = (uint)(byte)(&DAT_01ebee10)[(int)uVar8] ^ uVar1 >> 8 & 0xff;
    uVar10 = (uint)(byte)(&DAT_01ebee10)[(int)uVar10] ^ uVar1 >> 0x10 & 0xff;
    param_2 = (uint)(byte)(&DAT_01ebef10)[(int)param_2] ^ uVar1 >> 0x18;
  }
  if (0x17 < *(int *)(*(longlong *)(param_1 + 0xa0) + 0x70)) {
    uVar1 = *(uint *)((longlong)auStack_28 + lVar3 + 8);
    uVar5 = (uint)(byte)(&DAT_01ebef10)[(int)uVar5] ^ uVar1 & 0xff;
    uVar8 = (uint)(byte)(&DAT_01ebef10)[(int)uVar8] ^ uVar1 >> 8 & 0xff;
    uVar10 = (uint)(byte)(&DAT_01ebee10)[(int)uVar10] ^ uVar1 >> 0x10 & 0xff;
    param_2 = (uint)(byte)(&DAT_01ebee10)[(int)param_2] ^ uVar1 >> 0x18;
  }
  uVar1 = *(uint *)((longlong)auStack_28 + lVar3 + 4);
  uVar2 = *(uint *)((longlong)auStack_28 + lVar3);
  return *(uint *)(&DAT_01ebf010 +
                  (longlong)
                  (int)((uint)(byte)(&DAT_01ebee10)
                                    [(int)((uint)(byte)(&DAT_01ebee10)[(int)uVar5] ^ uVar1 & 0xff)]
                       ^ uVar2 & 0xff) * 4) ^
         *(uint *)(&DAT_01ebf410 +
                  (longlong)
                  (int)((uint)(byte)(&DAT_01ebee10)
                                    [(int)((uint)(byte)(&DAT_01ebef10)[(int)uVar8] ^
                                          uVar1 >> 8 & 0xff)] ^ uVar2 >> 8 & 0xff) * 4) ^
         *(uint *)(&DAT_01ebf810 +
                  (longlong)
                  (int)((uint)(byte)(&DAT_01ebef10)
                                    [(int)((uint)(byte)(&DAT_01ebee10)[(int)uVar10] ^
                                          uVar1 >> 0x10 & 0xff)] ^ uVar2 >> 0x10 & 0xff) * 4) ^
         *(uint *)(&DAT_01ebfc10 +
                  (longlong)
                  (int)((uint)(byte)(&DAT_01ebef10)
                                    [(int)((uint)(byte)(&DAT_01ebef10)[(int)param_2] ^ uVar1 >> 0x18
                                          )] ^ uVar2 >> 0x18) * 4);
}

