/* Ghidra address: 0043fc80 */
/* Ghidra symbol: FUN_0043fc80 */


bool FUN_0043fc80(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int local_1c [3];
  
  uVar1 = FUN_0040e860(param_1,local_1c);
  *param_2 = uVar1;
  return local_1c[0] == 0;
}

