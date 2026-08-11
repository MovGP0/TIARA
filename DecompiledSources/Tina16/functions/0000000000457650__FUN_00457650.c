/* Ghidra address: 00457650 */
/* Ghidra symbol: FUN_00457650 */


undefined8 FUN_00457650(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)(*param_1 + -4);
  }
  FUN_00457690(param_1,param_2,0,uVar1);
  return param_2;
}

