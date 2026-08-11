/* Ghidra address: 00ee57c0 */
/* Ghidra symbol: FUN_00ee57c0 */


void FUN_00ee57c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 0x1cf) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0x1c0) + 0x10) + 0x231);
  FUN_00414c70(param_2 + 0x1b8,*(undefined8 *)(*(longlong *)(param_2 + 0x1c0) + 0xd80));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x1c0));
  uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x1b0))(*(undefined8 *)(param_2 + 0x1b0));
  FUN_00418590(uVar1,&DAT_01984da0);
  *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)PTR_DAT_02004208;
  *(undefined8 *)PTR_DAT_02004208 = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x1a8));
  return;
}

