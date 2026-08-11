/* Ghidra address: 00ea8110 */
/* Ghidra symbol: FUN_00ea8110 */


undefined8 FUN_00ea8110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_30 [40];
  
  FUN_00417580(local_30,&DAT_00ea5f80);
  FUN_00ea7a10(local_30,param_3,0x80);
  FUN_00ea82d0(local_30,param_1,param_2);
  FUN_00417740(local_30,&DAT_00ea5f80);
  return param_1;
}

