/* Ghidra address: 0044b630 */
/* Ghidra symbol: FUN_0044b630 */


undefined8 FUN_0044b630(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  ushort uVar1;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 *local_20;
  undefined4 local_18;
  int local_14;
  longlong local_10;
  
  local_20 = auStack_68;
  local_18 = 0x3300;
  if (param_3 != 0) {
    local_18 = 0x3b00;
  }
  local_48 = &local_10;
  local_40 = 0;
  local_38 = 0;
  local_14 = thunk_FUN_04094731(local_18,param_3,param_2,0);
  while ((0 < local_14 &&
         ((uVar1 = *(ushort *)(local_10 + (longlong)(local_14 + -1) * 2), uVar1 < 0x21 ||
          (uVar1 == 0x2e))))) {
    local_14 = local_14 + -1;
  }
  FUN_00414740(param_1,local_10,local_14);
  thunk_FUN_03d5b950(local_10);
  return param_1;
}

