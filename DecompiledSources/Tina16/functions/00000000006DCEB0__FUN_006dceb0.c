/* Ghidra address: 006dceb0 */
/* Ghidra symbol: FUN_006dceb0 */


void FUN_006dceb0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    cVar3 = FUN_006dd2b0(param_1);
    if (cVar3 != '\0') {
      if (param_2 == '\0') {
        uVar1 = FUN_006dc7c0(param_1);
        pcVar2 = (code *)FUN_00411550(uVar1,0xffa7);
        (*pcVar2)(uVar1,param_1);
      }
      else {
        uVar1 = FUN_006dc7c0(param_1);
        pcVar2 = (code *)FUN_00411550(uVar1,0xffa3);
        (*pcVar2)(uVar1,param_1);
      }
    }
  }
  return;
}

