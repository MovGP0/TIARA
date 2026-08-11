/* Ghidra address: 016aa520 */
/* Ghidra symbol: FUN_016aa520 */


undefined8 FUN_016aa520(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((double)param_1[1] == 0.0) {
    uVar1 = 0x4a511b0ec57e649a;
  }
  else {
    uVar1 = FUN_00525d90(*param_1,param_1[1]);
  }
  return uVar1;
}

