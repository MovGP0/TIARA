/* Ghidra address: 006d5c10 */
/* Ghidra symbol: FUN_006d5c10 */


void FUN_006d5c10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x4c8);
  if (plVar3 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (0 < iVar1) {
      plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      *(longlong **)(param_1 + 0x4b8) = plVar3;
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0x4c8));
      uVar2 = FUN_006d5120(param_1);
      *(undefined4 *)(param_1 + 0x4b4) = uVar2;
    }
  }
  lVar4 = thunk_FUN_041da4fa();
  if (lVar4 != 0) {
    lVar5 = FUN_0065b870(param_1);
    if (lVar4 != lVar5) {
      uVar6 = FUN_0065b870(param_1);
      iVar1 = thunk_FUN_03ec68d2(uVar6,lVar4);
      if (iVar1 == 0) goto LAB_006d5ca1;
    }
    thunk_FUN_03c244fb(0);
  }
LAB_006d5ca1:
  FUN_00659db0(param_1,param_2);
  *(undefined8 *)(param_1 + 0x468) = 0;
  return;
}

