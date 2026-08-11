/* Ghidra address: 015ef2a0 */
/* Ghidra symbol: FUN_015ef2a0 */


void FUN_015ef2a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x2d8) != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x2d8))(*(undefined8 *)(param_2 + 0x2d8));
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  if (*(longlong *)(param_2 + 0x2d0) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x2d0));
  }
  if (*(longlong *)(param_2 + 0x2c8) != 0) {
    uVar1 = FUN_00442620(param_2 + 0xbe,*(undefined8 *)(param_2 + 0xb0));
    FUN_015fcd60(*(undefined8 *)(param_2 + 0x2c8),uVar1,0);
    *(undefined8 *)(param_2 + 0x2c8) = 0;
  }
  FUN_015fcbd0(PTR_DAT_02004770,0);
  return;
}

