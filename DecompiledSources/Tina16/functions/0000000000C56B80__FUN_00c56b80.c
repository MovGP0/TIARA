/* Ghidra address: 00c56b80 */
/* Ghidra symbol: FUN_00c56b80 */


void FUN_00c56b80(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_00650d70(param_1,param_2,param_3,param_4);
  if (*(char *)(param_1 + 0x521) != '\0') {
    uVar1 = FUN_00c56f00(param_1,param_3,param_4);
    if (*(char *)(param_1 + 0x520) == '\0') {
      FUN_00c56db0(param_1,uVar1);
    }
    else {
      FUN_00c56d00(param_1,uVar1);
    }
    FUN_00c56eb0(param_1,uVar1);
  }
  return;
}

