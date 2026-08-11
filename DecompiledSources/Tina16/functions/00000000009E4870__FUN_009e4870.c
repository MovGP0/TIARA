/* Ghidra address: 009e4870 */
/* Ghidra symbol: FUN_009e4870 */


undefined8 * FUN_009e4870(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  longlong lVar8;
  ushort *puVar9;
  int local_44;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined4 *)(param_3 + -4);
  }
  FUN_004169f0(param_2,uVar3);
  puVar5 = (ushort *)FUN_00416740(param_3);
  puVar6 = (ushort *)FUN_00416740(*param_2);
  while (uVar1 = *puVar5, uVar1 != 0) {
    if (uVar1 == 0x26) {
      puVar9 = puVar5 + 1;
      bVar2 = false;
      uVar1 = *puVar9;
      if (uVar1 < 0x68) {
        if (uVar1 == 0x67) {
          puVar7 = (ushort *)FUN_0044fe40(puVar9,&DAT_009e4b0a);
          if (puVar7 == puVar9) {
            puVar9 = puVar5 + 3;
            *puVar6 = 0x3e;
            bVar2 = true;
          }
        }
        else if (uVar1 == 0x23) {
          for (puVar7 = puVar9; (*puVar7 != 0x3b && (*puVar7 != 0)); puVar7 = puVar7 + 1) {
          }
          FUN_00414740(local_40,puVar5 + 2,
                       ((longlong)puVar7 - (longlong)(puVar5 + 2)) / 2 & 0xffffffff);
          iVar4 = FUN_0040e860(local_40[0],&local_44);
          if (local_44 == 0) {
            if (iVar4 < 0x10000) {
              *puVar6 = (ushort)iVar4;
            }
            else {
              *puVar6 = (short)((iVar4 + -0x10000) / 0x400) + 0xd800;
              puVar6 = puVar6 + 1;
              *puVar6 = ((ushort)iVar4 & 0x3ff) + 0xdc00;
            }
            bVar2 = true;
            puVar9 = puVar7;
          }
        }
        else if ((uVar1 == 0x61) &&
                (puVar7 = (ushort *)FUN_0044fe40(puVar9,L"amp;"), puVar7 == puVar9)) {
          *puVar6 = 0x26;
          bVar2 = true;
          puVar9 = puVar5 + 4;
        }
      }
      else if (uVar1 == 0x6c) {
        puVar7 = (ushort *)FUN_0044fe40(puVar9,&DAT_009e4b02);
        if (puVar7 == puVar9) {
          puVar9 = puVar5 + 3;
          *puVar6 = 0x3c;
          bVar2 = true;
        }
      }
      else if ((uVar1 == 0x71) &&
              (puVar7 = (ushort *)FUN_0044fe40(puVar9,L"quot;"), puVar7 == puVar9)) {
        puVar9 = puVar5 + 5;
        *puVar6 = 0x22;
        bVar2 = true;
      }
      if (!bVar2) {
        *puVar6 = *puVar5;
        puVar9 = puVar5;
      }
    }
    else {
      *puVar6 = uVar1;
      puVar9 = puVar5;
    }
    puVar6 = puVar6 + 1;
    puVar5 = puVar9 + 1;
  }
  lVar8 = FUN_00416740(*param_2);
  FUN_004169f0(param_2,((longlong)puVar6 - lVar8) / 2);
  FUN_00414480(local_40);
  return param_2;
}

