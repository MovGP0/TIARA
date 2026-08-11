/* Ghidra address: 0180cdc0 */
/* Ghidra symbol: FUN_0180cdc0 */


undefined8 FUN_0180cdc0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0;
  dVar2 = *(double *)(param_1 + 0x20) - 0.0001;
  if ((*(double *)(param_2 + 0x10) <= dVar2 && dVar2 != *(double *)(param_2 + 0x10)) &&
     (*(double *)(param_1 + 0x10) + 0.0001 < *(double *)(param_2 + 0x20))) {
    uVar1 = 1;
  }
  return uVar1;
}

