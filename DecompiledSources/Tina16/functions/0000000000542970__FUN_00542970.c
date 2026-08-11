/* Ghidra address: 00542970 */
/* Ghidra symbol: FUN_00542970 */


undefined8 FUN_00542970(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00542630(param_1,*param_2);
  }
  return uVar1;
}

