/* Ghidra address: 015a9e90 */
/* Ghidra symbol: FUN_015a9e90 */


ushort FUN_015a9e90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_30 [2];
  undefined4 local_1c;
  longlong local_18;
  ushort local_a;
  
  local_30[0] = 0;
  local_18 = 0;
  FUN_00410ae0(param_1,local_30);
  FUN_00415dd0(&local_18,local_30[0],0);
  local_1c = 0;
  if (local_18 != 0) {
    local_1c = *(undefined4 *)(local_18 + -4);
  }
  uVar1 = FUN_00415ab0(local_18);
  local_a = FUN_015abd50(DAT_01f6bdc2,uVar1,local_1c);
  local_a = ~local_a;
  FUN_00414480(local_30);
  FUN_004144d0(&local_18);
  return local_a;
}

