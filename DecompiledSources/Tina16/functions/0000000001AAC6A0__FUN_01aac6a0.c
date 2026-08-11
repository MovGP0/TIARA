/* Ghidra address: 01aac6a0 */
/* Ghidra symbol: FUN_01aac6a0 */


undefined4
FUN_01aac6a0(longlong param_1,undefined2 param_2,undefined1 *param_3,undefined1 *param_4,
            undefined1 *param_5)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong unaff_RSI;
  int iVar12;
  int iVar13;
  undefined4 local_3c [3];
  
  *param_3 = 0;
  FUN_01caff40(*(undefined8 *)(param_1 + 0x19c20));
  plVar7 = (longlong *)FUN_01cafae0(&DAT_01caee50,1,param_2,0,0);
  cVar2 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x13a30),plVar7,local_3c);
  if (cVar2 != '\0') {
    lVar8 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_3c[0]);
    lVar8 = *(longlong *)(lVar8 + 0x20);
    lVar9 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_3c[0]);
    iVar12 = *(int *)(lVar9 + 0xc);
    lVar9 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_3c[0]);
    iVar11 = *(int *)(lVar9 + 0x10);
    iVar4 = 0;
    iVar13 = iVar11;
    if (-1 < iVar11 + -1) {
      do {
        lVar9 = FUN_01d347d0(lVar8,iVar4);
        iVar1 = *(int *)(lVar9 + 8);
        lVar10 = FUN_01d347d0(lVar8,iVar4);
        lVar9 = *(longlong *)(param_1 + 0x10 + (longlong)iVar1 * 8);
        uVar3 = *(undefined1 *)(lVar9 + -0x1e0 + (longlong)*(int *)(lVar10 + 0xc) * 0x788);
        uVar5 = FUN_01aa8090(param_1,iVar1);
        uVar6 = (uint)*(byte *)(lVar9 + 0x562);
        unaff_RSI = (ulonglong)uVar6;
        uVar3 = FUN_01aa0ab0(uVar3,uVar6);
        *param_4 = uVar3;
        FUN_01cafee0(*(undefined8 *)(param_1 + 0x19c20),*param_4,uVar6,uVar5);
        iVar4 = iVar4 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    iVar12 = iVar11 + iVar12 + -1;
    if (iVar11 <= iVar12) {
      iVar12 = (iVar12 - iVar11) + 1;
      do {
        if (0 < *(int *)(lVar8 + 0x10)) {
          lVar9 = FUN_01d347d0(lVar8,iVar11);
          unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
          uVar3 = FUN_01aa0ab0(*(undefined1 *)(param_1 + 0x13a67 + (longlong)*(int *)(lVar9 + 0x10))
                               ,unaff_RSI & 0xffffffff);
          *param_4 = uVar3;
          FUN_01cafee0(*(undefined8 *)(param_1 + 0x19c20),*param_4,unaff_RSI & 0xffffffff,0x3ec);
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  FUN_01aac010(*(undefined8 *)(param_1 + 0x19c20),param_3,param_4);
  uVar5 = FUN_01aa0b10(*param_4);
  *param_5 = (char)unaff_RSI;
  (**(code **)(*plVar7 + -0x20))(plVar7,1);
  return uVar5;
}

