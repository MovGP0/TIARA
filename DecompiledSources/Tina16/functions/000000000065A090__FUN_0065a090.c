/* Ghidra address: 0065a090 */
/* Ghidra symbol: FUN_0065a090 */


void FUN_0065a090(undefined8 param_1)

{
  char cVar1;
  code *pcVar2;
  
  if (PTR_DAT_02005bd0[0xd] != '\0') {
    cVar1 = FUN_0064e930(param_1);
    if (cVar1 == '\0') {
      FUN_0080f210(*(undefined8 *)PTR_DAT_02004030);
    }
    else {
      FUN_0080f1f0(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  pcVar2 = (code *)FUN_00411550(param_1,0xffbf);
  (*pcVar2)(param_1);
  return;
}

