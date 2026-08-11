/* Ghidra address: 01a24c60 */
/* Ghidra symbol: FUN_01a24c60 */


undefined8 FUN_01a24c60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00414480(local_30);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),local_40,iVar2);
      FUN_00416cd0(local_30,3,local_30[0],local_40[0],&LAB_01a24d64);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414ad0(param_2,local_30[0]);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return param_2;
}

