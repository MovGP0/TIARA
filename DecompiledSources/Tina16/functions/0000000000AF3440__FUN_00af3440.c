/* Ghidra address: 00af3440 */
/* Ghidra symbol: FUN_00af3440 */


void FUN_00af3440(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_20;
  
  if (*(char *)(*(longlong *)(param_1 + 0x748) + 0x98) == '\0') {
    return;
  }
  FUN_00742eb0(*(longlong *)(param_1 + 0x748),0);
  cVar1 = FUN_0065be20(*(undefined8 *)(param_1 + 0x740));
  if (cVar1 != '\0') {
    iVar2 = thunk_FUN_03cc0d62(&local_20);
    if (iVar2 == 0) {
      return;
    }
    lVar3 = thunk_FUN_04129e10(local_20);
    lVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x740));
    if (lVar3 == lVar4) {
      return;
    }
  }
  FUN_00aa6400(*(undefined8 *)(param_1 + 0x8b0));
  if (*(longlong *)(param_1 + 0x940) != 0) {
    FUN_00414480(param_1 + 0x940);
    FUN_00414480(param_1 + 0x938);
    if (*(longlong *)(param_1 + 0x7e0) != 0) {
      (**(code **)(param_1 + 0x7e0))(*(undefined8 *)(param_1 + 0x7e8),param_1,0);
    }
  }
  return;
}

