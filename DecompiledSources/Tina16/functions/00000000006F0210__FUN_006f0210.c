/* Ghidra address: 006f0210 */
/* Ghidra symbol: FUN_006f0210 */


ulonglong FUN_006f0210(longlong param_1)

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
    iVar3 = FUN_006efc30(*(undefined8 *)(param_1 + 0x70));
    if ((iVar3 < 1) &&
       ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 8), *(longlong *)(lVar1 + 0x508) == 0
        || (cVar2 = FUN_0065be20(lVar1), cVar2 != '\0')))) {
      uVar7 = 0;
    }
    else {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    }
  }
  else {
    iVar3 = FUN_006efc30(lVar1);
    iVar4 = FUN_006efc30(*(undefined8 *)(param_1 + 0x70));
    if (iVar3 == iVar4) {
      uVar7 = 0;
      iVar3 = FUN_006efc30();
      iVar4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar5 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x70),iVar4);
          uVar6 = FUN_006efcb0(lVar1,iVar4);
          cVar2 = FUN_006ef680(uVar5,uVar6);
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

