/* Ghidra address: 006e55d0 */
/* Ghidra symbol: FUN_006e55d0 */


void FUN_006e55d0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 != *(char *)(param_1 + 0x560)) {
    if (param_2 == '\0') {
      uVar1 = FUN_006e2530(param_1);
      FUN_006e5530(param_1,uVar1);
    }
    *(char *)(param_1 + 0x560) = param_2;
    FUN_006e5a00(param_1);
  }
  return;
}

