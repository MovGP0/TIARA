/* Ghidra address: 016a5cb0 */
/* Ghidra symbol: FUN_016a5cb0 */


longlong FUN_016a5cb0(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  undefined1 local_118 [264];
  
  local_120 = auStack_148;
  local_res8 = param_1;
  puVar1 = auStack_148;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_120;
  }
  local_120 = puVar1;
  FUN_016a5800(local_res8,0,param_3);
  if (*(longlong *)(param_3 + 0x20) == 0) {
    local_118[0] = 0;
  }
  else {
    FUN_00414ff0(local_118,*(longlong *)(param_3 + 0x20));
  }
  *(undefined8 *)(local_res8 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  uVar2 = FUN_00b95c80(local_118);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

