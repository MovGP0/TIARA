/* Ghidra address: 006dce30 */
/* Ghidra symbol: FUN_006dce30 */


undefined4 FUN_006dce30(longlong param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    cVar1 = FUN_006dd2b0(param_1);
    if (cVar1 != '\0') {
      if (param_2 == '\0') {
        uVar3 = FUN_006dc7c0(param_1);
        pcVar4 = (code *)FUN_00411550(uVar3,0xffaa);
        uVar2 = (*pcVar4)(uVar3,param_1);
      }
      else {
        uVar3 = FUN_006dc7c0(param_1);
        pcVar4 = (code *)FUN_00411550(uVar3,0xffa9);
        uVar2 = (*pcVar4)(uVar3,param_1);
      }
    }
  }
  return uVar2;
}

