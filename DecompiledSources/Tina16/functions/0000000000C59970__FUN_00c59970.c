/* Ghidra address: 00c59970 */
/* Ghidra symbol: FUN_00c59970 */


void FUN_00c59970(longlong *param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)((longlong)param_1 + 900) != '\0') {
    pcVar2 = (code *)FUN_00411550(param_1,0xffb3);
    cVar1 = (*pcVar2)(param_1);
    if ((cVar1 != '\0') && (param_2 != param_1[0x94])) {
      *(byte *)(param_1[0x94] + 0x348) = *(byte *)(param_1[0x94] + 0x348) & 0xfe;
      param_1[0x94] = param_2;
      lVar3 = thunk_FUN_041da4fa();
      lVar4 = FUN_0065b870(param_1);
      if (lVar3 == lVar4) {
        *(byte *)(param_1[0x94] + 0x348) = *(byte *)(param_1[0x94] + 0x348) | 1;
        (**(code **)(*param_1 + 0x180))(param_1);
      }
    }
  }
  return;
}

