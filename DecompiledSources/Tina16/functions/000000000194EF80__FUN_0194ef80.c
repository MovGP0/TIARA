/* Ghidra address: 0194ef80 */
/* Ghidra symbol: FUN_0194ef80 */


undefined8 * FUN_0194ef80(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414ad0(param_2,param_3);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_004b3cf0(*(undefined8 *)(param_1 + 0x238),&local_20,iVar3);
      iVar2 = FUN_0043e6d0(local_20,param_3);
      if (iVar2 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x238) + 0x18))
                  (*(longlong **)(param_1 + 0x238),param_2,iVar3);
        iVar1 = FUN_004170c0(&LAB_0194f0a4,*param_2,1);
        FUN_00416dc0(param_2,*param_2,iVar1 + 1,0x7fffffff);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_20);
  return param_2;
}

