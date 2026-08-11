/* Ghidra address: 01baa480 */
/* Ghidra symbol: FUN_01baa480 */


void FUN_01baa480(longlong param_1,undefined8 param_2,undefined8 param_3)

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
  
  local_2b8 = 0;
  local_2c0 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0[0] = 0;
  local_290 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00416ba0(local_2a0,local_res10,L"\\*.TSMLD");
  iVar1 = FUN_00441230(local_2a0[0],0x20,local_288);
  while (iVar1 == 0) {
    FUN_00416cd0(&local_2a8,3,local_res10,&LAB_01baa6e8,local_270);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xb0))
                      (*(longlong **)(param_1 + 0x20),local_2a8);
    if (iVar1 == -1) {
      FUN_00416cd0(&local_2b0,3,local_res10,&LAB_01baa6e8,local_270);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
                (*(longlong **)(param_1 + 0x20),local_2b0);
      FUN_00441920(&local_2c0,local_270);
      FUN_004414c0(&local_2b8,local_2c0,0);
      FUN_00416cd0(&local_290,3,local_res18,&LAB_01baa6e8,local_2b8);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                (*(longlong **)(param_1 + 0x10),local_290);
    }
    iVar1 = FUN_00441290(local_288);
  }
  FUN_004412c0(local_288);
  FUN_00414560(&local_2c0,5);
  FUN_00414480(&local_290);
  FUN_00417740(local_288,&DAT_00432b90);
  FUN_00414560(&local_res10,2);
  return;
}

