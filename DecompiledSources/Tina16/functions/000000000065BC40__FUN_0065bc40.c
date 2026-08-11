/* Ghidra address: 0065bc40 */
/* Ghidra symbol: FUN_0065bc40 */


void FUN_0065bc40(longlong param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  
  sVar3 = FUN_0065bc10(param_1);
  if (-1 < sVar3) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x360);
    iVar1 = *(int *)(lVar2 + 0x10);
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar1 <= param_2) {
      param_2 = (short)iVar1 + -1;
    }
    if ((int)param_2 != (int)sVar3) {
      FUN_004ae870(lVar2,(int)sVar3);
      FUN_004aec30(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x360),(int)param_2,param_1);
    }
  }
  return;
}

