/* Ghidra address: 01be1b30 */
/* Ghidra symbol: FUN_01be1b30 */


void FUN_01be1b30(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x648) != 0) {
    lVar1 = FUN_01be0910(*(longlong *)(param_1 + 0x648));
    if (*(char *)(lVar1 + 0x592) == '\0') {
      plVar2 = (longlong *)FUN_01be0910(*(undefined8 *)(param_1 + 0x648));
      (**(code **)(*plVar2 + 0x408))(plVar2);
    }
  }
  return;
}

