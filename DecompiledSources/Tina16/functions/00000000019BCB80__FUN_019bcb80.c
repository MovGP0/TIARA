/* Ghidra address: 019bcb80 */
/* Ghidra symbol: FUN_019bcb80 */


void FUN_019bcb80(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = FUN_014860a0(param_2,L"position");
  if (lVar5 != 0) {
    iVar1 = FUN_01486270(lVar5,&DAT_019bcd8c);
    iVar2 = FUN_01486270(lVar5,&DAT_019bcd9c);
    FUN_00f31ff0(lVar5,&DAT_019bcd8c);
    FUN_00f31ff0(lVar5,&DAT_019bcd9c);
    uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,iVar1 + param_3);
    FUN_00f30e70(lVar5,&DAT_019bcd8c,uVar6);
    uVar6 = FUN_00f2f8e0(&LAB_00f22f08,1,iVar2 + param_4);
    FUN_00f30e70(lVar5,&DAT_019bcd9c,uVar6);
  }
  lVar5 = FUN_014860c0(param_2,L"pins");
  if (lVar5 != 0) {
    iVar1 = *(int *)(*(longlong *)(lVar5 + 0x10) + 0x10);
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar6 = FUN_00f33510(lVar5,iVar2);
        uVar6 = FUN_004113f0(uVar6,&LAB_00f23b78);
        iVar3 = FUN_01486270(uVar6,&DAT_019bcd8c);
        iVar4 = FUN_01486270(uVar6,&DAT_019bcd9c);
        FUN_00f31ff0(uVar6,&DAT_019bcd8c);
        FUN_00f31ff0(uVar6,&DAT_019bcd9c);
        uVar7 = FUN_00f2f8e0(&LAB_00f22f08,1,iVar3 + param_3);
        FUN_00f30e70(uVar6,&DAT_019bcd8c,uVar7);
        uVar7 = FUN_00f2f8e0(&LAB_00f22f08,1,iVar4 + param_4);
        FUN_00f30e70(uVar6,&DAT_019bcd9c,uVar7);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

