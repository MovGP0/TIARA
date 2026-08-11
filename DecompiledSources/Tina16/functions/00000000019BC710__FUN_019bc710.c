/* Ghidra address: 019bc710 */
/* Ghidra symbol: FUN_019bc710 */


undefined8 FUN_019bc710(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_3c;
  int local_2c;
  
  lVar5 = FUN_014860c0(param_3,L"pins");
  if (lVar5 == 0) {
    uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Missing pins array in component");
    FUN_004134c0(uVar6);
  }
  if (*(int *)(*(longlong *)(lVar5 + 0x10) + 0x10) == 0) {
    uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Empty pins array in component");
    FUN_004134c0(uVar6);
  }
  uVar6 = FUN_00f33510(lVar5,0);
  uVar6 = FUN_004113f0(uVar6,&LAB_00f23b78);
  iVar1 = FUN_01486270(uVar6,&DAT_019bc9c8);
  iVar2 = FUN_01486270(uVar6,&DAT_019bc9d8);
  iVar10 = *(int *)(*(longlong *)(lVar5 + 0x10) + 0x10) + -1;
  local_3c = 1;
  iVar8 = iVar2;
  local_2c = iVar1;
  if (0 < iVar10) {
    do {
      uVar6 = FUN_00f33510(lVar5,local_3c);
      uVar6 = FUN_004113f0(uVar6,&LAB_00f23b78);
      iVar3 = FUN_01486270(uVar6,&DAT_019bc9c8);
      iVar4 = FUN_01486270(uVar6,&DAT_019bc9d8);
      if (iVar3 < local_2c) {
        local_2c = iVar3;
      }
      if (iVar1 < iVar3) {
        iVar1 = iVar3;
      }
      if (iVar4 < iVar2) {
        iVar2 = iVar4;
      }
      if (iVar8 < iVar4) {
        iVar8 = iVar4;
      }
      local_3c = local_3c + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (*(int *)(*(longlong *)(lVar5 + 0x10) + 0x10) == 2) {
    uVar7 = iVar1 - local_2c >> 0x1f;
    uVar9 = iVar8 - iVar2 >> 0x1f;
    if ((int)((iVar8 - iVar2 ^ uVar9) - uVar9) < (int)((iVar1 - local_2c ^ uVar7) - uVar7)) {
      iVar2 = iVar2 - param_4;
      iVar8 = iVar8 + param_4;
    }
    else {
      local_2c = local_2c - param_4;
      iVar1 = iVar1 + param_4;
    }
  }
  FUN_00498350(param_2,local_2c,iVar2,iVar1,iVar8);
  return param_2;
}

