/* Ghidra address: 018acfd0 */
/* Ghidra symbol: FUN_018acfd0 */


void FUN_018acfd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = FUN_004b2060();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_018b0ad0(*(undefined8 *)(param_1 + 0x578),iVar4);
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x18),param_2);
      if (iVar2 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x568) + 0x278))
                  (*(longlong **)(param_1 + 0x568),iVar4);
        FUN_018ad060(param_1,*(undefined8 *)(param_1 + 0x568));
        return;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

