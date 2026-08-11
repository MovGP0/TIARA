/* Ghidra address: 004c5a40 */
/* Ghidra symbol: FUN_004c5a40 */


undefined8 FUN_004c5a40(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (param_3 == (undefined8 *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00411580(*param_2,*param_3);
  }
  return uVar1;
}

