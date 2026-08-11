/* Ghidra address: 019da250 */
/* Ghidra symbol: FUN_019da250 */


void FUN_019da250(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00416ba0(&local_10,*(undefined8 *)PTR_DAT_020049a0,L"\\VHDL\\aiprompts");
  FUN_00724420(*(undefined8 *)(param_1 + 0x740),local_10);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xa8))(*(longlong **)(param_1 + 0x740));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x740),local_20);
    uVar2 = FUN_00724300(*(undefined8 *)(param_1 + 0x740));
    FUN_019da490(param_1,local_20[0],uVar2);
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

