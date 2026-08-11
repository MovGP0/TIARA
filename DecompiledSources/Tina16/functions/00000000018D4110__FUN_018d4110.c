/* Ghidra address: 018d4110 */
/* Ghidra symbol: FUN_018d4110 */


void FUN_018d4110(undefined8 param_1,int param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = FUN_018d4250(param_1);
  lVar1 = FUN_018d4260(param_1,iVar5 + -1);
  iVar5 = FUN_018d3e80(lVar1);
  if (param_2 < iVar5) {
    FUN_018d4040(param_1);
    iVar5 = FUN_018d4250(param_1);
    uVar2 = FUN_018d4260(param_1,iVar5 + -1);
    iVar5 = FUN_018d3e80(lVar1);
    if (param_2 <= iVar5 + -1) {
      iVar6 = ((iVar5 + -1) - param_2) + 1;
      iVar5 = param_2;
      do {
        uVar3 = FUN_018d3e60(lVar1,iVar5);
        FUN_018d3e90(uVar2,uVar3);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_004aef90(*(undefined8 *)(lVar1 + 8),param_2);
    if (param_3 == '\0') {
      lVar4 = FUN_018d3e60(uVar2,0);
      if (*(char *)(lVar4 + 0x1c) != '\0') {
        uVar2 = FUN_018d3e60(uVar2,0);
        uVar3 = FUN_018d3e60(lVar1,param_2 + -1);
        FUN_018d3cc0(uVar2,uVar3);
      }
    }
    else {
      uVar2 = FUN_00410e60(&DAT_018d1aa8,1);
      FUN_004ae7e0(*(undefined8 *)(lVar1 + 8),uVar2);
      uVar3 = FUN_004aeac0(*(undefined8 *)(lVar1 + 8),param_2 + -1);
      FUN_018d3cc0(uVar2,uVar3);
    }
  }
  return;
}

