/* Ghidra address: 0180bd20 */
/* Ghidra symbol: FUN_0180bd20 */


void FUN_0180bd20(longlong param_1)

{
  int iVar1;
  undefined1 auStack_318 [32];
  undefined1 local_2f8;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined1 *local_2c0;
  undefined8 local_2b0;
  undefined8 local_2a8;
  int local_29c;
  undefined1 local_298 [24];
  undefined8 local_280;
  
  local_2c0 = auStack_318;
  local_2e8 = 0;
  local_2d0 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2c8 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  FUN_00417580(local_298,&DAT_00432b90);
  FUN_0180ff20(&local_2a8);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x90))(*(longlong **)(param_1 + 0x40));
  FUN_00416ba0(&local_2c8,local_2a8,L"*.frc");
  local_29c = FUN_00441230(local_2c8,0x1ff,local_298);
  while (local_29c == 0) {
    FUN_0043e1a0(&local_2b0,local_280);
    FUN_00416dc0(&local_2d8,local_2b0,1,1);
    FUN_0043e130(&local_2d0,local_2d8);
    iVar1 = FUN_00414cb0(local_2b0);
    FUN_00416dc0(&local_2e0,local_2b0,2,iVar1 + -1);
    FUN_00416ba0(&local_2b0,local_2d0,local_2e0);
    local_2f8 = 0;
    FUN_00450070(&local_2e8,local_2b0,L".frc",0);
    FUN_00414b50(&local_2b0,local_2e8);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x78))(*(longlong **)(param_1 + 0x40),local_2b0);
    local_29c = FUN_00441290(local_298);
  }
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x148))(*(longlong **)(param_1 + 0x40));
  FUN_004412c0(local_298);
  FUN_00414560(&local_2e8,5);
  FUN_00414560(&local_2b0,2);
  FUN_00417740(local_298,&DAT_00432b90);
  return;
}

