/* Ghidra address: 00eae5f0 */
/* Ghidra symbol: FUN_00eae5f0 */


undefined8 FUN_00eae5f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_48 = 0;
  cVar1 = FUN_00eb00d0(DAT_0202ea78,local_res10,&local_20);
  if (cVar1 != '\0') {
    iVar3 = 0;
    while( true ) {
      iVar2 = (**(code **)(*local_20 + 0x28))(local_20);
      if (iVar3 < iVar2) {
        (**(code **)(*local_20 + 0x18))(local_20,&local_40,iVar3);
        FUN_00441920(&local_38,local_40);
        FUN_004414c0(local_30,local_38,0);
        iVar2 = FUN_0043e6d0(local_res8,local_30[0]);
        bVar4 = iVar2 != 0;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) break;
      iVar3 = iVar3 + 1;
    }
    iVar2 = (**(code **)(*local_20 + 0x28))(local_20);
    if (iVar3 < iVar2) {
      local_48 = (**(code **)(*local_20 + 0x30))(local_20,iVar3);
    }
  }
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_res8,2);
  return local_48;
}

