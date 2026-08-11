/* Ghidra address: 00a33290 */
/* Ghidra symbol: FUN_00a33290 */


longlong FUN_00a33290(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_0040d200(param_1,0x68,0);
  uVar1 = FUN_004095c0(0xffff);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  FUN_0062d9a0(param_1,*(undefined8 *)PTR_PTR_020023e0,0x58);
  return param_1;
}

