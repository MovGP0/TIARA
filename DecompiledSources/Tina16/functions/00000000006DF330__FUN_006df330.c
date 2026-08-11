/* Ghidra address: 006df330 */
/* Ghidra symbol: FUN_006df330 */


void FUN_006df330(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_28 [16];
  
  if (*(int *)(param_1 + 0x10) < 1) {
    while ((param_2 != 0 && (cVar2 = FUN_006ddf60(param_2), cVar2 == '\0'))) {
      param_2 = FUN_006dd390(param_2);
    }
    if (param_2 != 0) {
      FUN_006ddff0(param_2,local_28,0);
      uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
      thunk_FUN_03a2fc9d(uVar1,local_28,0xffffffff);
    }
  }
  return;
}

