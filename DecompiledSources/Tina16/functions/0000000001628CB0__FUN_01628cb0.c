/* Ghidra address: 01628cb0 */
/* Ghidra symbol: FUN_01628cb0 */


undefined8 FUN_01628cb0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_0043f750(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0xc));
  }
  else {
    FUN_01627000(param_2,param_3,&local_10,&local_18,1);
    if (*(char *)(param_2 + 8) == '1') {
      FUN_00414b50(&local_28,&DAT_01628dc8);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01628dd8);
    }
    FUN_00416cd0(&local_20,4,local_28,local_10,&LAB_01628de8,local_18);
    FUN_00414ad0(param_1,local_20);
  }
  FUN_00414560(&local_28,4);
  return param_1;
}

