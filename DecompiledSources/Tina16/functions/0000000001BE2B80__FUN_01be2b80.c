/* Ghidra address: 01be2b80 */
/* Ghidra symbol: FUN_01be2b80 */


void FUN_01be2b80(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x638),0);
  lVar1 = FUN_01be0910(*(undefined8 *)(*(longlong *)(param_1 + 0x5d0) + 0x648));
  if (*(char *)(lVar1 + 0x590) != '\0') {
    if (*(longlong *)(*(longlong *)(param_1 + 0x638) + 0x18) == 1) {
      lVar1 = FUN_01be0910(*(undefined8 *)(param_1 + 0x648));
      FUN_01bd3b40(*(undefined8 *)(lVar1 + 0x670),0);
    }
    else {
      *(undefined1 *)(param_1 + 0x591) = 1;
      plVar2 = (longlong *)FUN_01be0910(*(undefined8 *)(param_1 + 0x648));
      (**(code **)(*plVar2 + 0x3d8))(plVar2,1);
    }
  }
  return;
}

