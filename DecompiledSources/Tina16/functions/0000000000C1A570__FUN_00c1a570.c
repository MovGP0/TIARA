/* Ghidra address: 00c1a570 */
/* Ghidra symbol: FUN_00c1a570 */


void FUN_00c1a570(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_119 [256];
  byte local_19 [9];
  
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  (**(code **)(*param_2 + 0x90))(param_2);
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_19,1);
  if (iVar1 == 1) {
    do {
      if (local_19[0] == 0) break;
      FUN_00c1a3e0(param_1,local_119,local_19[0]);
      local_119[local_19[0]] = 0;
      FUN_00415500(&local_130,local_119,0x100,0);
      FUN_004155b0(&local_128,local_130);
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_19,1);
    } while (iVar1 == 1);
    FUN_00416880(&local_138,local_128);
    (**(code **)(*param_2 + 0x60))(param_2,local_138);
  }
  FUN_00414480(&local_138);
  FUN_00414590(&local_130,2);
  return;
}

