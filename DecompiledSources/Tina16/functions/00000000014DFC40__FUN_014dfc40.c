/* Ghidra address: 014dfc40 */
/* Ghidra symbol: FUN_014dfc40 */


void FUN_014dfc40(byte *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  double *pdVar2;
  undefined8 *puVar3;
  short sVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  
  bVar1 = *param_3;
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      if ((*(double *)(param_3 + 0x38) == 0.0) && (*(double *)(param_3 + 0x40) == 0.0)) {
        *param_1 = 4;
        bVar1 = PTR_DAT_02001408[3];
        *(ushort *)(param_1 + 0x11) = (ushort)bVar1 * 8;
        uVar5 = FUN_00409570((ushort)bVar1 * 8);
        *(undefined8 *)(param_1 + 1) = uVar5;
        uVar5 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*param_1 - 1] << 3);
        *(undefined8 *)(param_1 + 9) = uVar5;
        puVar3 = *(undefined8 **)(param_1 + 1);
        *puVar3 = *(undefined8 *)(param_3 + 0x28);
        puVar3[1] = *(undefined8 *)(param_3 + 0x30);
        puVar3[2] = 0xc056800000000000;
      }
      else {
        *param_1 = 0xd;
        bVar1 = PTR_DAT_02001408[0xc];
        *(ushort *)(param_1 + 0x11) = (ushort)bVar1 * 8;
        uVar5 = FUN_00409570((ushort)bVar1 * 8);
        *(undefined8 *)(param_1 + 1) = uVar5;
        uVar5 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*param_1 - 1] << 3);
        *(undefined8 *)(param_1 + 9) = uVar5;
        puVar3 = *(undefined8 **)(param_1 + 1);
        *puVar3 = *(undefined8 *)(param_3 + 0x28);
        puVar3[1] = *(undefined8 *)(param_3 + 0x30);
        puVar3[2] = *(undefined8 *)(param_3 + 0x38);
        puVar3[3] = *(undefined8 *)(param_3 + 0x40);
      }
    }
    else if (bVar1 == 1) {
      *param_1 = 0xc;
      bVar1 = PTR_DAT_02001408[0xb];
      *(ushort *)(param_1 + 0x11) = (ushort)bVar1 * 8;
      uVar5 = FUN_00409570((ushort)bVar1 * 8);
      *(undefined8 *)(param_1 + 1) = uVar5;
      uVar5 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*param_1 - 1] << 3);
      *(undefined8 *)(param_1 + 9) = uVar5;
      pdVar2 = *(double **)(param_1 + 1);
      *pdVar2 = *(double *)(param_3 + 0x28) - *(double *)(param_3 + 0x20);
      pdVar2[1] = *(double *)(param_3 + 0x30);
      pdVar2[2] = *(double *)(param_3 + 0x38);
      pdVar2[3] = *(double *)(param_3 + 0x40);
      pdVar2[4] = *(double *)(param_3 + 0x48);
    }
    else if (bVar1 == 2) {
      *param_1 = 0xe;
      bVar1 = PTR_DAT_02001408[0xd];
      *(ushort *)(param_1 + 0x11) = (ushort)bVar1 * 8;
      uVar5 = FUN_00409570((ushort)bVar1 * 8);
      *(undefined8 *)(param_1 + 1) = uVar5;
      uVar5 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*param_1 - 1] << 3);
      *(undefined8 *)(param_1 + 9) = uVar5;
      pdVar2 = *(double **)(param_1 + 1);
      *pdVar2 = *(double *)(param_3 + 0x28) - *(double *)(param_3 + 0x20);
      pdVar2[1] = *(double *)(param_3 + 0x30);
      pdVar2[2] = *(double *)(param_3 + 0x38);
      pdVar2[3] = *(double *)(param_3 + 0x40);
      pdVar2[4] = *(double *)(param_3 + 0x48);
      pdVar2[5] = *(double *)(param_3 + 0x50);
    }
  }
  else if (bVar1 == 4) {
    *param_1 = 4;
    sVar4 = ((byte)PTR_DAT_02001408[3] + 2) * 8;
    *(short *)(param_1 + 0x11) = sVar4;
    uVar5 = FUN_00409570(sVar4);
    *(undefined8 *)(param_1 + 1) = uVar5;
    uVar5 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*param_1 - 1] << 3);
    *(undefined8 *)(param_1 + 9) = uVar5;
    puVar3 = *(undefined8 **)(param_1 + 1);
    *puVar3 = *(undefined8 *)(param_3 + 0x28);
    puVar3[1] = *(undefined8 *)(param_3 + 0x30);
    puVar3[2] = *(double *)(param_3 + 0x48) - 90.0;
    puVar3[3] = *(undefined8 *)(param_3 + 0x38);
    puVar3[4] = *(undefined8 *)(param_3 + 0x40);
  }
  else if (bVar1 == 5) {
    *param_1 = 9;
    local_2c = 1;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x30);
    uVar5 = FUN_00409570((longlong)(*(int *)(param_1 + 1) << 4));
    *(undefined8 *)(param_1 + 9) = uVar5;
    param_1[0x19] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    iVar7 = *(int *)(param_2 + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        uVar5 = FUN_01d347d0(param_2,iVar6);
        FUN_014dfbd0(auStack_58,uVar5);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

