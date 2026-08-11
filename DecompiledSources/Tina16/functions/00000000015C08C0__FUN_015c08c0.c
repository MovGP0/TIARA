/* Ghidra address: 015c08c0 */
/* Ghidra symbol: FUN_015c08c0 */


undefined1 FUN_015c08c0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  bool local_9;
  
  local_18 = 0;
  FUN_00441820(&local_18,param_1);
  cVar1 = FUN_015c07e0(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_00416740(local_18);
    iVar2 = thunk_FUN_04157765(uVar3);
    local_9 = iVar2 == 2;
  }
  else {
    local_9 = true;
  }
  FUN_00414480(&local_18);
  return local_9;
}

