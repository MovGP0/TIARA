/* Ghidra address: 018b0d40 */
/* Ghidra symbol: FUN_018b0d40 */


void FUN_018b0d40(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar1 = FUN_007e2ef0();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_3);
        lVar3 = FUN_007e2f10(param_2,iVar5);
        FUN_007e2c60(lVar2,*(undefined8 *)(lVar3 + 0x78));
        lVar3 = FUN_007e2f10(param_2,iVar5);
        *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
        lVar3 = FUN_007e2f10(param_2,iVar5);
        *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(lVar3 + 0x110);
        *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)(lVar3 + 0x118);
        FUN_007e34c0(param_3,lVar2);
        uVar4 = FUN_007e2f10(param_2,iVar5);
        FUN_018b0d40(param_1,uVar4,lVar2);
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

