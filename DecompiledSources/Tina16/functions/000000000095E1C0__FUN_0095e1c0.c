/* Ghidra address: 0095e1c0 */
/* Ghidra symbol: FUN_0095e1c0 */


longlong FUN_0095e1c0(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                     undefined1 param_9)

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
  cVar2 = FUN_008ff6c0(param_4);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar3);
  }
  FUN_0095d3c0(local_res8,0,*(undefined8 *)(param_3 + 0x18),param_4);
  *(undefined1 *)(local_res8 + 0x10) = 2;
  *(undefined1 *)(local_res8 + 0x28) = param_7;
  FUN_00414b90(local_res8 + 0x30,param_5);
  *(undefined1 *)(local_res8 + 0x38) = param_8;
  *(longlong *)(local_res8 + 0x50) = param_3;
  plVar4 = (longlong *)FUN_00410e60(&PTR_FUN_008f5158,1);
  *(longlong **)(local_res8 + 0x40) = plVar4;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_6);
  *(undefined1 *)(local_res8 + 0x48) = param_9;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

