/* Ghidra address: 016362e0 */
/* Ghidra symbol: FUN_016362e0 */


undefined8
FUN_016362e0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
            undefined8 param_5)

{
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [4];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if (*(char *)(param_3 + 8) == '\x01') {
    FUN_016134e0(local_40,1);
    FUN_0043f750(&local_48,*(undefined4 *)(*(longlong *)(param_3 + 0x58) + 0xc));
    FUN_00416cd0(&local_10,3,local_40[0],&LAB_01636500,local_48);
  }
  else {
    FUN_01627000(param_3,param_5,&local_18,&local_20,1);
    FUN_016134e0(&local_50,*(undefined1 *)(param_3 + 8));
    FUN_00416cd0(&local_10,5,local_50,&LAB_01636500,local_18,&LAB_01636500,local_20);
    if (*(char *)(param_3 + 8) == '3') {
      FUN_0043f750(&local_58,*(undefined4 *)(param_4 + 0x1c));
      FUN_0043f750(&local_60,*(undefined4 *)(param_4 + 0x20));
      FUN_00416cd0(&local_10,5,local_10,&LAB_01636500,local_58,&LAB_01636500,local_60);
    }
  }
  FUN_00414ad0(param_2,local_10);
  FUN_00414560(&local_60,5);
  FUN_00414560(&local_20,3);
  return param_2;
}

