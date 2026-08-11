/* Ghidra address: 01be1b80 */
/* Ghidra symbol: FUN_01be1b80 */


void FUN_01be1b80(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(char *)(param_1 + 0x592) != '\0') && (*(longlong *)(param_1 + 0x648) != 0)) {
    iVar1 = FUN_00611650(*(undefined8 *)(param_1 + 0x648));
    iVar1 = iVar1 + -1;
    if (0 < iVar1) {
      do {
        plVar2 = (longlong *)FUN_01be0910(*(undefined8 *)(param_1 + 0x648));
        (**(code **)(*plVar2 + 0x408))(plVar2);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

