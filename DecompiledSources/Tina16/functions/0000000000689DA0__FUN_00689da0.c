/* Ghidra address: 00689da0 */
/* Ghidra symbol: FUN_00689da0 */


void FUN_00689da0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  
  if (*(char *)(param_1 + 0x49a) != param_2) {
    *(char *)(param_1 + 0x49a) = param_2;
    cVar3 = FUN_0065be20(param_1);
    if (cVar3 != '\0') {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0xf1,*(undefined1 *)(param_1 + 0x49a),0);
    }
    if (*(char *)(param_1 + 0x490) == '\0') {
      pcVar2 = (code *)FUN_00411550(param_1,0xffea);
      (*pcVar2)(param_1);
    }
  }
  return;
}

