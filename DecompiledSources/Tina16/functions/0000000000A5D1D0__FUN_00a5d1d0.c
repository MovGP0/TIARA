/* Ghidra address: 00a5d1d0 */
/* Ghidra symbol: FUN_00a5d1d0 */


undefined4 FUN_00a5d1d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b5850(param_1,param_2,param_3);
  FUN_00414ad0(param_3 + 0x38,param_2);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 0x88);
  return uVar1;
}

