/* Ghidra address: 0147ff10 */
/* Ghidra symbol: FUN_0147ff10 */


ulonglong FUN_0147ff10(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int local_84;
  uint local_74;
  int local_70;
  int local_6c;
  uint local_5c;
  longlong local_50;
  undefined1 local_48 [8];
  undefined8 local_40 [2];
  
  uVar13 = 0;
  uVar7 = FUN_00f30cb0(param_1,L"circuit");
  lVar8 = FUN_004113f0(uVar7,&LAB_00f23b78);
  if (lVar8 != 0) {
    uVar7 = FUN_00f30cb0(lVar8,L"components");
    lVar9 = FUN_004113f0(uVar7,&LAB_00f256b8);
    if (lVar9 != 0) {
      uVar7 = FUN_00f33100(&LAB_00f256b8,1);
      local_84 = 10000;
      local_70 = -10000;
      local_6c = 10000;
      iVar14 = -10000;
      iVar12 = *(int *)(*(longlong *)(lVar9 + 0x10) + 0x10);
      local_74 = 0;
      if (-1 < iVar12 + -1) {
        do {
          lVar1 = *(longlong *)(lVar9 + 0x10);
          if (*(uint *)(lVar1 + 0x10) <= local_74) {
            FUN_00594f90();
          }
          local_40[0] = FUN_00f30cb0(*(undefined8 *)
                                      (*(longlong *)(lVar1 + 8) + (longlong)(int)local_74 * 8),
                                     L"position");
          iVar4 = FUN_01486270(local_40[0],&DAT_0148044c);
          iVar5 = FUN_01486270(local_40[0],&DAT_0148045c);
          if (iVar4 < local_84) {
            local_84 = iVar4;
          }
          if (local_70 < iVar4) {
            local_70 = iVar4;
          }
          if (iVar5 < local_6c) {
            local_6c = iVar5;
          }
          if (iVar14 < iVar5) {
            iVar14 = iVar5;
          }
          local_74 = local_74 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      iVar12 = *(int *)(*(longlong *)(lVar9 + 0x10) + 0x10);
      local_74 = 0;
      if (-1 < iVar12 + -1) {
        do {
          lVar1 = *(longlong *)(lVar9 + 0x10);
          if (*(uint *)(lVar1 + 0x10) <= local_74) {
            FUN_00594f90();
          }
          plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)local_74 * 8);
          uVar10 = (**(code **)(*plVar2 + 0x38))(plVar2);
          FUN_00f335b0(uVar7,uVar10);
          cVar3 = FUN_01486290(uVar10,L"position",local_40);
          if ((cVar3 != '\0') &&
             (cVar3 = FUN_01486290(local_40[0],&DAT_0148044c,local_48), cVar3 != '\0')) {
            iVar4 = FUN_01486270(local_40[0],&DAT_0148044c);
            iVar5 = FUN_01486270(local_40[0],&DAT_0148045c);
            uVar11 = FUN_004113f0(local_40[0],&LAB_00f23b78);
            FUN_0147fec0(uVar11,&DAT_0148044c,iVar4 - local_84);
            uVar11 = FUN_004113f0(local_40[0],&LAB_00f23b78);
            FUN_0147fec0(uVar11,&DAT_0148045c,iVar5 - local_6c);
          }
          cVar3 = FUN_01486310(uVar10,L"pins",&local_50);
          if (cVar3 != '\0') {
            uVar10 = FUN_00f30cb0(uVar10,L"pins");
            local_50 = FUN_004113f0(uVar10,&LAB_00f256b8);
            iVar4 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
            local_5c = 0;
            if (-1 < iVar4 + -1) {
              do {
                lVar1 = *(longlong *)(local_50 + 0x10);
                if (*(uint *)(lVar1 + 0x10) <= local_5c) {
                  FUN_00594f90();
                }
                uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)local_5c * 8);
                cVar3 = FUN_01486290(uVar10,&DAT_0148044c,local_48);
                if (cVar3 != '\0') {
                  iVar5 = FUN_01486270(uVar10,&DAT_0148044c);
                  iVar6 = FUN_01486270(uVar10,&DAT_0148045c);
                  uVar11 = FUN_004113f0(uVar10,&LAB_00f23b78);
                  FUN_0147fec0(uVar11,&DAT_0148044c,iVar5 - local_84);
                  uVar10 = FUN_004113f0(uVar10,&LAB_00f23b78);
                  FUN_0147fec0(uVar10,&DAT_0148045c,iVar6 - local_6c);
                }
                local_5c = local_5c + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
          }
          local_74 = local_74 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      uVar10 = FUN_00f30cb0(lVar8,L"metadata");
      uVar10 = FUN_004113f0(uVar10,&LAB_00f23b78);
      uVar11 = FUN_00f309b0(&LAB_00f23b78,1);
      FUN_0147fec0(uVar11,L"x_min",local_84);
      FUN_0147fec0(uVar11,L"x_max",local_70);
      FUN_0147fec0(uVar11,L"y_min",local_6c);
      FUN_0147fec0(uVar11,L"y_max",iVar14);
      FUN_00f31ff0(uVar10,L"bounds");
      FUN_00f30e70(uVar10,L"bounds",uVar11);
      FUN_00f31ff0(lVar8,L"components");
      FUN_00f30e70(lVar8,L"components",uVar7);
      uVar7 = FUN_00f30cb0(lVar8,L"graph");
      lVar9 = FUN_004113f0(uVar7,&LAB_00f23b78);
      if (lVar9 != 0) {
        FUN_00f31ff0(lVar8,L"graph");
        FUN_00f30e70(lVar8,L"graph",lVar9);
      }
      uVar13 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
    }
  }
  return uVar13 & 0xffffffff;
}

