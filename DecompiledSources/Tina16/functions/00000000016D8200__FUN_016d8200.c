/* Ghidra address: 016d8200 */
/* Ghidra symbol: FUN_016d8200 */


void FUN_016d8200(longlong param_1,double param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 0x78),1);
  if (param_2 != 0.0) {
    uVar3 = FUN_016d8160(param_1,0,param_2);
    *(undefined8 *)(param_1 + 0x1d0) = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 200))
              (*(longlong **)(param_1 + 0x2d8),*(int *)(param_1 + 0x1d0) + -3,
               *(undefined4 *)(param_1 + 0x1d4));
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0xc0))
              (*(longlong **)(param_1 + 0x2d8),*(int *)(param_1 + 0x1d0) + 3,
               *(undefined4 *)(param_1 + 0x1d4));
    iVar1 = FUN_005fdff0(*(undefined8 *)(param_1 + 0x2d8),local_res20);
    iVar2 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x2d8),local_res20);
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x120))
              (*(longlong **)(param_1 + 0x2d8),(*(int *)(param_1 + 0x1d0) - iVar1) + -5,
               *(int *)(param_1 + 0x1d4) - iVar2 / 2,local_res20);
  }
  if (param_3 != 0.0) {
    uVar3 = FUN_016d8160(param_1,0,param_3);
    *(undefined8 *)(param_1 + 0x1d0) = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 200))
              (*(longlong **)(param_1 + 0x2d8),*(int *)(param_1 + 0x1d0) + -3,
               *(undefined4 *)(param_1 + 0x1d4));
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0xc0))
              (*(longlong **)(param_1 + 0x2d8),*(int *)(param_1 + 0x1d0) + 3,
               *(undefined4 *)(param_1 + 0x1d4));
    iVar1 = FUN_005fdff0(*(undefined8 *)(param_1 + 0x2d8),param_5);
    iVar2 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x2d8),param_5);
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x120))
              (*(longlong **)(param_1 + 0x2d8),(*(int *)(param_1 + 0x1d0) - iVar1) + -5,
               *(int *)(param_1 + 0x1d4) - iVar2 / 2,param_5);
  }
  FUN_00414560(&local_res20,2);
  return;
}

