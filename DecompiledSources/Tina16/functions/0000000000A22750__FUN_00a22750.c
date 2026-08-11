/* Ghidra address: 00a22750 */
/* Ghidra symbol: FUN_00a22750 */


void FUN_00a22750(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x4c)) {
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar2 = 0;
    do {
      (**(code **)(lVar1 + 0x18 + lVar2 * 8))
                (param_1,lVar3,*(longlong *)(param_2 + lVar2 * 8) + (param_3 & 0xffffffff) * 8,
                 *(longlong *)(param_4 + lVar2 * 8) +
                 (ulonglong)(uint)(*(int *)(lVar3 + 0xc) * param_5) * 8);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x60;
    } while (lVar2 < *(int *)(param_1 + 0x4c));
  }
  return;
}

