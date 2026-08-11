/* Ghidra address: 004d7d90 */
/* Ghidra symbol: FUN_004d7d90 */


longlong FUN_004d7d90(longlong param_1,char param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  cVar2 = FUN_00440a20(param_3,1);
  if ((cVar2 == '\0') || (param_4 == '\0')) {
    uVar3 = FUN_004b9860(&PTR_FUN_0047c498,1,param_3,0xff00);
    *(undefined8 *)(local_res8 + 8) = uVar3;
  }
  else {
    plVar4 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,param_3,1);
    *(longlong **)(local_res8 + 8) = plVar4;
    (**(code **)(*plVar4 + 0x50))(plVar4,0,2);
  }
  FUN_004d7aa0(local_res8,0,*(undefined8 *)(local_res8 + 8));
  *(undefined1 *)(local_res8 + 0x21) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

