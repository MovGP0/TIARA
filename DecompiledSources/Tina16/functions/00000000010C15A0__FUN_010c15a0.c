/* Ghidra address: 010c15a0 */
/* Ghidra symbol: FUN_010c15a0 */


undefined8 FUN_010c15a0(undefined8 param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [256];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0 [21];
  
  local_1e0 = 0;
  local_1e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0[0] = 0;
  local_c8 = 0;
  FUN_00415020(param_1,param_4,0x50);
  if ((int)(uint)*param_4 < param_2) {
    FUN_00416780(local_c0,DAT_0202f960);
    FUN_004169a0(&local_c8,param_4);
    iVar2 = FUN_004170c0(local_c0[0],local_c8,1);
    if (iVar2 == 0) {
      FUN_004169a0(&local_d0,param_4);
      FUN_00416780(&local_d8,DAT_0202f960);
      FUN_00416ad0(&local_d0,local_d8);
      FUN_00416910(local_1d8,local_d0,0xff);
      FUN_00415020(param_4,local_1d8,0x50);
    }
    bVar1 = *param_4;
    FUN_00416780(&local_1e0,DAT_0202f960);
    FUN_004169a0(&local_1e8,param_4);
    iVar2 = FUN_004170c0(local_1e0,local_1e8,1);
    iVar2 = FUN_00b905f0(param_2,iVar2 + param_3);
    FUN_004153c0(param_4,iVar2);
    iVar4 = bVar1 + 1;
    if (iVar4 <= iVar2) {
      iVar2 = (iVar2 - iVar4) + 1;
      pbVar3 = param_4 + iVar4;
      do {
        *pbVar3 = 0x30;
        pbVar3 = pbVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00415020(param_1,param_4,0x50);
  FUN_00414560(&local_1e8,2);
  FUN_00414560(&local_d8,4);
  return param_1;
}

