/* Ghidra address: 00aa4130 */
/* Ghidra symbol: FUN_00aa4130 */


longlong FUN_00aa4130(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  FUN_00a9cf70(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0x560) = *(undefined1 *)(param_4 + 0x560);
  *(undefined4 *)(local_res8 + 0x564) = *(undefined4 *)(param_4 + 0x564);
  *(undefined1 *)(local_res8 + 0x568) = *(undefined1 *)(param_4 + 0x568);
  if (*(longlong *)(param_4 + 0x578) != 0) {
    uVar2 = FUN_00a952f0(&PTR_FUN_00a83768,1,*(undefined8 *)(local_res8 + 0xa8),
                         *(longlong *)(param_4 + 0x578));
    *(undefined8 *)(local_res8 + 0x578) = uVar2;
  }
  plVar3 = (longlong *)FUN_00a4dfc0(&PTR_FUN_00a4d8c8,1);
  *(longlong **)(local_res8 + 0x570) = plVar3;
  (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_4 + 0x570));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

