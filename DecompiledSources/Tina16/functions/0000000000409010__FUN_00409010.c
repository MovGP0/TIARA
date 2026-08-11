/* Ghidra address: 00409010 */
/* Ghidra symbol: FUN_00409010 */


longlong * FUN_00409010(longlong *param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  
  FUN_0040d200(param_1,0x50,0);
  FUN_004073d0();
  FUN_00407440();
  for (puVar7 = DAT_02006b90; puVar7 != &DAT_02006b88; puVar7 = *(undefined **)(puVar7 + 8)) {
    *param_1 = *param_1 + 0x140000;
    param_1[2] = param_1[2] + 0x140000;
    param_1[8] = param_1[8] + 0x30;
    plVar3 = (longlong *)FUN_00408490(puVar7);
    while (plVar3 != (longlong *)0x0) {
      uVar5 = plVar3[-1];
      uVar8 = (uint)uVar5 & 0xfffffff0;
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 4) == 0) {
          param_1[3] = param_1[3] + (ulonglong)(uVar8 - 8);
          param_1[8] = param_1[8] + 8;
        }
        else {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *plVar3 - 0x1db90f8;
          iVar6 = (int)plVar3[4];
          uVar1 = (&DAT_01db90fa)[(ulonglong)SUB164(auVar2 / ZEXT816(0x40),0) * 0x20];
          param_1[5] = param_1[5] + (ulonglong)((uVar8 - iVar6 * (uint)uVar1) - 8);
          param_1[8] = param_1[8] + (ulonglong)(iVar6 * 8 + 8);
          param_1[3] = param_1[3] + (ulonglong)(iVar6 * (uint)uVar1 + iVar6 * -8);
        }
      }
      else {
        param_1[6] = param_1[6] + (ulonglong)uVar8;
      }
      plVar3 = (longlong *)FUN_00408470();
    }
  }
  param_1[7] = param_1[7] + (ulonglong)DAT_02006bb8;
  DAT_02006ba8 = 0;
  iVar6 = 0x2e;
  puVar4 = &DAT_01db90f8;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 0x40;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_00407690();
  for (puVar7 = DAT_0200ac50; puVar7 != &DAT_0200ac48; puVar7 = *(undefined **)(puVar7 + 8)) {
    uVar5 = *(ulonglong *)(puVar7 + 0x18) & 0xfffffffffffffff0;
    *param_1 = *param_1 + uVar5;
    param_1[2] = param_1[2] + uVar5;
    param_1[3] = param_1[3] + *(longlong *)(puVar7 + 0x10);
    param_1[8] = param_1[8] + (uVar5 - *(longlong *)(puVar7 + 0x10));
  }
  DAT_0200ac40 = 0;
  param_1[4] = param_1[5] + param_1[6] + param_1[7];
  return param_1;
}

