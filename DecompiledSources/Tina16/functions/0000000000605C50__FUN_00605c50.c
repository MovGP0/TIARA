/* Ghidra address: 00605c50 */
/* Ghidra symbol: FUN_00605c50 */


void FUN_00605c50(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = FUN_005ffa40(param_1);
  FUN_005ffb10(param_1,0);
  uVar1 = thunk_FUN_04174fe9(uVar1);
  FUN_00606a20(*(undefined8 *)(param_1 + 0x98),uVar1);
  FUN_005fe260(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

