/* Ghidra address: 0041b0d0 */
/* Ghidra symbol: FUN_0041b0d0 */


undefined8 * FUN_0041b0d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_10 [4];
  undefined2 local_c;
  
  local_28 = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar2 = thunk_FUN_04160250();
  thunk_FUN_039c31b1(uVar2,3,local_10,4);
  FUN_00416830(local_20,local_10,4);
  FUN_00416ba0(param_2,local_res18[0],local_20[0]);
  cVar1 = FUN_0041af20(param_1,*param_2);
  if (cVar1 == '\0') {
    local_c = 0;
    FUN_00416830(&local_28,local_10,4);
    FUN_00416ba0(param_2,local_res18[0],local_28);
    cVar1 = FUN_0041af20(param_1,*param_2);
    if (cVar1 == '\0') {
      FUN_00414480(param_2);
    }
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res18);
  return param_2;
}

