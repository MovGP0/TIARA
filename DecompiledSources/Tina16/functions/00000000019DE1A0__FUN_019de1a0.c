/* Ghidra address: 019de1a0 */
/* Ghidra symbol: FUN_019de1a0 */


undefined8 FUN_019de1a0(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  undefined8 local_res10;
  longlong local_res18;
  uint local_res20;
  undefined1 auStack_48 [36];
  uint local_24;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414480(param_1);
  local_24 = *(uint *)(local_res18 + 0x10);
  if ((int)local_res20 < (int)local_24) {
    FUN_00414480(&local_10);
    if (local_24 <= local_res20) {
      FUN_00594f90();
    }
    FUN_00414b50(&local_10,
                 *(undefined8 *)(*(longlong *)(local_res18 + 8) + (longlong)(int)local_res20 * 8));
    FUN_00416ba0(param_1,local_res10,local_10);
    FUN_00414480(&local_10);
  }
  FUN_00414480(&local_10);
  FUN_00414480(&local_res10);
  return param_1;
}

