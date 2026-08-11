/* Ghidra address: 01480530 */
/* Ghidra symbol: FUN_01480530 */


void FUN_01480530(undefined8 param_1,double param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  uint local_64;
  longlong local_58;
  undefined1 local_50 [32];
  
  uVar8 = FUN_00f30cb0(param_1,L"components");
  lVar9 = FUN_004113f0(uVar8,&LAB_00f256b8);
  if (lVar9 != 0) {
    uVar8 = FUN_00f33100(&LAB_00f256b8,1);
    iVar14 = *(int *)(*(longlong *)(lVar9 + 0x10) + 0x10);
    local_64 = 0;
    if (-1 < iVar14 + -1) {
      do {
        lVar1 = *(longlong *)(lVar9 + 0x10);
        if (*(uint *)(lVar1 + 0x10) <= local_64) {
          FUN_00594f90();
        }
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)local_64 * 8);
        uVar10 = (**(code **)(*plVar2 + 0x38))(plVar2);
        FUN_00f335b0(uVar8,uVar10);
        uVar11 = FUN_00f30cb0(uVar10,L"position");
        iVar4 = FUN_01486270(uVar11,&DAT_014808c0);
        uVar5 = FUN_0040c840(param_2 * (double)iVar4);
        iVar4 = FUN_01486270(uVar11,&DAT_014808d0);
        uVar6 = FUN_0040c840(param_2 * (double)iVar4);
        uVar12 = FUN_004113f0(uVar11,&LAB_00f23b78);
        FUN_0147fec0(uVar12,&DAT_014808c0,uVar5);
        uVar11 = FUN_004113f0(uVar11,&LAB_00f23b78);
        FUN_0147fec0(uVar11,&DAT_014808d0,uVar6);
        cVar3 = FUN_01486310(uVar10,L"pins",&local_58);
        if (cVar3 != '\0') {
          uVar10 = FUN_00f30cb0(uVar10,L"pins");
          local_58 = FUN_004113f0(uVar10,&LAB_00f256b8);
          iVar4 = *(int *)(*(longlong *)(local_58 + 0x10) + 0x10);
          uVar13 = 0;
          if (-1 < iVar4 + -1) {
            do {
              lVar1 = *(longlong *)(local_58 + 0x10);
              if (*(uint *)(lVar1 + 0x10) <= uVar13) {
                FUN_00594f90();
              }
              uVar10 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar13 * 8);
              cVar3 = FUN_01486290(uVar10,&DAT_014808c0,local_50);
              if (cVar3 != '\0') {
                iVar7 = FUN_01486270(uVar10,&DAT_014808c0);
                uVar5 = FUN_0040c840(param_2 * (double)iVar7);
                iVar7 = FUN_01486270(uVar10,&DAT_014808d0);
                uVar6 = FUN_0040c840(param_2 * (double)iVar7);
                uVar11 = FUN_004113f0(uVar10,&LAB_00f23b78);
                FUN_0147fec0(uVar11,&DAT_014808c0,uVar5);
                uVar10 = FUN_004113f0(uVar10,&LAB_00f23b78);
                FUN_0147fec0(uVar10,&DAT_014808d0,uVar6);
              }
              uVar13 = uVar13 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        local_64 = local_64 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    FUN_00f31ff0(param_1,L"components");
    FUN_00f30e70(param_1,L"components",uVar8);
    uVar8 = FUN_00f30cb0(param_1,L"graph");
    lVar9 = FUN_004113f0(uVar8,&LAB_00f23b78);
    if (lVar9 != 0) {
      FUN_00f31ff0(param_1,L"graph");
      FUN_00f30e70(param_1,L"graph",lVar9);
    }
  }
  return;
}

