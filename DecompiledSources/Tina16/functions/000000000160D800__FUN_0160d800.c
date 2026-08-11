/* Ghidra address: 0160d800 */
/* Ghidra symbol: FUN_0160d800 */


void FUN_0160d800(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0 [2];
  undefined8 local_2a0;
  undefined1 local_298 [16];
  uint local_288;
  undefined8 local_280;
  
  local_2c8 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2b0[0] = 0;
  local_2a0 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00417580(local_298,&DAT_00432b90);
  FUN_00416ba0(local_2b0,local_res10,&DAT_0160da78);
  iVar1 = FUN_00441230(local_2b0[0],0x10,local_298);
  while (iVar1 == 0) {
    FUN_0043e1a0(&local_2a0,local_280);
    if (((((local_288 & 0x10) == 0) || (iVar1 = FUN_00416db0(local_2a0,&DAT_0160da88), iVar1 == 0))
        || (((iVar1 = FUN_00416db0(local_2a0,*(undefined8 *)(param_1 + 0x60)), iVar1 == 0 ||
             (*(longlong *)(param_1 + 0x60) == 0)) && (*(longlong *)(param_1 + 0x60) != 0)))) ||
       (iVar1 = FUN_00416db0(local_2a0,&DAT_0160da98), iVar1 == 0)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    if ((bVar2 & *(byte *)(param_1 + 0x58)) != 0) {
      FUN_00416cd0(&local_2b8,3,local_res10,local_280,&DAT_0160daac);
      FUN_00416cd0(&local_2c0,3,local_res18,local_280,&DAT_0160daac);
      FUN_0160d800(param_1,local_2b8,local_2c0);
    }
    if (bVar2 != 0) {
      FUN_00416ba0(&local_2c8,local_res18,local_280);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                (*(longlong **)(param_1 + 0x38),local_2c8);
    }
    iVar1 = FUN_00441290(local_298);
  }
  FUN_004412c0(local_298);
  FUN_00414560(&local_2c8,4);
  FUN_00414480(&local_2a0);
  FUN_00417740(local_298,&DAT_00432b90);
  FUN_00414560(&local_res10,2);
  return;
}

