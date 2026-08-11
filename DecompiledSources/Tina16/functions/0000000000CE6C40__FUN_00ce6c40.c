/* Ghidra address: 00ce6c40 */
/* Ghidra symbol: FUN_00ce6c40 */


undefined1 FUN_00ce6c40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_21;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_21 = 0;
  FUN_00ce6c20(&local_10,param_1);
  FUN_00ce6c20(&local_18,param_2);
  if ((local_10 != 0) && (local_18 != 0)) {
    cVar1 = FUN_00879070(local_10,local_18);
    if (cVar1 == '\0') {
      cVar1 = FUN_00879100(local_10,local_18);
      if (cVar1 != '\0') {
        iVar2 = 0;
        if (local_10 != 0) {
          iVar2 = *(int *)(local_10 + -4);
        }
        iVar3 = 0;
        if (local_18 != 0) {
          iVar3 = *(int *)(local_18 + -4);
        }
        FUN_00416dc0(&local_20,local_10,1,iVar2 - iVar3);
        cVar1 = FUN_00879100(local_20,&LAB_00ce6d68);
        if (cVar1 != '\0') {
          local_21 = FUN_008ac5c0(local_10);
        }
      }
    }
    else {
      local_21 = 1;
    }
  }
  FUN_00414560(&local_20,3);
  return local_21;
}

