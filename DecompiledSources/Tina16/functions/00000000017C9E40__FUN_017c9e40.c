/* Ghidra address: 017c9e40 */
/* Ghidra symbol: FUN_017c9e40 */


undefined1 FUN_017c9e40(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar2 = FUN_01b21190(local_res8[0],0x3a,0);
  FUN_0043f750(&local_30,param_2);
  FUN_0043f750(&local_38,param_3);
  FUN_00416cd0(local_20,4,&DAT_017c9f74,local_30,&LAB_017c9f84,local_38);
  uVar1 = FUN_01b22340(uVar2,local_20[0],local_24,0);
  FUN_00410f20(uVar2);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return uVar1;
}

