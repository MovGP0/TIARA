/* Ghidra address: 01701090 */
/* Ghidra symbol: FUN_01701090 */


void FUN_01701090(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x328) != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x328))(*(undefined8 *)(param_2 + 0x328));
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  *(undefined8 *)(param_2 + 0x310) = *(undefined8 *)(param_2 + 0x308);
  *(undefined8 *)(param_2 + 0x308) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x310));
  uVar1 = FUN_00442620(param_2 + 0x100,*(undefined8 *)(param_2 + 0x378));
  FUN_015fcd60(*(undefined8 *)(param_2 + 0x300),uVar1,0);
  FUN_015fcbd0(PTR_DAT_02004770,0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0xf8));
  return;
}

