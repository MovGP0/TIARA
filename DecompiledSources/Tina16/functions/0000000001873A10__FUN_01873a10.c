/* Ghidra address: 01873a10 */
/* Ghidra symbol: FUN_01873a10 */


undefined8 FUN_01873a10(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_158 [40];
  undefined1 *local_130;
  undefined1 local_11c [256];
  int local_1c;
  undefined8 local_18;
  int local_c;
  
  local_130 = auStack_158;
  FUN_004144d0(param_1);
  local_18 = FUN_01873b70(&DAT_018736b8,1);
  local_c = FUN_004b6da0(param_2);
  FUN_004b6dc0(param_2,0);
  local_1c = 0x100;
  do {
    local_1c = (**(code **)(*param_2 + 0x18))(param_2,local_11c,local_1c);
    FUN_01873c50(local_18,local_11c,local_1c);
  } while (local_1c == 0x100);
  FUN_01873d20(local_18);
  uVar1 = FUN_01873de0(local_18);
  FUN_01873960(param_1,uVar1);
  FUN_004b6dc0(param_2,(longlong)local_c);
  FUN_00410f20(local_18);
  return param_1;
}

