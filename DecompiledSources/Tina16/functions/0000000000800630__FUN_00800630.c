/* Ghidra address: 00800630 */
/* Ghidra symbol: FUN_00800630 */


void FUN_00800630(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0065a450(param_1);
  if (*(char *)(param_1 + 0x390) == '\0') {
    if (*(int *)(param_1 + 200) == -0xfffff1) {
      uVar2 = FUN_00800610(param_1);
      FUN_0064e030(param_1,uVar2);
    }
  }
  else {
    iVar1 = FUN_00800610(param_1);
    if (*(int *)(param_1 + 200) == iVar1) {
      FUN_0064e030(param_1,0xff00000f);
    }
  }
  return;
}

