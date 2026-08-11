/* Ghidra address: 00b90870 */
/* Ghidra symbol: FUN_00b90870 */


undefined8 FUN_00b90870(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_178;
  undefined1 local_170 [256];
  undefined8 local_70 [2];
  byte local_59 [81];
  
  local_178 = 0;
  local_70[0] = 0;
  FUN_00b90780(local_70,*param_2);
  FUN_00416910(local_170,local_70[0],0xff);
  FUN_00415020(local_59,local_170,0x50);
  if (local_59[0] == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004169a0(&local_178,local_59);
    iVar1 = FUN_004170c0(local_178,*param_2,1);
    FUN_00416dc0(param_2,*param_2,iVar1 + (uint)local_59[0],0xff);
  }
  FUN_004169a0(param_1,local_59);
  FUN_00414480(&local_178);
  FUN_00414480(local_70);
  return param_1;
}

