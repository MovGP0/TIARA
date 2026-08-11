/* Ghidra address: 00cd61b0 */
/* Ghidra symbol: FUN_00cd61b0 */


ushort FUN_00cd61b0(undefined8 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00410ae0(param_1,local_30);
  FUN_00415dd0(local_20,local_30[0],0);
  uVar3 = 0;
  if (local_20[0] != 0) {
    uVar3 = *(undefined4 *)(local_20[0] + -4);
  }
  uVar2 = FUN_00415ab0(local_20[0]);
  uVar1 = FUN_00cd7970(DAT_01eaf012,uVar2,uVar3);
  FUN_00414480(local_30);
  FUN_004144d0(local_20);
  return ~uVar1;
}

