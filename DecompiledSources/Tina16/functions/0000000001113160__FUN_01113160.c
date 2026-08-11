/* Ghidra address: 01113160 */
/* Ghidra symbol: FUN_01113160 */


void FUN_01113160(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x611) == '\0') {
    uVar1 = FUN_0044d710(&PTR_FUN_0110f3d0,1,PTR_PTR_02002900);
    FUN_004134c0(uVar1);
  }
  cVar2 = FUN_01114230(param_1);
  if (cVar2 == '\x02') {
    FUN_011131c0(param_1);
  }
  else {
    cVar2 = FUN_01114230(param_1);
    if (cVar2 == '\x05') {
      FUN_01113270(param_1);
    }
  }
  return;
}

