/* Ghidra address: 007d6470 */
/* Ghidra symbol: FUN_007d6470 */


void FUN_007d6470(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1[0x14];
  if (lVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = param_2;
  }
  else {
    uVar2 = FUN_007d5020(param_2);
    thunk_FUN_040d9f45(lVar1,uVar2);
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}

