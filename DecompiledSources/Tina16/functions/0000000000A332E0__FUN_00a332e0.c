/* Ghidra address: 00a332e0 */
/* Ghidra symbol: FUN_00a332e0 */


longlong FUN_00a332e0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  FUN_0040d200(param_1,0x68,0);
  uVar1 = FUN_004095c0(param_4);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x18) = param_4;
  FUN_006293e0(param_1,param_3,*(undefined8 *)PTR_PTR_020023e0,0x58);
  return param_1;
}

