/* Ghidra address: 005b3970 */
/* Ghidra symbol: FUN_005b3970 */


void FUN_005b3970(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0x88),param_1);
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x78) + 8) + (longlong)iVar2 * 8);
        (**(code **)(*plVar1 + 0x88))(plVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

