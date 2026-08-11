/* Ghidra address: 01638590 */
/* Ghidra symbol: FUN_01638590 */


void FUN_01638590(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  lVar2 = FUN_0161bc10(*(undefined4 *)(*(longlong *)(param_1 + 400) + 0x5bc),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x48));
  iVar4 = *(int *)(param_1 + 0x154);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + (longlong)param_2 * 8) +
                  (longlong)iVar3 * 4) == 1) {
        FUN_0043f750(local_30,iVar3);
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0xb0))
                          (*(longlong **)(param_1 + 0x148),local_30[0]);
        if (-1 < iVar1) {
          FUN_0043f750(&local_38,param_2);
          (**(code **)(**(longlong **)(param_1 + 0x148) + 0x78))
                    (*(longlong **)(param_1 + 0x148),local_38);
          break;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

