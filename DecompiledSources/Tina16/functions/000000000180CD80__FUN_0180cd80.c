/* Ghidra address: 0180cd80 */
/* Ghidra symbol: FUN_0180cd80 */


undefined8 FUN_0180cd80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0;
  dVar2 = *(double *)(param_1 + 0x18) - 0.0001;
  if ((*(double *)(param_2 + 8) <= dVar2 && dVar2 != *(double *)(param_2 + 8)) &&
     (*(double *)(param_1 + 8) + 0.0001 < *(double *)(param_2 + 0x18))) {
    uVar1 = 1;
  }
  return uVar1;
}

