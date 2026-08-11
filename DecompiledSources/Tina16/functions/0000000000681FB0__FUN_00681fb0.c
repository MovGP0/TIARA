/* Ghidra address: 00681fb0 */
/* Ghidra symbol: FUN_00681fb0 */


void FUN_00681fb0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((*(char *)(param_1 + 0x49e) != '\0') && ((*(uint *)(param_1 + 0xa4) & 1) == 0)) {
    uVar1 = FUN_0065b870(param_1);
    uVar2 = thunk_FUN_04118143(uVar1,0xfffffff0);
    if ((uVar2 & 4) == 0) {
      FUN_00680ad0(param_1);
    }
  }
  FUN_0065a090(param_1,param_2);
  return;
}

