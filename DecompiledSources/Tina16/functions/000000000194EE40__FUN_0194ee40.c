/* Ghidra address: 0194ee40 */
/* Ghidra symbol: FUN_0194ee40 */


undefined8 FUN_0194ee40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00414ad0(param_2,param_3);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x238) + 0x18))
                (*(longlong **)(param_1 + 0x238),local_30,iVar3);
      iVar2 = FUN_004170c0(&LAB_0194ef74,local_30[0],1);
      FUN_00416dc0(local_40,local_30[0],iVar2 + 1,0x7fffffff);
      iVar2 = FUN_0043e6d0(local_40[0],param_3);
      if (iVar2 == 0) {
        FUN_004b3cf0(*(undefined8 *)(param_1 + 0x238),param_2,iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return param_2;
}

