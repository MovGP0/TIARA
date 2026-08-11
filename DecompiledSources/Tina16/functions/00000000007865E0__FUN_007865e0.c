/* Ghidra address: 007865e0 */
/* Ghidra symbol: FUN_007865e0 */


void FUN_007865e0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00786090(*(undefined8 *)(param_2 + 0x60));
  uVar2 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x38));
  thunk_FUN_041a9b5c(uVar1,uVar2);
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x38),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  return;
}

