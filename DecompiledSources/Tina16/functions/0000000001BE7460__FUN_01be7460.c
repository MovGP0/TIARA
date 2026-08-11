/* Ghidra address: 01be7460 */
/* Ghidra symbol: FUN_01be7460 */


void FUN_01be7460(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0065b870(*(undefined8 *)(param_2 + 0xa0));
  uVar2 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x4b0));
  thunk_FUN_041a9b5c(uVar1,uVar2);
  FUN_005ffb10(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x4b0),
               *(undefined8 *)(param_2 + 0x68));
  return;
}

