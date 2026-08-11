/* Ghidra address: 01711a20 */
/* Ghidra symbol: FUN_01711a20 */


void FUN_01711a20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0 [2];
  undefined8 local_290;
  undefined1 local_288 [24];
  undefined8 local_270;
  
  local_2c0 = 0;
  local_2b8 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2a0[0] = 0;
  local_290 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00416ba0(local_2a0,local_res10,L"\\*.TLD");
  iVar1 = FUN_00441230(local_2a0[0],0x20,local_288);
  while (iVar1 == 0) {
    FUN_00441920(&local_2b0,local_270);
    FUN_004414c0(&local_2a8,local_2b0,L".LIB");
    FUN_00416cd0(&local_290,4,local_res18,&DAT_01711c84,local_2a8,&DAT_01711cac);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))(*(longlong **)(param_1 + 0x90),local_290);
    iVar1 = FUN_00441290(local_288);
  }
  FUN_004412c0(local_288);
  FUN_00416ba0(&local_2b8,local_res10,L"\\*.TLL");
  iVar1 = FUN_00441230(local_2b8,0x20,local_288);
  while (iVar1 == 0) {
    FUN_00416cd0(&local_2c0,3,local_res10,&DAT_01711c84,local_270);
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x78))(*(longlong **)(param_1 + 0x98),local_2c0);
    iVar1 = FUN_00441290(local_288);
  }
  FUN_004412c0(local_288);
  FUN_00414560(&local_2c0,5);
  FUN_00414480(&local_290);
  FUN_00417740(local_288,&DAT_00432b90);
  FUN_00414560(&local_res10,2);
  return;
}

