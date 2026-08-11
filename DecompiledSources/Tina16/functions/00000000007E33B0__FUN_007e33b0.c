/* Ghidra address: 007e33b0 */
/* Ghidra symbol: FUN_007e33b0 */


void FUN_007e33b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x81) == '\0') {
    return;
  }
  if (((*(longlong *)(param_1 + 0x90) == 0) && (*(char *)(param_1 + 0x150) != '\0')) ||
     ((plVar1 = *(longlong **)(param_1 + 0x90), plVar1 != (longlong *)0x0 &&
      ((cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0' &&
       (*(char *)(param_1 + 0x150) != '\0')))))) {
    FUN_007e2d20(param_1,*(char *)(param_1 + 0x80) == '\0');
  }
  if (((*(longlong *)(param_1 + 0x110) != 0) && (lVar3 = FUN_007e2ec0(param_1), lVar3 != 0)) &&
     (lVar3 = FUN_007e2ec0(param_1), *(longlong *)(param_1 + 0x110) != *(longlong *)(lVar3 + 0x98)))
  {
    (**(code **)(param_1 + 0x110))(*(undefined8 *)(param_1 + 0x118),param_1);
    return;
  }
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x30))(*(longlong **)(param_1 + 0x90),param_1);
  }
  else if (*(longlong *)(param_1 + 0x110) != 0) {
    (**(code **)(param_1 + 0x110))(*(undefined8 *)(param_1 + 0x118),param_1);
  }
  return;
}

