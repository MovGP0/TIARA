/* Ghidra address: 01b4a930 */
/* Ghidra symbol: FUN_01b4a930 */


undefined1 FUN_01b4a930(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int local_2c;
  
  uVar5 = FUN_015452e0(*(undefined8 *)(param_1 + 8));
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x10);
  local_2c = 0;
  if (-1 < iVar9 + -1) {
    do {
      lVar6 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),local_2c);
      plVar1 = *(longlong **)(lVar6 + 8);
      FUN_01d03160(plVar1);
      cVar2 = FUN_01542670(plVar1);
      if (cVar2 != '\0') {
        uVar7 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),local_2c);
        cVar2 = FUN_015450b0(uVar5,uVar7);
        iVar3 = (**(code **)(*plVar1 + 0x1c8))();
        if ((cVar2 == '\0') && (iVar8 = 0, -1 < iVar3 + -1)) {
          do {
            iVar4 = (**(code **)(*plVar1 + 0x210))(plVar1,iVar8);
            if (iVar4 == *(int *)(param_2 + 8)) {
              lVar6 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),local_2c);
              *(undefined1 *)(lVar6 + 0x18) = 1;
              return 1;
            }
            iVar8 = iVar8 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_2c = local_2c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return 0;
}

