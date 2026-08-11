/* Ghidra address: 00ea8b60 */
/* Ghidra symbol: FUN_00ea8b60 */


undefined8
FUN_00ea8b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            undefined1 param_5)

{
  undefined1 local_50 [40];
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *param_4;
  uStack_20 = param_4[1];
  FUN_00417580(local_50,&DAT_00ea5f80);
  FUN_00ea7a10(local_50,param_3,param_5);
  FUN_00ea8d40(local_50,param_1,param_2,&local_28);
  FUN_00417740(local_50,&DAT_00ea5f80);
  return param_1;
}

