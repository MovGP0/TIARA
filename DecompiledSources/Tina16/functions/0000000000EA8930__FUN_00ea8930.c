/* Ghidra address: 00ea8930 */
/* Ghidra symbol: FUN_00ea8930 */


undefined8 FUN_00ea8930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 local_40 [2];
  undefined1 local_30 [40];
  
  local_40[0] = 0;
  FUN_00417580(local_30,&DAT_00ea5f80);
  FUN_00ea7a10(local_30,param_3,param_4);
  FUN_00ea8240(local_30,local_40,param_2);
  FUN_00417c40(param_1,local_40,&DAT_00ea5be0);
  FUN_00417740(local_40,&DAT_00ea5be0);
  FUN_00417740(local_30,&DAT_00ea5f80);
  return param_1;
}

