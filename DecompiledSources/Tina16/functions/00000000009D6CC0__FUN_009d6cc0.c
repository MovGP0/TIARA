/* Ghidra address: 009d6cc0 */
/* Ghidra symbol: FUN_009d6cc0 */


longlong FUN_009d6cc0(longlong param_1,char param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  cVar2 = (**(code **)(*(longlong *)param_3[0x15] + 0x120))((longlong *)param_3[0x15]);
  if (cVar2 == '\x01') {
    plVar3 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
    *(longlong **)(local_res8 + 0x20) = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,param_3[0x15]);
  }
  else {
    (**(code **)(*param_3 + 200))(param_3,&local_28);
    uVar4 = FUN_009906d0(&PTR_FUN_00927588,1,local_28);
    *(undefined8 *)(local_res8 + 0x20) = uVar4;
  }
  *(undefined8 *)(local_res8 + 0x28) = param_4;
  FUN_00414520(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

