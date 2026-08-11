/* Ghidra address: 0173cce0 */
/* Ghidra symbol: FUN_0173cce0 */


undefined8 FUN_0173cce0(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int local_58;
  int local_54;
  
  uVar7 = FUN_00498310(0,0);
  iVar4 = (**(code **)(*param_1 + 0x48))();
  local_54 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar8 = FUN_0060a050(param_1,local_54);
      iVar5 = (**(code **)(*param_1 + 0x60))();
      local_58 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar9 = (longlong)local_58;
          uVar1 = *(undefined1 *)(lVar8 + 2 + lVar9 * 3);
          uVar2 = *(undefined1 *)(lVar8 + 1 + lVar9 * 3);
          uVar3 = *(undefined1 *)(lVar8 + lVar9 * 3);
          uVar6 = FUN_005fbf20(0xff00);
          if (CONCAT12(uVar3,CONCAT11(uVar2,uVar1)) == uVar6) {
            uVar7 = FUN_00498310(local_58,local_54);
            return uVar7;
          }
          local_58 = local_58 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_54 = local_54 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar7;
}

