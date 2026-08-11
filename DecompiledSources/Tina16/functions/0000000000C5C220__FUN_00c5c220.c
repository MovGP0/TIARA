/* Ghidra address: 00c5c220 */
/* Ghidra symbol: FUN_00c5c220 */


longlong FUN_00c5c220(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     char param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_19;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined8 *)(local_res8 + 8) = param_3;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar3;
  if (param_5 == '\x02') {
    local_19 = FUN_017b0220(param_4);
    if (local_19 == '\0') {
      FUN_017b0130(param_4,0);
      FUN_004ae7e0(*(undefined8 *)(local_res8 + 0x10),param_4);
    }
  }
  else {
    FUN_004ae7e0(uVar3,param_4);
  }
  uVar2 = FUN_00c5c160(param_5);
  *(undefined1 *)(local_res8 + 0x18) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

