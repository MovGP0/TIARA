/* Ghidra address: 0160b510 */
/* Ghidra symbol: FUN_0160b510 */


void FUN_0160b510(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [24];
  undefined8 local_270;
  
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00416ba0(&local_290,local_res10,local_res18);
  iVar1 = FUN_00441230(local_290,0x20,local_288);
  while (iVar1 == 0) {
    FUN_00416ba0(&local_298,local_res10,local_270);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                      (*(longlong **)(param_1 + 0x38),local_298);
    if (iVar1 == -1) {
      FUN_00416ba0(&local_2a0,local_res10,local_270);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                (*(longlong **)(param_1 + 0x38),local_2a0);
    }
    iVar1 = FUN_00441290(local_288);
  }
  FUN_004412c0(local_288);
  FUN_00414560(&local_2a0,3);
  FUN_00417740(local_288,&DAT_00432b90);
  FUN_00414560(&local_res10,2);
  return;
}

