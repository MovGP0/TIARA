/* Ghidra address: 013fa970 */
/* Ghidra symbol: FUN_013fa970 */


longlong FUN_013fa970(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     int param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_30;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = &local_1a;
  local_40 = &local_1b;
  uVar2 = FUN_01cfde70(param_4,param_5 + 1,0,local_19);
  *(undefined8 *)(local_res8 + 0x6e0) = uVar2;
  FUN_007fc180(local_res8,0,param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

