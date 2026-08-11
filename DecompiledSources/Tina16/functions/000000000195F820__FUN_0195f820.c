/* Ghidra address: 0195f820 */
/* Ghidra symbol: FUN_0195f820 */


undefined8 FUN_0195f820(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x308) + 0x38))(*(longlong **)(param_1 + 0x308),local_20);
  uVar1 = FUN_005fcf90(*(undefined8 *)(param_1 + 0x78));
  FUN_01807c80(param_2,local_20[0],uVar1,0);
  FUN_00414520(local_20);
  return param_2;
}

