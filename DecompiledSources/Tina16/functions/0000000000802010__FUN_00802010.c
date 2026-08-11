/* Ghidra address: 00802010 */
/* Ghidra symbol: FUN_00802010 */


void FUN_00802010(longlong *param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0x4d5);
  if ((((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x4d6) == '\x01')) && (param_2 != 0)) &&
     (param_2 == param_1[0x98])) {
    cVar4 = FUN_0065be20(param_2);
    if (cVar4 != '\0') {
      pcVar2 = (code *)FUN_00411550(param_2,0xffb0);
      cVar4 = (*pcVar2)(param_2);
      if (cVar4 == '\0') {
        uVar3 = FUN_0065b870(param_2);
        thunk_FUN_03c244fb(uVar3);
      }
    }
  }
  FUN_00801e40(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 600))(param_1);
  }
  return;
}

