/* Ghidra address: 0068e4c0 */
/* Ghidra symbol: FUN_0068e4c0 */


void FUN_0068e4c0(longlong param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"SCROLLBAR");
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | *(uint *)(&DAT_01dfac94 + (ulonglong)*(byte *)(param_1 + 0x490) * 4)
  ;
  if (*(char *)(param_1 + 0x490) == '\x01') {
    pcVar2 = (code *)FUN_00411550(param_1,0xffc5);
    cVar1 = (*pcVar2)(param_1);
    if (cVar1 == '\0') {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
    }
    else {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
    }
  }
  cVar1 = FUN_0068e660(param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x4a4) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x4a4) = 1;
  }
  return;
}

