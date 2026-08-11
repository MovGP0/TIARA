/* Ghidra address: 013c08d0 */
/* Ghidra symbol: FUN_013c08d0 */


undefined8 FUN_013c08d0(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 local_res10 [3];
  undefined2 local_518 [4];
  undefined8 local_510 [33];
  undefined1 local_408 [768];
  byte local_108 [256];
  
  local_510[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416910(local_108,local_res10[0],0xff);
  if (local_108[0] == 1) {
    FUN_004154b0(local_510,local_108,0);
    FUN_004155b0(local_510,&DAT_013c0a24);
    FUN_00415560(local_108,local_510[0],0xff);
  }
  else {
    local_518[0] = 0x7801;
    FUN_004152c0(local_518,local_108,0xff,local_108[0] / 2 + 1);
  }
  FUN_013c0830(local_408,local_108,param_3);
  FUN_004169a0(param_1,local_408);
  FUN_004144d0(local_510);
  FUN_00414480(local_res10);
  return param_1;
}

