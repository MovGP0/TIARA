/* Ghidra address: 01ab8c60 */
/* Ghidra symbol: FUN_01ab8c60 */


void FUN_01ab8c60(longlong param_1,undefined8 param_2,int param_3,undefined8 *param_4,
                 double *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8);
  uVar3 = FUN_01cd62b0(*(undefined8 *)(param_1 + 0xe8));
  *param_4 = uVar3;
  *param_5 = (double)-(param_3 - iVar1) / ((double)(iVar2 - iVar1) / 200.0) + 100.0;
  return;
}

