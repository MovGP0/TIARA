/* Ghidra address: 005a1b40 */
/* Ghidra symbol: FUN_005a1b40 */


void FUN_005a1b40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x20;
      if (*(longlong *)(lVar1 + 8) == 0) {
        if (*(longlong *)(lVar1 + 0x10) != 0) {
          (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 0x18),param_2,param_3);
        }
      }
      else {
        (**(code **)(**(longlong **)(lVar1 + 8) + 0x18))(*(longlong **)(lVar1 + 8),param_2,param_3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

