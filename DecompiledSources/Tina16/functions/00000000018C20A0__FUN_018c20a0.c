/* Ghidra address: 018c20a0 */
/* Ghidra symbol: FUN_018c20a0 */


void FUN_018c20a0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  dVar5 = (double)FUN_019508b0(param_2);
  uVar1 = FUN_0040c770(dVar5 * *(double *)(param_1 + 0x220));
  dVar5 = (double)FUN_01950860(param_2);
  uVar2 = FUN_0040c770(dVar5 * *(double *)(param_1 + 0x220));
  dVar5 = (double)FUN_019508b0(param_2);
  uVar3 = FUN_0040c770((dVar5 + *(double *)(param_2 + 0xa8)) * *(double *)(param_1 + 0x220));
  dVar5 = (double)FUN_01950860(param_2);
  uVar4 = FUN_0040c770((dVar5 + *(double *)(param_2 + 0xb0)) * *(double *)(param_1 + 0x220));
  FUN_00498350(local_38,uVar1,uVar2,uVar3,uVar4);
  uVar1 = FUN_0040c770(*(undefined8 *)(param_1 + 0x228));
  uVar2 = FUN_0040c770(*(undefined8 *)(param_1 + 0x230));
  FUN_00423b50(local_38,uVar1,uVar2);
  local_40 = FUN_00498310(*(undefined4 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x208));
  FUN_004231e0(local_38,&local_40);
  return;
}

