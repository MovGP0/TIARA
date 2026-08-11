/* Ghidra address: 00eae480 */
/* Ghidra symbol: FUN_00eae480 */


void FUN_00eae480(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_res8 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar3 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0202ea68 + 0x28))(DAT_0202ea68);
    if (iVar3 < iVar1) {
      (**(code **)(*DAT_0202ea68 + 0x18))(DAT_0202ea68,&local_30,iVar3);
      FUN_00441920(&local_28,local_30);
      FUN_004414c0(&local_20,local_28,0);
      iVar1 = FUN_0043e6d0(local_res8[0],local_20);
      bVar4 = iVar1 != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    iVar3 = iVar3 + 1;
  }
  iVar1 = (**(code **)(*DAT_0202ea68 + 0x28))(DAT_0202ea68);
  if (iVar3 < iVar1) {
    (**(code **)(*DAT_0202ea68 + 0x18))(DAT_0202ea68,&local_38,iVar3);
    FUN_004412f0(local_38);
    uVar2 = (**(code **)(*DAT_0202ea68 + 0x30))(DAT_0202ea68,iVar3);
    FUN_00410f20(uVar2);
    (**(code **)(*DAT_0202ea68 + 0x98))(DAT_0202ea68,iVar3);
  }
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res8);
  return;
}

