/* Ghidra address: 00efd8d0 */
/* Ghidra symbol: FUN_00efd8d0 */


void FUN_00efd8d0(longlong param_1)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong unaff_R14;
  undefined6 uVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  undefined1 local_a8 [55];
  undefined1 local_71 [65];
  
  pbVar1 = *(byte **)(param_1 + 8);
  iVar7 = 1;
  do {
    if (pbVar1 == (byte *)0x0) {
      return;
    }
    uVar6 = (ulonglong)*pbVar1;
    uVar8 = (undefined6)(unaff_R14 >> 0x10);
    if (uVar6 < 0x1e) {
      if (uVar6 == 0xc) {
        bVar2 = false;
        FUN_00efce70(local_a8,pbVar1,iVar7);
        FUN_00415020(local_71,local_a8,0x28);
        uVar4 = FUN_00efd020(pbVar1,iVar7);
        unaff_R14 = (ulonglong)uVar4;
        iVar7 = iVar7 + 1;
      }
      else if (uVar6 - 0x18 < 2) {
LAB_00efd9a4:
        if (pbVar1[0xa5] == 3) {
          bVar2 = false;
          FUN_00efce70(local_a8,pbVar1,iVar7);
          FUN_00415020(local_71,local_a8,0x28);
          uVar4 = FUN_00efd020(pbVar1,iVar7);
          unaff_R14 = (ulonglong)uVar4;
          iVar7 = iVar7 + 1;
        }
        else {
          bVar2 = true;
          local_71[0] = 0;
          unaff_R14 = CONCAT62(uVar8,9);
          iVar7 = 1;
        }
      }
      else if (uVar6 - 0x1a < 4) {
LAB_00efda00:
        if (pbVar1[0xa5] == 8) {
          bVar2 = false;
          FUN_00efce70(local_a8,pbVar1,iVar7);
          FUN_00415020(local_71,local_a8,0x28);
          uVar4 = FUN_00efd020(pbVar1,iVar7);
          unaff_R14 = (ulonglong)uVar4;
          iVar7 = iVar7 + 1;
        }
        else {
          bVar2 = true;
          local_71[0] = 0;
          unaff_R14 = CONCAT62(uVar8,9);
          iVar7 = 1;
        }
      }
      else {
LAB_00efdab2:
        bVar2 = true;
        FUN_00efce70(local_a8,pbVar1,iVar7);
        FUN_00415020(local_71,local_a8,0x28);
        uVar4 = FUN_00efd020(pbVar1,iVar7);
        unaff_R14 = (ulonglong)uVar4;
        iVar7 = 1;
      }
    }
    else {
      if (1 < uVar6 - 0x1e) {
        if (uVar6 - 0x57 < 2) goto LAB_00efd9a4;
        if (uVar6 - 0x59 < 4) goto LAB_00efda00;
        if (1 < uVar6 - 0x5d) goto LAB_00efdab2;
      }
      if (pbVar1[0xa5] == 2) {
        bVar2 = false;
        FUN_00efce70(local_a8,pbVar1,iVar7);
        FUN_00415020(local_71,local_a8,0x28);
        uVar4 = FUN_00efd020(pbVar1,iVar7);
        unaff_R14 = (ulonglong)uVar4;
        iVar7 = iVar7 + 1;
      }
      else {
        bVar2 = true;
        local_71[0] = 0;
        unaff_R14 = CONCAT62(uVar8,9);
        iVar7 = 1;
      }
    }
    bVar3 = *pbVar1 - 8;
    if (bVar3 < 0x58) {
      bVar9 = ((byte)(&DAT_00efdcb0)[(longlong)((ulonglong)bVar3 & 0x7f) >> 3] >>
               ((ulonglong)bVar3 & 7) & 1) != 0;
    }
    else {
      bVar9 = false;
    }
    if (((bVar9) && (uVar5 = FUN_00efd190(pbVar1,iVar7,local_71), (short)uVar5 != 9)) &&
       ((short)unaff_R14 != 9)) {
      dVar10 = (double)FUN_019b7350(uVar5,param_1);
      dVar11 = (double)FUN_019b7350(unaff_R14 & 0xffffffff,param_1);
      if (dVar10 != dVar11) {
        FUN_00ef4840(1);
      }
      FUN_00efd7c0(pbVar1,iVar7,uVar5);
    }
    if ((*pbVar1 == 0xc) && (3 < iVar7)) {
LAB_00efdc79:
      bVar2 = true;
      iVar7 = 1;
    }
    else {
      if ((byte)(*pbVar1 - 0x18) < 0x48) {
        uVar6 = ((ulonglong)(byte)(*pbVar1 - 0x18) & 0x7f) + 0x18;
        bVar9 = ((byte)(&DAT_00efdcb8)[(longlong)uVar6 >> 3] >> (uVar6 & 7) & 1) != 0;
      }
      else {
        bVar9 = false;
      }
      if (((bVar9) && (pbVar1[0xa5] == 3)) && (2 < iVar7)) goto LAB_00efdc79;
      if ((byte)(*pbVar1 - 0x18) < 0x48) {
        uVar6 = ((ulonglong)(byte)(*pbVar1 - 0x18) & 0x7f) + 0x20;
        bVar9 = ((byte)(&DAT_00efdcc0)[(longlong)uVar6 >> 3] >> (uVar6 & 7) & 1) != 0;
      }
      else {
        bVar9 = false;
      }
      if (((bVar9) && (pbVar1[0xa5] == 8)) && (2 < iVar7)) goto LAB_00efdc79;
      if ((byte)(*pbVar1 - 0x18) < 0x48) {
        uVar6 = ((ulonglong)(byte)(*pbVar1 - 0x18) & 0x7f) + 0x28;
        bVar9 = ((byte)(&DAT_00efdcc8)[(longlong)uVar6 >> 3] >> (uVar6 & 7) & 1) != 0;
      }
      else {
        bVar9 = false;
      }
      if (((bVar9) && (pbVar1[0xa5] == 2)) && (2 < iVar7)) goto LAB_00efdc79;
    }
    if (bVar2) {
      pbVar1 = *(byte **)(pbVar1 + 0xb0);
    }
  } while( true );
}

