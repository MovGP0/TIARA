/* Ghidra address: 012dd420 */
/* Ghidra symbol: FUN_012dd420 */


undefined8 FUN_012dd420(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 < param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + (longlong)param_2 * 8);
  }
  return uVar1;
}

