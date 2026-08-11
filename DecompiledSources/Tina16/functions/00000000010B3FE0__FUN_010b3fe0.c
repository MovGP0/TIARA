/* Ghidra address: 010b3fe0 */
/* Ghidra symbol: FUN_010b3fe0 */


void FUN_010b3fe0(longlong param_1,undefined8 *param_2)

{
  undefined4 local_1c;
  
  local_1c = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
  FUN_01d311c0(*param_2,&local_1c,4);
  FUN_01d326d0(*param_2,*(undefined8 *)(param_1 + 8),local_1c);
  local_1c = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
  FUN_01d311c0(*param_2,&local_1c,4);
  FUN_01d326d0(*param_2,*(undefined8 *)(param_1 + 0x10),local_1c);
  local_1c = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18));
  FUN_01d311c0(*param_2,&local_1c,4);
  FUN_01d326d0(*param_2,*(undefined8 *)(param_1 + 0x18),local_1c);
  FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0x30));
  local_1c = (**(code **)**(undefined8 **)(param_1 + 0x28))(*(undefined8 **)(param_1 + 0x28));
  FUN_01d311c0(*param_2,&local_1c,4);
  FUN_01d326d0(*param_2,*(undefined8 *)(param_1 + 0x28),local_1c);
  return;
}

