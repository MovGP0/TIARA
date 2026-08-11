/* Ghidra address: 00dd2c10 */
/* Ghidra symbol: FUN_00dd2c10 */


undefined1 *
FUN_00dd2c10(undefined1 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 *param_5,undefined1 *param_6)

{
  undefined1 *puVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  puVar1 = (undefined1 *)FUN_00410920(param_1,local_res10);
  if (puVar1 != (undefined1 *)0xffffffffffffffff) {
    *puVar1 = *param_5;
    *param_5 = *param_5;
    puVar1[5] = *param_6;
    *param_6 = *param_6;
    FUN_00dd2ba0(puVar1,0,param_3,param_3,param_4);
    param_1 = puVar1;
  }
  return param_1;
}

