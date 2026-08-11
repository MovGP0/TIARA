/* Ghidra address: 00d756c0 */
/* Ghidra symbol: FUN_00d756c0 */


void FUN_00d756c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_30 [2];
  undefined4 local_1c [3];
  
  local_30[0] = 0;
  FUN_00410ae0(*param_2,local_30);
  FUN_00d574e0(param_1,local_30[0]);
  puVar1 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b8d80(puVar1,param_2);
  local_1c[0] = (**(code **)*puVar1)(puVar1);
  FUN_004b89e0(param_1,local_1c,4);
  FUN_004b89e0(param_1,puVar1[1],local_1c[0]);
  FUN_00410f20(puVar1);
  FUN_00414480(local_30);
  return;
}

