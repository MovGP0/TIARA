/* Ghidra address: 010d6c80 */
/* Ghidra symbol: FUN_010d6c80 */


void FUN_010d6c80(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 local_58 [6];
  
  puVar2 = local_58;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_010cb960(local_58[1],local_60,&local_68);
  dVar3 = (double)FUN_0040c850(local_68);
  if (3.0 < dVar3) {
    *param_2 = 2;
  }
  FUN_010cc470(local_58,param_2,param_3);
  *param_2 = 1;
  return;
}

