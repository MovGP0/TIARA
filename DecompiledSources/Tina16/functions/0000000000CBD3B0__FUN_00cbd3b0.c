/* Ghidra address: 00cbd3b0 */
/* Ghidra symbol: FUN_00cbd3b0 */


void FUN_00cbd3b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar3 = *(longlong *)(param_1 + 0xf8);
  if (lVar3 != param_2) {
    plVar1 = *(longlong **)(param_1 + 0x100);
    if ((((plVar1 != (longlong *)0x0) && (param_2 != 0)) && (plVar1[0x22] != 0)) &&
       (plVar1[0x22] != param_2)) {
      FUN_0041ddd0(local_20,PTR_PTR_02005ac0);
      uVar2 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_20[0]);
      lVar3 = FUN_004134c0(uVar2);
    }
    if (lVar3 != 0) {
      FUN_004d2d90(lVar3,param_1);
    }
    *(longlong *)(param_1 + 0xf8) = param_2;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,param_1);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xd0))(plVar1,param_2);
    }
  }
  FUN_00414480(local_20);
  return;
}

