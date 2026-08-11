/* Ghidra address: 005ff460 */
/* Ghidra symbol: FUN_005ff460 */


undefined8 FUN_005ff460(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_20 [4];
  
  uVar2 = 0;
  if ((*(uint *)(param_1 + 0x28) & 0x80) != 0) {
    uVar1 = FUN_005ffa40();
    thunk_FUN_040299ab(uVar1,local_20);
    if (local_20[0] != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

