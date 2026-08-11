/* Ghidra address: 00442df0 */
/* Ghidra symbol: FUN_00442df0 */


longlong FUN_00442df0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    param_1 = 0;
  }
  else {
    uVar1 = FUN_00414ce0(param_2);
    uVar2 = FUN_004447b0(param_1,0x7fffffff,param_2,uVar1,param_3,param_4,param_5);
    *(undefined1 *)(param_1 + (ulonglong)uVar2) = 0;
  }
  return param_1;
}

