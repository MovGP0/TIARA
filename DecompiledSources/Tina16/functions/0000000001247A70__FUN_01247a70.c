/* Ghidra address: 01247a70 */
/* Ghidra symbol: FUN_01247a70 */


undefined8 FUN_01247a70(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28 [3];
  
  local_30 = param_2;
  local_2c = param_3;
  uVar1 = FUN_01a9a790(&local_30,*(undefined8 *)(param_1 + 0xc0));
  local_28[0] = FUN_00422ce0(uVar1);
  uVar2 = FUN_00422ea0(local_28,param_1 + 0x78);
  return uVar2;
}

