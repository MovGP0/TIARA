/* Ghidra address: 01602cd0 */
/* Ghidra symbol: FUN_01602cd0 */


void FUN_01602cd0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x888) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x888));
  }
  uVar1 = FUN_00442620(param_2 + 0x7e,*(undefined8 *)(param_2 + 0x8f0));
  FUN_015fcd60(*(undefined8 *)(param_2 + 0x880),uVar1,*(undefined1 *)(param_2 + 0x900));
  FUN_015fcbd0(&DAT_0210f7fc,0);
  if (*(longlong *)(param_2 + 0x70) != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x70))(*(undefined8 *)(param_2 + 0x70));
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
  return;
}

