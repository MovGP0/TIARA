/* Ghidra address: 00f30910 */
/* Ghidra symbol: FUN_00f30910 */


undefined8 FUN_00f30910(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = FUN_0045ae90();
  FUN_00459ca0(uVar1,&local_10,param_1);
  uVar1 = FUN_00f308c0(local_10,param_2,param_3 | 1);
  FUN_00419430(&local_10,&DAT_00406578);
  return uVar1;
}

