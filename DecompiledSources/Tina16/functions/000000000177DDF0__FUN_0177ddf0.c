/* Ghidra address: 0177ddf0 */
/* Ghidra symbol: FUN_0177ddf0 */


void FUN_0177ddf0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res20;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [24];
  undefined8 local_290;
  
  local_2d0 = 0;
  local_2d8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00417580(local_2a8,&DAT_00432b90);
  (**(code **)(*param_3 + 0x90))(param_3);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_2b8,iVar3);
      FUN_00416cd0(&local_2b0,3,local_2b8,&DAT_0177e03c,local_res20);
      iVar2 = FUN_00441230(local_2b0,0x20,local_2a8);
      while (iVar2 == 0) {
        (**(code **)(*param_2 + 0x18))(param_2,&local_2c8,iVar3);
        FUN_00416cd0(&local_2c0,3,local_2c8,&LAB_0177e050,local_290);
        iVar2 = (**(code **)(*param_3 + 0xb0))(param_3,local_2c0);
        if (iVar2 == -1) {
          (**(code **)(*param_2 + 0x18))(param_2,&local_2d8,iVar3);
          FUN_00416cd0(&local_2d0,3,local_2d8,&LAB_0177e050,local_290);
          (**(code **)(*param_3 + 0x78))(param_3,local_2d0);
        }
        iVar2 = FUN_00441290(local_2a8);
      }
      FUN_004412c0(local_2a8);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_2d8,6);
  FUN_00417740(local_2a8,&DAT_00432b90);
  FUN_00414480(&local_res20);
  return;
}

