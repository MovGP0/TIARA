/* Ghidra address: 01aac8f0 */
/* Ghidra symbol: FUN_01aac8f0 */


undefined4
FUN_01aac8f0(longlong param_1,undefined2 param_2,undefined1 *param_3,undefined1 *param_4,
            undefined1 *param_5)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 local_49;
  undefined4 local_3c [3];
  
  *param_3 = 0;
  FUN_01caff40(*(undefined8 *)(param_1 + 0x19c20));
  plVar6 = (longlong *)FUN_01cafae0(&DAT_01caee50,1,param_2,0,0);
  cVar2 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x13a30),plVar6,local_3c);
  if (cVar2 != '\0') {
    lVar7 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_3c[0]);
    lVar7 = *(longlong *)(lVar7 + 0x20);
    lVar8 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_3c[0]);
    iVar10 = *(int *)(lVar8 + 0xc);
    lVar8 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x13a30),local_3c[0]);
    iVar11 = *(int *)(lVar8 + 0x10);
    iVar4 = 0;
    iVar12 = iVar11;
    if (-1 < iVar11 + -1) {
      do {
        lVar8 = FUN_01d347d0(lVar7,iVar4);
        iVar1 = *(int *)(lVar8 + 8);
        lVar9 = FUN_01d347d0(lVar7,iVar4);
        lVar8 = *(longlong *)(param_1 + 0x10 + (longlong)iVar1 * 8);
        uVar3 = *(undefined1 *)(lVar8 + -0x1e0 + (longlong)*(int *)(lVar9 + 0xc) * 0x788);
        uVar5 = FUN_01aa8090(param_1,iVar1);
        local_49 = *(undefined1 *)(lVar8 + 0x562);
        uVar3 = FUN_01aa0ab0(uVar3,local_49);
        *param_4 = uVar3;
        if (iVar11 + iVar10 < 2) {
          FUN_01cafee0(*(undefined8 *)(param_1 + 0x19c20),*param_4,local_49,uVar5);
        }
        else {
          cVar2 = FUN_014f9c50(*(undefined8 *)(lVar8 + 0x550));
          if (cVar2 == '\0') {
            FUN_01cafee0(*(undefined8 *)(param_1 + 0x19c20),*param_4,local_49,uVar5);
          }
        }
        iVar4 = iVar4 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    iVar10 = iVar11 + iVar10 + -1;
    if (iVar11 <= iVar10) {
      iVar10 = (iVar10 - iVar11) + 1;
      do {
        if (0 < *(int *)(lVar7 + 0x10)) {
          lVar8 = FUN_01d347d0(lVar7,iVar11);
          local_49 = 1;
          uVar3 = FUN_01aa0ab0(*(undefined1 *)(param_1 + 0x13a67 + (longlong)*(int *)(lVar8 + 0x10))
                               ,1);
          *param_4 = uVar3;
          FUN_01cafee0(*(undefined8 *)(param_1 + 0x19c20),*param_4,1,0x3ec);
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  FUN_01aac010(*(undefined8 *)(param_1 + 0x19c20),param_3,param_4);
  uVar5 = FUN_01aa0b10(*param_4);
  *param_5 = local_49;
  (**(code **)(*plVar6 + -0x20))(plVar6,1);
  return uVar5;
}

