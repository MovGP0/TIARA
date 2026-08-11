/* Ghidra address: 00eaafa0 */
/* Ghidra symbol: FUN_00eaafa0 */


void FUN_00eaafa0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0 [2];
  undefined1 local_2a0 [24];
  undefined8 local_288;
  undefined8 local_20 [2];
  
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_2a0,&DAT_00432b90);
  FUN_00416ba0(local_2b0,local_res10[0],L"\\*.pdb");
  iVar1 = FUN_00441230(local_2b0[0],0x20,local_2a0);
  while (iVar1 == 0) {
    FUN_00416cd0(&local_2b8,3,local_res10[0],&DAT_00eab204,local_288);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xb0))
                      (*(longlong **)(param_1 + 0x60),local_2b8);
    if (iVar1 == -1) {
      FUN_00441920(&local_2c0,local_288);
      FUN_004414c0(local_20,local_2c0,0);
      FUN_00416cd0(&local_2c8,3,local_res10[0],&DAT_00eab204,local_288);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x78))
                        (*(longlong **)(param_1 + 0x60),local_2c8);
      FUN_0043e130(&local_2d0,local_20[0]);
      iVar2 = FUN_00416db0(local_2d0,L"TINA");
      if ((iVar2 == 0) && (iVar1 != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0xa0))
                  (*(longlong **)(param_1 + 0x60),0,iVar1);
      }
    }
    iVar1 = FUN_00441290(local_2a0);
  }
  FUN_004412c0(local_2a0);
  FUN_00414560(&local_2d0,5);
  FUN_00417740(local_2a0,&DAT_00432b90);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

