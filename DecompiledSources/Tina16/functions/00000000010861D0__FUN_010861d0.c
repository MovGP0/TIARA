/* Ghidra address: 010861d0 */
/* Ghidra symbol: FUN_010861d0 */


undefined1 FUN_010861d0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined1 local_19;
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  cVar1 = FUN_01085fb0(param_1,param_2,&local_10);
  if (cVar1 == '\0') {
    local_19 = 0;
  }
  else {
    iVar2 = FUN_01085d60(param_1,param_2,&local_10,0);
    if ((*(int *)(param_1 + 0x4c94) == iVar2) &&
       (iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x4cb0),local_10), iVar2 == 0)) {
      local_19 = 0;
    }
    else {
      local_19 = 1;
    }
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return local_19;
}

