/* Ghidra address: 00a220c0 */
/* Ghidra symbol: FUN_00a220c0 */


void FUN_00a220c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  lVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x2000);
  *(longlong *)(lVar1 + 0x10) = lVar2;
  piVar3 = (int *)(lVar2 + 0x1c00);
  iVar8 = 0x807fff;
  iVar9 = 0x8000;
  iVar10 = 0;
  iVar11 = 0;
  iVar4 = 0;
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  do {
    piVar3[-0x700] = iVar7;
    piVar3[-0x600] = iVar6;
    piVar3[-0x500] = iVar9;
    piVar3[-0x400] = iVar5;
    piVar3[-0x300] = iVar4;
    piVar3[-0x200] = iVar8;
    piVar3[-0x100] = iVar11;
    iVar11 = iVar11 + -0x6b2f;
    iVar4 = iVar4 + -0x54cd;
    iVar5 = iVar5 + -0x2b33;
    iVar9 = iVar9 + 0x1d2f;
    iVar6 = iVar6 + 0x9646;
    iVar8 = iVar8 + 0x8000;
    iVar7 = iVar7 + 0x4c8b;
    *piVar3 = iVar10;
    piVar3 = piVar3 + 1;
    iVar10 = iVar10 + -0x14d1;
  } while (iVar7 != 0x4c8b00);
  return;
}

