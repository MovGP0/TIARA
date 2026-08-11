/* Ghidra address: 01c273d0 */
/* Ghidra symbol: FUN_01c273d0 */


undefined8 FUN_01c273d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_01c27400(param_1,param_3);
  FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x10));
  return param_2;
}

