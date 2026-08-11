/* Ghidra address: 019bd0e0 */
/* Ghidra symbol: FUN_019bd0e0 */


undefined8 FUN_019bd0e0(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int local_4c;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  uVar5 = FUN_00f33100(&LAB_00f256b8,1);
  *param_4 = 0;
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10) + -1;
  iVar9 = *(int *)(*(longlong *)(param_3 + 0x10) + 0x10) + -1;
  if (iVar1 < iVar9) {
    iVar9 = iVar1;
  }
  local_4c = 0;
  if (-1 < iVar9) {
    iVar9 = iVar9 + 1;
    do {
      uVar6 = FUN_00f33510(param_2,local_4c);
      uVar6 = FUN_004113f0(uVar6,&LAB_00f23b78);
      uVar7 = FUN_00f33510(param_3,local_4c);
      uVar7 = FUN_004113f0(uVar7,&LAB_00f23b78);
      uVar8 = FUN_014860a0(uVar6,L"position");
      iVar1 = FUN_01486270(uVar8,&DAT_019bd384);
      uVar6 = FUN_014860a0(uVar6,L"position");
      iVar2 = FUN_01486270(uVar6,&DAT_019bd394);
      uVar6 = FUN_014860a0(uVar7,L"position");
      iVar3 = FUN_01486270(uVar6,&DAT_019bd384);
      uVar6 = FUN_014860a0(uVar7,L"position");
      iVar4 = FUN_01486270(uVar6,&DAT_019bd394);
      if ((iVar3 - iVar1 != 0) || (iVar4 - iVar2 != 0)) {
        uVar8 = FUN_00f309b0(&LAB_00f23b78,1);
        FUN_014861c0(uVar7,local_40,&PTR_DAT_019bd3a4);
        uVar6 = local_40[0];
        FUN_00f30ec0(uVar8,&PTR_DAT_019bd3a4,local_40[0]);
        uVar6 = FUN_00f2f8e0(&LAB_00f22f08,CONCAT71((int7)((ulonglong)uVar6 >> 8),1) & 0xffffffff,
                             (longlong)(iVar3 - iVar1) / 8 & 0xffffffff);
        FUN_00f30e70(uVar8,&PTR_DAT_019bd3b8,uVar6);
        uVar6 = FUN_00f2f8e0(&LAB_00f22f08,CONCAT71((int7)((ulonglong)uVar6 >> 8),1) & 0xffffffff,
                             (longlong)(iVar4 - iVar2) / 8 & 0xffffffff);
        FUN_00f30e70(uVar8,&DAT_019bd3cc,uVar6);
        uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,1);
        FUN_00f30e70(uVar8,L"grid_units",uVar6);
        FUN_00f335b0(uVar5,uVar8);
        *param_4 = *param_4 + 1;
      }
      local_4c = local_4c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_00414480(local_40);
  return uVar5;
}

