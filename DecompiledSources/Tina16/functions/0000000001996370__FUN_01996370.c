/* Ghidra address: 01996370 */
/* Ghidra symbol: FUN_01996370 */


undefined8 FUN_01996370(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (((param_2 != (longlong *)0x0) &&
      (cVar2 = (**(code **)(*param_2 + 0x1a8))(param_2), cVar2 != '\0')) &&
     (iVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_2), iVar3 != -1)) {
    if (param_3 == '\0') {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) break;
        plVar1 = *(longlong **)(param_1[1] + (longlong)iVar3 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
      } while ((cVar2 == '\0') ||
              (*(char *)(*(longlong *)(param_1[1] + (longlong)iVar3 * 8) + 10) != '\0'));
      if (-1 < iVar3) {
        uVar4 = *(undefined8 *)(param_1[1] + (longlong)iVar3 * 8);
      }
    }
    else {
      do {
        iVar3 = iVar3 + 1;
        if ((int)param_1[2] + -1 < iVar3) break;
        plVar1 = *(longlong **)(param_1[1] + (longlong)iVar3 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
      } while ((cVar2 == '\0') ||
              (*(char *)(*(longlong *)(param_1[1] + (longlong)iVar3 * 8) + 10) != '\0'));
      if (iVar3 <= (int)param_1[2] + -1) {
        uVar4 = *(undefined8 *)(param_1[1] + (longlong)iVar3 * 8);
      }
    }
  }
  return uVar4;
}

