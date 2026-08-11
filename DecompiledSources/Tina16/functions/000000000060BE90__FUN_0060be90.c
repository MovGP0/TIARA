/* Ghidra address: 0060be90 */
/* Ghidra symbol: FUN_0060be90 */


void FUN_0060be90(longlong param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(char *)(param_1 + 0x58)) {
    if (param_2 == '\0') {
      FUN_0060be30(param_1,0x20000000);
    }
    else {
      uVar1 = FUN_0060a330(param_1);
      FUN_0060be30(param_1,uVar1);
    }
  }
  return;
}

