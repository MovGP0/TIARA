/* Ghidra address: 0043f450 */
/* Ghidra symbol: FUN_0043f450 */


undefined8 * FUN_0043f450(undefined8 *param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  byte bVar9;
  
  cVar2 = (char)param_3;
  if (((cVar2 == '\0') || (0x7fffffff < param_2)) && ((cVar2 != '\0' || (0xffffffff < param_2)))) {
    if (param_2 < 100000000000000) {
      if (param_2 < 1000000000000) {
        if (param_2 < 10000000000) {
          bVar9 = 10;
        }
        else {
          bVar9 = (99999999999 < param_2) + 0xb;
        }
      }
      else {
        bVar9 = (9999999999999 < param_2) + 0xd;
      }
    }
    else if (param_2 < 10000000000000000) {
      bVar9 = (999999999999999 < param_2) + 0xf;
    }
    else if (param_2 < 1000000000000000000) {
      bVar9 = (99999999999999999 < param_2) + 0x11;
    }
    else if (param_2 < 10000000000000000000) {
      bVar9 = 0x13;
    }
    else {
      bVar9 = 0x14;
    }
    FUN_004169f0(param_1);
    puVar3 = (undefined2 *)FUN_00416740(*param_1);
    *puVar3 = 0x2d;
    puVar8 = puVar3 + cVar2;
    if (bVar9 == 0x14) {
      *puVar8 = 0x31;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 0x7538dcfb76180000;
      bVar9 = 0x13;
    }
    if (0x11 < bVar9) {
      if (bVar9 == 0x13) {
        *puVar8 = 0x30;
        for (; 999999999999999999 < param_2; param_2 = param_2 + 0xf21f494c589c0000) {
          *puVar8 = *puVar8 + 1;
        }
        puVar8 = puVar8 + 1;
      }
      *puVar8 = 0x30;
      for (; 99999999999999999 < param_2; param_2 = param_2 + 0xfe9cba87a2760000) {
        *puVar8 = *puVar8 + 1;
      }
      puVar8 = puVar8 + 1;
      bVar9 = 0x11;
    }
    uVar4 = param_2 / 100000000;
    uVar1 = (param_2 % 100000000) / 100;
    iVar6 = (int)uVar1;
    *(undefined4 *)(puVar8 + ((ulonglong)bVar9 - 2)) =
         *(undefined4 *)
          (&DAT_01dbfb50 + (ulonglong)(uint)((int)(param_2 % 100000000) + iVar6 * -100) * 4);
    uVar1 = uVar1 / 100;
    iVar5 = (int)uVar1;
    *(undefined4 *)(puVar8 + ((ulonglong)bVar9 - 4)) =
         *(undefined4 *)(&DAT_01dbfb50 + (ulonglong)(uint)(iVar6 + iVar5 * -100) * 4);
    uVar1 = uVar1 / 100;
    *(undefined4 *)(puVar8 + ((ulonglong)bVar9 - 6)) =
         *(undefined4 *)(&DAT_01dbfb50 + (ulonglong)(uint)(iVar5 + (int)uVar1 * -100) * 4);
    *(undefined4 *)(puVar8 + ((ulonglong)bVar9 - 8)) = *(undefined4 *)(&DAT_01dbfb50 + uVar1 * 4);
    bVar9 = bVar9 - 8;
    uVar7 = (uint)uVar4;
    while (2 < bVar9) {
      iVar5 = (int)uVar4;
      uVar4 = (uVar4 & 0xffffffff) / 100;
      uVar7 = (uint)uVar4;
      bVar9 = bVar9 - 2;
      *(undefined4 *)(puVar8 + bVar9) =
           *(undefined4 *)(&DAT_01dbfb50 + (ulonglong)(iVar5 + uVar7 * -100) * 4);
    }
    if (bVar9 == 2) {
      *(undefined4 *)puVar8 = *(undefined4 *)(&DAT_01dbfb50 + (ulonglong)uVar7 * 4);
    }
    else {
      *puVar8 = (ushort)uVar7 | 0x30;
    }
  }
  else {
    FUN_0043f330(param_1,param_2,param_3);
  }
  return param_1;
}

