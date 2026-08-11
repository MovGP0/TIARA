/* Ghidra address: 00bfee00 */
/* Ghidra symbol: FUN_00bfee00 */


int FUN_00bfee00(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
  local_24 = param_2;
  if (param_2 < iVar1) {
    if (param_2 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x538) + 0x168))(*(longlong **)(param_1 + 0x538));
      iVar1 = param_2;
    }
    else {
      uVar3 = FUN_00bcfb80(*(undefined8 *)(param_1 + 0x4e8),param_2 + -1);
      (**(code **)(**(longlong **)(param_1 + 0x538) + 0x160))(*(longlong **)(param_1 + 0x538),uVar3)
      ;
      iVar1 = param_2;
    }
    do {
      local_24 = iVar1;
      (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                (*(longlong **)(param_1 + 0x4e8),local_20,local_24);
      (**(code **)(**(longlong **)(param_1 + 0x538) + 0x158))
                (*(longlong **)(param_1 + 0x538),local_20[0],local_24);
      FUN_00bc2280(*(undefined8 *)(param_1 + 0x538));
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x118))
                        (*(longlong **)(param_1 + 0x538));
      lVar5 = FUN_00bcfb80(*(undefined8 *)(param_1 + 0x4e8),local_24);
      if (lVar5 == lVar4) break;
      FUN_00bd05d0(*(undefined8 *)(param_1 + 0x4e8),local_24,lVar4);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8));
      iVar1 = local_24 + 1;
    } while (local_24 + 1 != iVar2);
  }
  FUN_00414480(local_20);
  return local_24;
}

