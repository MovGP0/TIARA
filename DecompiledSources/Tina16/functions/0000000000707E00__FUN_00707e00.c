/* Ghidra address: 00707e00 */
/* Ghidra symbol: FUN_00707e00 */


void FUN_00707e00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar1 = FUN_00707f20();
    FUN_006f7580(uVar1);
  }
  else {
    uVar1 = FUN_00707f20();
    uVar2 = FUN_004b1870(param_2);
    FUN_006f7910(uVar1,uVar2);
  }
  return;
}

