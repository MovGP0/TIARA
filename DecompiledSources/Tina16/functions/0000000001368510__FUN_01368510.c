/* Ghidra address: 01368510 */
/* Ghidra symbol: FUN_01368510 */


void FUN_01368510(longlong param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  *param_3 = 0;
  bVar3 = false;
  while ((!bVar3 && (*param_3 < *(int *)(*(longlong *)(param_1 + 0xe8) + 0x10)))) {
    lVar1 = FUN_00b95a80(param_2);
    lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),*param_3);
    bVar3 = lVar1 == *(longlong *)(lVar2 + 8);
    if (!bVar3) {
      *param_3 = *param_3 + 1;
    }
  }
  return;
}

