/* Ghidra address: 007ffab0 */
/* Ghidra symbol: FUN_007ffab0 */


undefined1 FUN_007ffab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_00410e60(&DAT_007f2958,1);
  *(undefined8 *)(lVar1 + 8) = param_1;
  *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_4 + 0x10);
  FUN_004ae7e0(param_4,lVar1);
  return 1;
}

