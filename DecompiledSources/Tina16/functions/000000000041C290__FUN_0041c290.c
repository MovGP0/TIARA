/* Ghidra address: 0041c290 */
/* Ghidra symbol: FUN_0041c290 */


void FUN_0041c290(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0x1f;
  plVar3 = (longlong *)(param_1 + 0x10);
  do {
    iVar5 = 0;
    if (*plVar3 != 0) {
      iVar5 = (int)*(undefined8 *)(*plVar3 + -8);
    }
    iVar2 = 0;
    if (-1 < iVar5 + -1) {
      do {
        puVar1 = *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
    if (plVar3[0x1f] != 0) {
      iVar5 = (int)*(undefined8 *)(plVar3[0x1f] + -8);
    }
    iVar2 = 0;
    if (-1 < iVar5 + -1) {
      do {
        puVar1 = *(undefined8 **)(plVar3[0x1f] + (longlong)iVar2 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(plVar3[0x1f] + (longlong)iVar2 * 8) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    plVar3 = plVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

