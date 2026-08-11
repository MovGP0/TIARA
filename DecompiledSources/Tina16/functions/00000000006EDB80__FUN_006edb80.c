/* Ghidra address: 006edb80 */
/* Ghidra symbol: FUN_006edb80 */


void FUN_006edb80(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar1 = FUN_006edb60();
    FUN_006f74d0(uVar1);
  }
  else {
    uVar1 = FUN_006edb60();
    uVar2 = FUN_004b1870(param_2);
    FUN_006f7c40(uVar1,uVar2);
  }
  return;
}

