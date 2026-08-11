/* Ghidra address: 00c8b5e0 */
/* Ghidra symbol: FUN_00c8b5e0 */


undefined4 FUN_00c8b5e0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  if (local_res20 == 0) {
    FUN_0041b840(&local_res20,*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00877e10(&local_10,param_2,local_res20);
  uVar1 = FUN_00c8b6a0(param_1,local_10,param_3);
  FUN_00419430(&local_10,&DAT_0086e978);
  FUN_0041b800(&local_res20);
  return uVar1;
}

