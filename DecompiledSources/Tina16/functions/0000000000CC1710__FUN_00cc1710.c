/* Ghidra address: 00cc1710 */
/* Ghidra symbol: FUN_00cc1710 */


void FUN_00cc1710(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x50);
  (**(code **)**(undefined8 **)(param_2 + 0x48))(*(undefined8 *)(param_2 + 0x48));
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x50);
  (**(code **)(**(longlong **)(param_2 + 0x40) + 8))(*(undefined8 *)(param_2 + 0x40));
  *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x80) + 0x50;
  *(undefined8 *)(param_2 + 0x30) = **(undefined8 **)(param_2 + 0x38);
  **(undefined8 **)(param_2 + 0x38) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x30));
  FUN_00cbf470(DAT_01ead3e8);
  return;
}

