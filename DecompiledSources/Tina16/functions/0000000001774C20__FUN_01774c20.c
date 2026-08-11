/* Ghidra address: 01774c20 */
/* Ghidra symbol: FUN_01774c20 */


void FUN_01774c20(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c [3];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_01774900(param_1,0,&local_38,local_2c,0);
  if ((0 < local_2c[0]) && (iVar2 = 0, iVar3 = local_2c[0], -1 < local_2c[0] + -1)) {
    do {
      plVar1 = (longlong *)FUN_01774900(param_1,iVar2,&local_38,local_2c,1);
      FUN_00441920(&local_40,local_38);
      FUN_00414b50(&local_38,local_40);
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
      FUN_010b2d80(param_2,local_48,local_38);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_48,3);
  return;
}

