/* Ghidra address: 015eec20 */
/* Ghidra symbol: FUN_015eec20 */


void FUN_015eec20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x490) != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x490))(*(undefined8 *)(param_2 + 0x490));
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  if (*(longlong *)(param_2 + 0x488) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x488));
  }
  if (*(longlong *)(param_2 + 0x480) != 0) {
    uVar1 = FUN_00442620(param_2 + 0x7e,*(undefined8 *)(param_2 + 0x70));
    FUN_015fcd60(*(undefined8 *)(param_2 + 0x480),uVar1,0);
    *(undefined8 *)(param_2 + 0x480) = 0;
  }
  FUN_015fcbd0(PTR_DAT_02004770,0);
  return;
}

