/* Ghidra address: 00eae740 */
/* Ghidra symbol: FUN_00eae740 */


undefined8 FUN_00eae740(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_1);
  iVar2 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0202ea68 + 0x28))(DAT_0202ea68);
    if (iVar2 < iVar1) {
      (**(code **)(*DAT_0202ea68 + 0x18))(DAT_0202ea68,&local_30,iVar2);
      FUN_00441920(&local_28,local_30);
      FUN_004414c0(&local_20,local_28,0);
      iVar1 = FUN_0043e6d0(local_res10[0],local_20);
      bVar3 = iVar1 != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) break;
    iVar2 = iVar2 + 1;
  }
  iVar1 = (**(code **)(*DAT_0202ea68 + 0x28))(DAT_0202ea68);
  if (iVar2 < iVar1) {
    (**(code **)(*DAT_0202ea68 + 0x18))(DAT_0202ea68,param_1,iVar2);
  }
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  return param_1;
}

