/* Ghidra address: 019b9740 */
/* Ghidra symbol: FUN_019b9740 */


double FUN_019b9740(longlong param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_019b9700(*(undefined8 *)(param_1 + 0x20),0,param_1);
  if (dVar1 == 0.0) {
    FUN_00ef4260(10,param_1);
    dVar2 = 0.0;
  }
  else {
    dVar2 = (double)FUN_019b9700(*(undefined8 *)(param_1 + 0x18),0,param_1);
    dVar1 = (double)FUN_019b9700(*(undefined8 *)(param_1 + 0x20),0,param_1);
    dVar2 = dVar2 / dVar1;
  }
  return dVar2;
}

