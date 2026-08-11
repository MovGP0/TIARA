/* Ghidra address: 00afe370 */
/* Ghidra symbol: FUN_00afe370 */


void FUN_00afe370(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = (code *)FUN_00411550(param_1,0xffb0);
  cVar1 = (*pcVar2)(param_1);
  if ((((cVar1 == '\0') || (*(char *)(param_1 + 0x798) != '\0')) &&
      (*(char *)(param_1 + 0x798) != '\x02')) && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    FUN_00743910(*(undefined8 *)(param_1 + 0x738),0);
  }
  else {
    FUN_00743910(*(undefined8 *)(param_1 + 0x738),1);
  }
  return;
}

