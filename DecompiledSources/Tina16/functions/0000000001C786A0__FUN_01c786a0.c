/* Ghidra address: 01c786a0 */
/* Ghidra symbol: FUN_01c786a0 */


undefined8 FUN_01c786a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [264];
  undefined1 local_30 [7];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_158 = 0;
  local_150 = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(local_20);
  iVar1 = FUN_004170c0(&DAT_01c78928,local_res18[0],1);
  if (iVar1 != 0) {
    FUN_00416dc0(local_20,local_res18[0],1,iVar1 + -1);
    FUN_00416e20(local_res18,1,iVar1);
    FUN_00416910(local_138,local_20[0],0xff);
    FUN_00b90d70(local_138,&local_28,&local_29,local_30);
    FUN_0040fb60(local_138,local_28,0x14,6);
    FUN_004169a0(local_20,local_138);
    FUN_00b909e0(local_148,local_29);
    FUN_004169a0(&local_150,local_148);
    FUN_00416cd0(local_20,4,local_20[0],&DAT_01c78938,local_150,&DAT_01c78948);
  }
  FUN_00416910(local_138,local_res18[0],0xff);
  FUN_00b90d70(local_138,&local_28,&local_29,local_30);
  FUN_0040fb60(local_138,local_28,0x14,6);
  FUN_004169a0(local_res18,local_138);
  FUN_00b909e0(local_148,local_29);
  FUN_004169a0(&local_158,local_148);
  FUN_00416cd0(param_2,4,local_20[0],local_res18[0],&DAT_01c78938,local_158);
  FUN_00414560(&local_158,2);
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

