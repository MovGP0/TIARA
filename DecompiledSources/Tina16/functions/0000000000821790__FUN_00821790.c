/* Ghidra address: 00821790 */
/* Ghidra symbol: FUN_00821790 */


void FUN_00821790(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_00821920(param_1,param_2);
  if ((char)param_3 != cVar2) {
    uVar1 = FUN_00821e60(param_1,param_2);
    FUN_00820430(uVar1,param_3);
    FUN_00821870(param_1,param_2);
  }
  return;
}

