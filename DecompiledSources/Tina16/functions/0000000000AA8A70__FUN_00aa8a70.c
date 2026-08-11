/* Ghidra address: 00aa8a70 */
/* Ghidra symbol: FUN_00aa8a70 */


void FUN_00aa8a70(longlong param_1,undefined8 param_2,int param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  bVar2 = iVar1 <= param_3;
  if (bVar2) {
    param_3 = iVar1 + -1;
  }
  FUN_00ac37e0(param_1,param_2,param_3,param_4,param_5);
  if (bVar2) {
    *param_4 = *param_4 + 0xf;
  }
  return;
}

