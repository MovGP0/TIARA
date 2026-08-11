/* Ghidra address: 0173c730 */
/* Ghidra symbol: FUN_0173c730 */


void FUN_0173c730(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 in_R9;
  ulonglong uVar8;
  ulonglong uVar9;
  
  DAT_0210ffa8 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(DAT_0210ffa8,PTR_IMAGE_DOS_HEADER_0200c280,L"BMDither");
  DAT_0210ffe0 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  FUN_005fda60(DAT_0210ffe0,DAT_0210ffa8);
  plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(plVar4,PTR_IMAGE_DOS_HEADER_0200c280,L"bmNumbers");
  plVar5 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(plVar5,PTR_IMAGE_DOS_HEADER_0200c280,L"bmFixes");
  plVar6 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(plVar6,PTR_IMAGE_DOS_HEADER_0200c280,L"bmUnits");
  DAT_0210ffb0 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(DAT_0210ffb0,PTR_IMAGE_DOS_HEADER_0200c280,L"bmDecPoint");
  DAT_0210ffb8 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  plVar7 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(plVar7,PTR_IMAGE_DOS_HEADER_0200c280,L"bmMotor");
  iVar1 = (**(code **)(*plVar4 + 0x60))(plVar4);
  uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
  uVar8 = (ulonglong)uVar2;
  DAT_0210ffc0 = FUN_007d5160(&PTR_FUN_006441f8,
                              CONCAT71((int7)((ulonglong)in_R9 >> 8),1) & 0xffffffff,
                              (longlong)iVar1 / 0xb & 0xffffffff,uVar8);
  FUN_007d5ad0(DAT_0210ffc0,plVar4,0x1fffffff);
  iVar1 = (**(code **)(*plVar5 + 0x60))(plVar5);
  uVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
  uVar9 = (ulonglong)uVar2;
  DAT_0210ffc8 = FUN_007d5160(&PTR_FUN_006441f8,CONCAT71((int7)(uVar8 >> 8),1) & 0xffffffff,
                              (longlong)iVar1 / 10 & 0xffffffff,uVar9);
  FUN_007d5ad0(DAT_0210ffc8,plVar5,0x1fffffff);
  iVar1 = (**(code **)(*plVar6 + 0x60))(plVar6);
  uVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
  uVar8 = (ulonglong)uVar2;
  DAT_0210ffd0 = FUN_007d5160(&PTR_FUN_006441f8,CONCAT71((int7)(uVar9 >> 8),1) & 0xffffffff,
                              (longlong)iVar1 / 4 & 0xffffffff,uVar8);
  FUN_007d5ad0(DAT_0210ffd0,plVar6,0x1fffffff);
  iVar1 = (**(code **)(*plVar7 + 0x60))(plVar7);
  uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
  DAT_0210ffd8 = FUN_007d5160(&PTR_FUN_006441f8,CONCAT71((int7)(uVar8 >> 8),1) & 0xffffffff,
                              (longlong)iVar1 / 4 & 0xffffffff,uVar3);
  FUN_007d5ad0(DAT_0210ffd8,plVar7,0x1fffffff);
  FUN_00410f20(plVar4);
  FUN_00410f20(plVar5);
  FUN_00410f20(plVar6);
  FUN_00410f20(plVar7);
  return;
}

