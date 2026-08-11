/* Ghidra address: 01d58040 */
/* Ghidra symbol: FUN_01d58040 */


void FUN_01d58040(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined8 local_68 [8];
  
  puVar2 = local_68;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_01163f30(param_1,9,local_a8);
  FUN_016ee260(param_1,&local_b0,0x148,0);
  *(undefined1 *)(local_b0 + 0x70) = 2;
  FUN_01d576b0(param_1,param_2,1,2,3,4,local_68,local_a8,local_b0);
  FUN_016e9f40(param_1,FUN_01d57f20);
  FUN_016e9fa0(param_1,FUN_01d57eb0);
  FUN_016e9fb0(param_1,FUN_01d57e40);
  return;
}

