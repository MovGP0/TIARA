/* Ghidra address: 018fbcc0 */
/* Ghidra symbol: FUN_018fbcc0 */


void FUN_018fbcc0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  
  pcVar1 = (code *)FUN_00411550(param_1,0xffc5);
  cVar2 = (*pcVar1)(param_1);
  if (cVar2 != '\0') {
    uVar3 = 0xff;
    pcVar1 = (code *)FUN_00411550(param_1,0xffb1);
    (*pcVar1)(param_1,CONCAT11(uVar3,1));
  }
  return;
}

