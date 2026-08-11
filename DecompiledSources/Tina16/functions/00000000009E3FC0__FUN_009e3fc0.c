/* Ghidra address: 009e3fc0 */
/* Ghidra symbol: FUN_009e3fc0 */


int FUN_009e3fc0(longlong param_1,byte *param_2,ushort *param_3,int param_4,undefined1 *param_5,
                int param_6,byte *param_7)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ushort *puVar12;
  undefined1 auStack_1068 [4088];
  undefined8 auStack_70 [5];
  longlong local_48;
  ushort *local_40;
  
  uVar8 = (longlong)param_6 + 0x10U & 0xfffffffffffffff0;
  uVar11 = -uVar8;
  uVar6 = uVar11 & 0xfff;
  local_48 = param_1;
  local_40 = param_3;
  while ((longlong)uVar11 < (longlong)uVar6) {
    auStack_1068[uVar6] = (char)(uVar6 - 0x1000);
    uVar6 = uVar6 - 0x1000;
  }
  lVar5 = -uVar8;
  puVar1 = (undefined1 *)((longlong)&local_48 + lVar5);
  puVar10 = puVar1;
  for (lVar9 = (longlong)param_6 + 1; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *param_5;
    param_5 = param_5 + 1;
    puVar10 = puVar10 + 1;
  }
  pbVar2 = param_2 + param_4;
  bVar7 = param_7[1];
  puVar12 = local_40;
  while (param_2 != pbVar2) {
    bVar3 = *param_2;
    param_2 = param_2 + 1;
    bVar4 = *param_7;
    if (bVar4 < 4) {
      if (bVar4 == 3) {
        *puVar12 = (ushort)(byte)(&DAT_01e43050)[(int)(uint)(bVar3 >> 2)];
        puVar12 = puVar12 + 1;
        bVar7 = (bVar3 & 3) << 4;
        *param_7 = 4;
      }
      else if (bVar4 == 0) {
        *(undefined *)puVar12 = (&DAT_01e43050)[(int)(uint)(bVar3 >> 2)];
        puVar12 = (ushort *)((longlong)puVar12 + 1);
        bVar7 = (bVar3 & 3) << 4;
        *param_7 = 1;
      }
      else if (bVar4 == 1) {
        *(undefined *)puVar12 = (&DAT_01e43050)[(int)(uint)(byte)(bVar7 | bVar3 >> 4)];
        puVar12 = (ushort *)((longlong)puVar12 + 1);
        bVar7 = (bVar3 & 0xf) * '\x04';
        *param_7 = 2;
      }
      else if (bVar4 == 2) {
        *(undefined *)puVar12 = (&DAT_01e43050)[(int)(uint)(byte)(bVar7 | bVar3 >> 6)];
        bVar7 = bVar3 & 0x3f;
        *(undefined *)((longlong)puVar12 + 1) = (&DAT_01e43050)[(int)(uint)bVar7];
        puVar12 = puVar12 + 1;
        *(int *)(param_7 + 4) = *(int *)(param_7 + 4) + 1;
        if ((0 < *(int *)(local_48 + 8)) && (*(int *)(local_48 + 8) / 4 <= *(int *)(param_7 + 4))) {
          *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x9e426e;
          FUN_00409a70(puVar1,puVar12,(longlong)(param_6 + 1));
          puVar12 = (ushort *)((longlong)puVar12 + (longlong)(param_6 + 1));
          param_7[4] = 0;
          param_7[5] = 0;
          param_7[6] = 0;
          param_7[7] = 0;
        }
        *param_7 = 0;
      }
    }
    else if (bVar4 == 4) {
      *puVar12 = (ushort)(byte)(&DAT_01e43050)[(int)(uint)(byte)(bVar7 | bVar3 >> 4)];
      puVar12 = puVar12 + 1;
      bVar7 = (bVar3 & 0xf) * '\x04';
      *param_7 = 5;
    }
    else if (bVar4 == 5) {
      *puVar12 = (ushort)(byte)(&DAT_01e43050)[(int)(uint)(byte)(bVar7 | bVar3 >> 6)];
      bVar7 = bVar3 & 0x3f;
      puVar12[1] = (ushort)(byte)(&DAT_01e43050)[(int)(uint)bVar7];
      puVar12 = puVar12 + 2;
      *(int *)(param_7 + 4) = *(int *)(param_7 + 4) + 1;
      if ((0 < *(int *)(local_48 + 8)) && (*(int *)(local_48 + 8) / 4 <= *(int *)(param_7 + 4))) {
        *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x9e4332;
        FUN_00409a70(puVar1,puVar12,(longlong)(param_6 + 1));
        puVar12 = (ushort *)((longlong)puVar12 + (longlong)(param_6 + 1));
        param_7[4] = 0;
        param_7[5] = 0;
        param_7[6] = 0;
        param_7[7] = 0;
      }
      *param_7 = 3;
    }
  }
  param_7[1] = bVar7;
  return (int)puVar12 - (int)local_40;
}

