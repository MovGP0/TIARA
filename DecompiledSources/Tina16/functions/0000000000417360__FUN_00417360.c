/* Ghidra address: 00417360 */
/* Ghidra symbol: FUN_00417360 */


undefined8 * FUN_00417360(undefined8 *param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  FUN_004144d0(param_1);
  if (0 < param_3) {
    uVar1 = FUN_004143b0(param_3,DAT_02006a28);
    *param_1 = uVar1;
    FUN_0040d200(uVar1,(longlong)param_3,param_2);
  }
  return param_1;
}

