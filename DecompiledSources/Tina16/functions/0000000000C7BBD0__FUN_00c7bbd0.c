/* Ghidra address: 00c7bbd0 */
/* Ghidra symbol: FUN_00c7bbd0 */


undefined1 FUN_00c7bbd0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  uVar2 = FUN_0041b800(&local_10);
  uVar1 = FUN_00452340(local_res8[0],&DAT_00c7bc58,uVar2);
  FUN_0041b800(&local_10);
  FUN_0041b800(local_res8);
  return uVar1;
}

