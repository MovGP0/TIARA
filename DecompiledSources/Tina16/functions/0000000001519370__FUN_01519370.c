/* Ghidra address: 01519370 */
/* Ghidra symbol: FUN_01519370 */


int FUN_01519370(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  undefined4 local_28;
  ushort local_22;
  int local_20 [2];
  longlong local_18;
  int local_c;
  
  local_30 = auStack_68;
  local_28 = 0;
  FUN_00e1b7d0(&local_22);
  if ((local_22 == 0) ||
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8)),
     iVar1 < 1)) {
    return 3;
  }
  FUN_00e1bc20(&local_22,&local_18,&local_28,local_20);
  local_c = local_20[0];
  if ((local_20[0] != 3) && (local_18 != 0)) {
    local_48 = param_2;
    FUN_01519450(param_1,local_18,local_22,&local_28);
    FUN_004095f0(local_18,(uint)local_22 * 4);
    return local_c;
  }
  return 3;
}

