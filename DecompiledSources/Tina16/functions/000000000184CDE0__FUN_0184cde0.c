/* Ghidra address: 0184cde0 */
/* Ghidra symbol: FUN_0184cde0 */


void FUN_0184cde0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0184ce20(param_1,param_2);
  if ((lVar1 == 0) && (*(longlong *)(param_1 + 0x110) != 0)) {
    FUN_0184cde0(*(undefined8 *)(param_1 + 0x110),param_2);
  }
  return;
}

