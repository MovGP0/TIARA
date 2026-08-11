/* Ghidra address: 00b8d110 */
/* Ghidra symbol: FUN_00b8d110 */


void FUN_00b8d110(undefined8 param_1,longlong param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  FUN_00416ba0(&local_10,L"tina.exe.Forms.T",*(undefined8 *)(param_2 + 0x10));
  FUN_00416ba0(&local_28,local_10,L".Caption");
  FUN_0064dd90(param_2,&local_30);
  FUN_00b8a7d0(param_1,local_20,local_28,local_30);
  FUN_0064de00(param_2,local_20[0]);
  FUN_00414480(&local_30);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

