/* Ghidra address: 00c5c340 */
/* Ghidra symbol: FUN_00c5c340 */


longlong FUN_00c5c340(longlong param_1,char param_2,undefined8 param_3,longlong param_4,char param_5
                     )

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
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
    local_19 = '\x01';
    for (local_20 = 0; (local_19 != '\0' && (local_20 < *(int *)(param_4 + 0x10)));
        local_20 = local_20 + 1) {
      uVar3 = FUN_004aeac0(param_4,local_20);
      local_19 = FUN_017b0220(uVar3);
    }
  }
  iVar4 = *(int *)(param_4 + 0x10);
  local_20 = 0;
  if (-1 < iVar4 + -1) {
    do {
      if (param_5 == '\x02') {
        if (local_19 == '\0') {
          uVar3 = FUN_004aeac0(param_4,local_20);
          FUN_017b0130(uVar3,0);
          uVar3 = FUN_004aeac0(param_4,local_20);
          FUN_004ae7e0(*(undefined8 *)(local_res8 + 0x10),uVar3);
        }
      }
      else {
        uVar3 = FUN_004aeac0(param_4,local_20);
        FUN_004ae7e0(*(undefined8 *)(local_res8 + 0x10),uVar3);
      }
      local_20 = local_20 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = FUN_00c5c160(param_5);
  *(undefined1 *)(local_res8 + 0x18) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

