/* Ghidra address: 00624690 */
/* Ghidra symbol: FUN_00624690 */


undefined8 FUN_00624690(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  
  uVar1 = thunk_FUN_04114b53(param_2,local_20);
  FUN_006245b0(uVar1);
  FUN_004167d0(param_1,local_20[0]);
  thunk_FUN_0398fb79(local_20[0]);
  return param_1;
}

