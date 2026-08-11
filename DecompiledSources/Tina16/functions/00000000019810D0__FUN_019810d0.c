/* Ghidra address: 019810d0 */
/* Ghidra symbol: FUN_019810d0 */


longlong FUN_019810d0(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined8 *)(local_res8 + 0x18) = param_3;
  *(undefined1 *)(local_res8 + 0x20) = param_4;
  plVar2 = (longlong *)FUN_0196c390(&PTR_FUN_01937480,1);
  *(longlong **)(local_res8 + 0x28) = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0x1a8));
  FUN_0196c500(*(undefined8 *)(local_res8 + 0x28),
               *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0x1a8));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

