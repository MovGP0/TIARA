/* Ghidra address: 01477fa0 */
/* Ghidra symbol: FUN_01477fa0 */


longlong FUN_01477fa0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     char param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined8 *)(local_res8 + 0x278) = param_3;
  *(undefined8 *)(local_res8 + 0x288) = param_4;
  *(undefined1 *)(local_res8 + 0x2b5) = 1;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x290) = uVar4;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x298) = uVar4;
  if (param_5 == '\0') {
    uVar3 = FUN_013b9740(*(longlong *)(local_res8 + 0x278) + 0x492);
    *(undefined4 *)(local_res8 + 0x2b0) = uVar3;
  }
  else {
    *(undefined4 *)(local_res8 + 0x2b0) = 0;
  }
  local_38 = 0;
  uVar4 = FUN_013b9a60(&DAT_013b8648,1,param_4,0);
  *(undefined8 *)(local_res8 + 0x2a8) = uVar4;
  *(undefined1 *)(local_res8 + 0x2b4) = 0;
  if (*(int *)(local_res8 + 0x2b0) == 1) {
    uVar2 = FUN_01478150(local_res8);
    *(undefined1 *)(local_res8 + 0x2b4) = uVar2;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

