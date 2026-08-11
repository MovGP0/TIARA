/* Ghidra address: 00c5a6d0 */
/* Ghidra symbol: FUN_00c5a6d0 */


void FUN_00c5a6d0(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00742ed0(*(undefined8 *)(param_1 + 0x340),100);
  if (*(char *)(param_1 + 0x33a) == '\x02') {
    cVar1 = FUN_0064e170(param_1);
    if (cVar1 != '\0') {
      pcVar2 = (code *)FUN_00411550(param_1,0xffea);
      (*pcVar2)(param_1);
    }
  }
  return;
}

