/* Ghidra address: 00624960 */
/* Ghidra symbol: FUN_00624960 */


undefined8 FUN_00624960(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_84 [32];
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 *local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_90 = 0;
  local_98 = 0;
  FUN_00417580(&local_30,&DAT_004701f8);
  if (DAT_01df0b78 == (code *)0x0) {
    uVar4 = FUN_0044d710(&PTR_FUN_004334c0,1,PTR_PTR_02001410);
    FUN_004134c0(uVar4);
  }
  FUN_0040d200(local_50,0x20,0);
  local_48 = FUN_00415f70(param_2);
  local_60 = 0;
  uStack_58 = 0x46000000000000c0;
  local_30 = &local_60;
  FUN_0041b800(&local_28);
  local_20 = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + -4) >> 1;
  }
  if (uVar1 == 0) {
    uVar3 = 0x15;
  }
  else {
    local_64 = 0x20;
    iVar2 = thunk_FUN_04179f25(local_84,&local_64);
    if (iVar2 != 0) {
      FUN_00416830(&local_90,local_84,0x10);
      FUN_004168b0(&local_98,param_2);
      iVar2 = FUN_0043e6d0(local_90,local_98);
      if (iVar2 == 0) {
        uVar3 = 0x15;
        goto LAB_00624a95;
      }
    }
    uVar3 = 0x10;
  }
LAB_00624a95:
  uVar3 = (*DAT_01df0b78)(param_3,0,uVar3,local_50,1,&local_30);
  FUN_006245b0(uVar3);
  FUN_006245b0(local_20);
  FUN_0041b840(param_1,local_28);
  FUN_00414560(&local_98,2);
  FUN_00417740(&local_30,&DAT_004701f8);
  return param_1;
}

