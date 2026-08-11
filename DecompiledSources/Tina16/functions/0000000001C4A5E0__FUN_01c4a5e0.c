/* Ghidra address: 01c4a5e0 */
/* Ghidra symbol: FUN_01c4a5e0 */


undefined8 FUN_01c4a5e0(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res8 = param_1;
  local_res10[0] = param_2;
  FUN_0041b910(param_1);
  FUN_00414610(local_res10[0]);
  uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  FUN_00c7c5b0(local_20,local_res8,local_res10[0],&DAT_01c4a6cc);
  uVar2 = FUN_00b8f030(local_20[0]);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
  FUN_00414480(local_20);
  FUN_0041b800(&local_res8);
  FUN_00414480(local_res10);
  return uVar2;
}

