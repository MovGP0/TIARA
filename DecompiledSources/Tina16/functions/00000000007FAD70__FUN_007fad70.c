/* Ghidra address: 007fad70 */
/* Ghidra symbol: FUN_007fad70 */


void FUN_007fad70(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_00655080(param_1);
  if (PTR_DAT_02005bd0[0xd] == '\0') {
    cVar1 = FUN_0044f0c0(5,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_039a5e66(uVar2);
    }
  }
  FUN_007fb150(param_1);
  return;
}

