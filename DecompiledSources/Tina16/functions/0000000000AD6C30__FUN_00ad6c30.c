/* Ghidra address: 00ad6c30 */
/* Ghidra symbol: FUN_00ad6c30 */


undefined1 FUN_00ad6c30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(&local_10);
  FUN_0043e600(&local_10,local_res10[0]);
  FUN_00414b50(local_res10,local_10);
  FUN_00414480(&local_10);
  cVar1 = FUN_00a2bd30(local_res10[0],&local_11);
  if (cVar1 == '\0') {
    iVar2 = FUN_00416db0(local_res10[0],L"absmiddle");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_res10[0],L"center");
      if (iVar2 != 0) {
        local_11 = 0;
        goto LAB_00ad6cc8;
      }
    }
    local_11 = 2;
  }
LAB_00ad6cc8:
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return local_11;
}

