/* Ghidra address: 016d84c0 */
/* Ghidra symbol: FUN_016d84c0 */


void FUN_016d84c0(longlong param_1,double param_2,double param_3,double param_4,char param_5,
                 undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_00414610(param_6);
  iVar1 = FUN_005fdff0(*(undefined8 *)(param_1 + 0x2d8),param_6);
  iVar2 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x2d8),param_6);
  uVar3 = FUN_016d8160(param_1,param_2,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  (**(code **)(**(longlong **)(param_1 + 0x2d8) + 200))
            (*(longlong **)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x1d0),
             *(int *)(param_1 + 0x1d4) + -3);
  (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0xc0))
            (*(longlong **)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x1d0),
             *(int *)(param_1 + 0x1d4) + 3);
  uVar3 = FUN_016d8160(param_1,param_2 - param_3,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  if (param_5 == '\0') {
    if (param_4 < 0.0) {
      (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x120))
                (*(longlong **)(param_1 + 0x2d8),*(int *)(param_1 + 0x1d0) - iVar1 / 2,
                 (*(int *)(param_1 + 0x1d4) - iVar2) + -5,param_6);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x120))
                (*(longlong **)(param_1 + 0x2d8),*(int *)(param_1 + 0x1d0) - iVar1 / 2,
                 *(int *)(param_1 + 0x1d4) + 5,param_6);
    }
  }
  else if (param_4 < 0.0) {
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x120))
              (*(longlong **)(param_1 + 0x2d8),*(int *)(param_1 + 0x1d0) - iVar1 / 2,
               *(int *)(param_1 + 0x1d4) + 5,param_6);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x120))
              (*(longlong **)(param_1 + 0x2d8),*(int *)(param_1 + 0x1d0) - iVar1 / 2,
               (*(int *)(param_1 + 0x1d4) - iVar2) + -5,param_6);
  }
  FUN_00414480(&param_6);
  return;
}

