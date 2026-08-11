/* Ghidra address: 0123b360 */
/* Ghidra symbol: FUN_0123b360 */


undefined8 FUN_0123b360(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  
  dVar1 = (double)FUN_0040c850(*param_1);
  dVar2 = (double)FUN_0040c850(param_1[2]);
  if (dVar1 <= dVar2) {
    uVar3 = param_1[2];
  }
  else {
    uVar3 = *param_1;
  }
  return uVar3;
}

