/* Ghidra address: 01703ac0 */
/* Ghidra symbol: FUN_01703ac0 */


undefined8 FUN_01703ac0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  FUN_00414480(param_2);
  if (*(char *)(*(longlong *)(param_1 + 0x728) + 0xa9) == '\0') {
    iVar2 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x550));
    if ((0 < iVar2) && (lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x720)), lVar4 != 0)) {
      uVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x720));
      lVar4 = FUN_006dd390(uVar5);
      if (lVar4 == 0) {
        uVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x720));
        lVar4 = FUN_006dd580(uVar5);
        if (lVar4 == 0) {
          lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x720));
          FUN_00414ad0(param_2,*(undefined8 *)(lVar4 + 0x10));
          return param_2;
        }
      }
      uVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x720));
      lVar4 = FUN_006dd390(uVar5);
      if (lVar4 == 0) {
        FUN_00414480(param_2);
      }
      else {
        uVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x720));
        lVar4 = FUN_006dd390(uVar5);
        lVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x720));
        FUN_00416cd0(param_2,3,*(undefined8 *)(lVar4 + 0x10),&DAT_01703c48,
                     *(undefined8 *)(lVar6 + 0x10));
      }
    }
  }
  else {
    iVar2 = FUN_006efc30(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x4e0));
    if ((0 < iVar2) &&
       (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))
                          (*(longlong **)(param_1 + 0x728)), -1 < iVar2)) {
      plVar1 = *(longlong **)(param_1 + 0x728);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      lVar4 = FUN_006efcb0(plVar1[0x9c],uVar3);
      FUN_00414ad0(param_2,*(undefined8 *)(lVar4 + 0x30));
    }
  }
  return param_2;
}

