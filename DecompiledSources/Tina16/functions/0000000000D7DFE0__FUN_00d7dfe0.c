/* Ghidra address: 00d7dfe0 */
/* Ghidra symbol: FUN_00d7dfe0 */


uint FUN_00d7dfe0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414b50(&local_20,param_1);
  FUN_00d57300(local_30,&local_20,&LAB_00d7e138);
  FUN_00d57300(&local_38,&local_20,&LAB_00d7e138);
  FUN_00d57300(&local_40,&local_20,&LAB_00d7e138);
  FUN_00d57170(&local_48,&local_20);
  uVar1 = FUN_0043fc00(local_48);
  FUN_00d57170(&local_50,&local_20);
  uVar2 = FUN_0043fc00(local_50);
  FUN_00d57170(&local_58,&local_20);
  uVar3 = FUN_0043fc00(local_58);
  FUN_00414560(&local_58,6);
  FUN_00414480(&local_20);
  return uVar1 & 0xff | (uVar2 & 0xff) << 8 | (uVar3 & 0xff) << 0x10;
}

