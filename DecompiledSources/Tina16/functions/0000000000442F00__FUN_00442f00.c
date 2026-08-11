/* Ghidra address: 00442f00 */
/* Ghidra symbol: FUN_00442f00 */


longlong FUN_00442f00(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                     undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    param_1 = 0;
  }
  else {
    uVar1 = FUN_00414d00(param_3);
    uVar2 = FUN_00443450(param_1,param_2,param_3,uVar1,param_4,param_5,param_6);
    *(undefined2 *)(param_1 + (ulonglong)uVar2 * 2) = 0;
  }
  return param_1;
}

