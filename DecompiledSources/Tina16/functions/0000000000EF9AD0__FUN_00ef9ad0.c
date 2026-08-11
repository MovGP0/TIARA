/* Ghidra address: 00ef9ad0 */
/* Ghidra symbol: FUN_00ef9ad0 */


void FUN_00ef9ad0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_00ef9920(*param_1,param_3);
  dVar2 = (double)FUN_00ef9920(*param_2,param_3);
  if (dVar2 < dVar1) {
    dVar1 = dVar2;
  }
  FUN_00ef9a20(param_1,dVar1,param_3);
  FUN_00ef9a20(param_2,dVar1,param_3);
  return;
}

