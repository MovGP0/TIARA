/* Ghidra address: 00f40710 */
/* Ghidra symbol: FUN_00f40710 */


void FUN_00f40710(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 != '\0') {
    return;
  }
  FUN_00f40880(param_1);
  lVar3 = param_1[0x9d];
  if ((lVar3 != 0) && (*(char *)(lVar3 + 900) != '\0')) {
    pcVar2 = (code *)FUN_00411550(lVar3,0xffb3);
    cVar1 = (*pcVar2)(lVar3);
    if (cVar1 != '\0') {
      lVar3 = thunk_FUN_041da4fa();
      lVar4 = FUN_0065b870(param_1[0x9d]);
      if (lVar3 != lVar4) {
        (**(code **)(*(longlong *)param_1[0x9d] + 600))((longlong *)param_1[0x9d]);
        goto LAB_00f407c7;
      }
    }
  }
  if (*(char *)((longlong)param_1 + 900) != '\0') {
    lVar3 = thunk_FUN_041da4fa();
    lVar4 = FUN_0065b870(param_1);
    if (lVar3 != lVar4) {
      pcVar2 = (code *)FUN_00411550(param_1,0xffb3);
      cVar1 = (*pcVar2)(param_1);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 600))(param_1);
      }
    }
  }
LAB_00f407c7:
  *(undefined1 *)(param_1 + 0xa4) = 0;
  return;
}

