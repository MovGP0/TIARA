/* Ghidra address: 0177c190 */
/* Ghidra symbol: FUN_0177c190 */


void FUN_0177c190(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)**(undefined8 **)(param_2 + 0xa00))(*(undefined8 *)(param_2 + 0xa00));
  FUN_00418590(uVar1,&DAT_01984da0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x9f8));
  thunk_FUN_041a9b5c(0,*(undefined8 *)(param_2 + 0x9f0));
  *PTR_DAT_02003038 = *(undefined1 *)(param_2 + 0x9ef);
  FUN_00417c40(PTR_DAT_02004010,param_2 + 0xb7,&DAT_01d0d0b8);
  *(undefined1 *)(*(longlong *)(param_2 + 0xa40) + 0x6e0) = 0;
  return;
}

