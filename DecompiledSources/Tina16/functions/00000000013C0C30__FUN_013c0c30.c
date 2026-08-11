/* Ghidra address: 013c0c30 */
/* Ghidra symbol: FUN_013c0c30 */


char FUN_013c0c30(longlong param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  char local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_1 == 0) {
    local_29 = '\0';
    goto LAB_013c0d11;
  }
  FUN_01cc5c60(param_1);
  *param_3 = -1;
  do {
    lVar2 = FUN_01cc5cc0(param_1);
    *param_3 = *param_3 + 1;
    if (lVar2 == 0) break;
    FUN_01cc0ae0(lVar2,local_20);
    iVar1 = FUN_00416db0(local_res10[0],local_20[0]);
  } while (iVar1 != 0);
  if (lVar2 == 0) {
LAB_013c0ce0:
    local_29 = '\0';
  }
  else {
    FUN_01cc0ae0(lVar2,&local_28);
    iVar1 = FUN_00416db0(local_res10[0],local_28);
    if (iVar1 != 0) goto LAB_013c0ce0;
    local_29 = '\x01';
  }
  if (local_29 == '\0') {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = lVar2;
  }
LAB_013c0d11:
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return local_29;
}

