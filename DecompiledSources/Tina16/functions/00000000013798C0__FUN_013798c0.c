/* Ghidra address: 013798c0 */
/* Ghidra symbol: FUN_013798c0 */


undefined1 * FUN_013798c0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_1c0 [256];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [88];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  *param_2 = 0;
  FUN_004169a0(&local_20,param_3);
  iVar1 = FUN_004170c0(&DAT_01379bc4,local_20,1);
  if (0 < iVar1) {
    FUN_004169a0(&local_28,param_3);
    iVar1 = FUN_004170c0(&LAB_01379bd4,local_28,1);
    if (0 < iVar1) {
      FUN_004169a0(&local_30,param_3);
      iVar1 = FUN_004170c0(&DAT_01379bc4,local_30,1);
      FUN_004169a0(&local_38,param_3);
      iVar2 = FUN_004170c0(&LAB_01379bd4,local_38,1);
      if (iVar1 < iVar2) {
        FUN_004169a0(&local_98,param_3);
        iVar1 = FUN_004170c0(&DAT_01379bc4,local_98,1);
        FUN_004169a0(&local_a0,param_3);
        iVar2 = FUN_004170c0(&LAB_01379bd4,local_a0,1);
        FUN_004169a0(&local_a8,param_3);
        iVar3 = FUN_004170c0(&DAT_01379bc4,local_a8,1);
        FUN_004151b0(local_90,param_3,iVar1 + 1,(iVar2 - iVar3) + -1);
        FUN_00415020(param_2,local_90,0x50);
        FUN_004169a0(&local_b0,param_3);
        uVar4 = FUN_004170c0(&DAT_01379bc4,local_b0,1);
        FUN_00415260(param_3,0x50,uVar4,*param_3);
      }
    }
  }
  FUN_004169a0(&local_c0,param_2);
  FUN_00b90680(&local_b8,local_c0);
  FUN_00416910(local_1c0,local_b8,0xff);
  FUN_00415020(param_2,local_1c0,0x50);
  FUN_00414560(&local_c0,6);
  FUN_00414560(&local_38,4);
  return param_2;
}

