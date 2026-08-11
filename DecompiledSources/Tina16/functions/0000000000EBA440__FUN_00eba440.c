/* Ghidra address: 00eba440 */
/* Ghidra symbol: FUN_00eba440 */


void FUN_00eba440(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0 [2];
  longlong local_2a0;
  undefined1 local_298 [24];
  undefined8 local_280;
  
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0[0] = 0;
  local_2a0 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_298,&DAT_00432b90);
  FUN_00416ba0(local_2b0,local_res10[0],L"\\*.fpl");
  iVar1 = FUN_00441230(local_2b0[0],0x20,local_298);
  while (iVar1 == 0) {
    FUN_00416cd0(&local_2b8,3,local_res10[0],&LAB_00eba6d0,local_280);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                      (*(longlong **)(param_1 + 0x28),local_2b8);
    if (iVar1 == -1) {
      FUN_00416cd0(&local_2c0,3,local_res10[0],&LAB_00eba6d0,local_280);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
                (*(longlong **)(param_1 + 0x28),local_2c0);
      lVar2 = FUN_00eb99a0(&DAT_00eb9548,1);
      FUN_00416cd0(&local_2c8,3,local_res10[0],&LAB_00eba6d0,local_280);
      FUN_00eba290(lVar2,local_2c8);
      FUN_00414b50(&local_2a0,*(undefined8 *)(lVar2 + 0x18));
      if (local_2a0 == 0) {
        FUN_004414c0(&local_2a0,local_280,0);
      }
      FUN_004b4f10(*(undefined8 *)(param_1 + 0x40),local_280,local_2a0);
      (**(code **)(*DAT_0202ea90 + 0x80))(DAT_0202ea90,local_280,lVar2);
    }
    iVar1 = FUN_00441290(local_298);
  }
  FUN_004412c0(local_298);
  FUN_00414560(&local_2c8,4);
  FUN_00414480(&local_2a0);
  FUN_00417740(local_298,&DAT_00432b90);
  FUN_00414480(local_res10);
  return;
}

