/* Ghidra address: 01167ab0 */
/* Ghidra symbol: FUN_01167ab0 */


undefined4 *
FUN_01167ab0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  puVar1 = (undefined4 *)FUN_00410920(param_1,local_res10);
  if (puVar1 != (undefined4 *)0xffffffffffffffff) {
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1[2] = DAT_0203a51c;
    puVar1[3] = DAT_0203a520;
    puVar1[4] = DAT_0203aea0;
    param_1 = puVar1;
  }
  return param_1;
}

