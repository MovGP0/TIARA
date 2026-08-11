/* Ghidra address: 00618980 */
/* Ghidra symbol: FUN_00618980 */


longlong FUN_00618980(longlong param_1,char param_2,undefined8 param_3,char param_4,char param_5,
                     longlong param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_006184d0(local_res8,0,param_7);
  if (param_6 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00416740(param_6);
  }
  uVar2 = thunk_FUN_0416e139(param_3,-(uint)(param_4 != '\0'),-(uint)(param_5 != '\0'),local_20);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

