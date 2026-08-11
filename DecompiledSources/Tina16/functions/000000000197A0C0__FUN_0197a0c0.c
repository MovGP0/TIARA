/* Ghidra address: 0197a0c0 */
/* Ghidra symbol: FUN_0197a0c0 */


void FUN_0197a0c0(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414ad0(param_1 + 0x88,*(undefined8 *)(param_2 + 0xb8));
  FUN_00414ad0(param_1 + 0xa0,*(undefined8 *)(param_2 + 200));
  FUN_00414ad0(param_1 + 0x98,*(undefined8 *)(param_2 + 0x80));
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x98);
  FUN_00414ad0(param_1 + 0xb0,*(undefined8 *)(param_2 + 0xd0));
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)(param_2 + 0xe8);
  FUN_00441640(&local_10,*(undefined8 *)(param_2 + 0x80));
  FUN_00414ad0(param_1 + 0x90,local_10);
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 0x90) == 0)) {
    FUN_00414ad0(param_1 + 0x90,*(undefined8 *)(param_1 + 0x88));
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  FUN_00414480(&local_10);
  return;
}

