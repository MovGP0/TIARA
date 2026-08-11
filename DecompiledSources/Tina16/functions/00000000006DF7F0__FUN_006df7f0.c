/* Ghidra address: 006df7f0 */
/* Ghidra symbol: FUN_006df7f0 */


ulonglong FUN_006df7f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
  if (lVar1 == 0) {
    iVar3 = FUN_006decb0(*(undefined8 *)(param_1 + 0x70));
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0 < iVar3);
  }
  else {
    iVar3 = FUN_006decb0(lVar1);
    iVar4 = FUN_006decb0(*(undefined8 *)(param_1 + 0x70));
    if (iVar3 == iVar4) {
      uVar7 = 0;
      iVar3 = FUN_006decb0();
      iVar4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar5 = FUN_006df500(*(undefined8 *)(param_1 + 0x70),iVar4);
          uVar6 = FUN_006df500(lVar1,iVar4);
          cVar2 = FUN_006de2a0(uVar5,uVar6);
          uVar7 = CONCAT71((int7)((ulonglong)uVar5 >> 8),cVar2 == '\0');
          if (cVar2 == '\0') break;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      uVar7 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
    }
  }
  return uVar7 & 0xffffffff;
}

