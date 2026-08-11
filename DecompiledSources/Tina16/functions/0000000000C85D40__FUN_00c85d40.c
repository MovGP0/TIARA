/* Ghidra address: 00c85d40 */
/* Ghidra symbol: FUN_00c85d40 */


undefined8 FUN_00c85d40(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (param_2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_00c7f220(lVar1,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return local_10;
}

