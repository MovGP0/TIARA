/* Ghidra address: 00b10bb0 */
/* Ghidra symbol: FUN_00b10bb0 */


undefined8 * FUN_00b10bb0(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((param_4 == 0) && ((*(byte *)(param_1 + 0x609) & 1) != 0)) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x28))(*(longlong **)(param_1 + 0x5f8));
    if (param_3 < iVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x18))
                (*(longlong **)(param_1 + 0x5f8),param_2,param_3);
    }
    else {
      FUN_00414480(param_2);
    }
  }
  else {
    plVar2 = (longlong *)FUN_00b11070(param_1);
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar1 == 0) {
      FUN_00414480(param_2);
    }
    else {
      param_4 = param_4 - *(int *)(param_1 + 0x4c0);
      if (param_3 == 0) {
        uVar3 = FUN_00b11070(param_1);
        FUN_004b3cf0(uVar3,param_2,param_4);
      }
      else {
        plVar2 = (longlong *)FUN_00b11070(param_1);
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_4);
        iVar1 = FUN_004170c0(&LAB_00b10cb0,*param_2,1);
        if (0 < iVar1) {
          FUN_00416e20(param_2,1,iVar1);
        }
      }
    }
  }
  return param_2;
}

