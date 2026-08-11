/* Ghidra address: 01ab8bc0 */
/* Ghidra symbol: FUN_01ab8bc0 */


void FUN_01ab8bc0(longlong param_1,undefined8 param_2,double param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8);
  uVar3 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0xe8));
  *param_4 = uVar3;
  uVar3 = FUN_0040c770((100.0 - param_3) * ((double)(iVar2 - iVar1) / 200.0) + (double)iVar1);
  *param_5 = uVar3;
  return;
}

