/* Ghidra address: 00c8aff0 */
/* Ghidra symbol: FUN_00c8aff0 */


undefined8 FUN_00c8aff0(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong local_res20;
  int local_1c;
  undefined8 local_10;
  
  local_10 = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  local_1c = param_3;
  if (param_3 < 0) {
    local_1c = *(int *)(param_1 + 0x30);
  }
  if (local_1c < 1) {
    FUN_00414480(param_2);
  }
  else {
    if (local_res20 == 0) {
      FUN_0041b840(&local_res20,*(undefined8 *)(param_1 + 0x10));
      FUN_0086f700(&local_res20,0);
    }
    FUN_00c8b100(param_1,&local_10,local_1c,1,0xffffffff);
    FUN_00878530(param_2,local_10,local_res20);
  }
  FUN_00419430(&local_10,&DAT_0086e978);
  FUN_0041b800(&local_res20);
  return param_2;
}

