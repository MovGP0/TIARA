/* Ghidra address: 009618b0 */
/* Ghidra symbol: FUN_009618b0 */


longlong FUN_009618b0(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  uVar2 = FUN_008f7f70(&PTR_FUN_008f67c0,1);
  *(undefined8 *)(local_res8 + 0x98) = uVar2;
  *(longlong *)(local_res8 + 0x20) = param_3;
  puVar4 = (undefined8 *)(param_3 + 0x10);
  puVar5 = (undefined8 *)(local_res8 + 0x60);
  for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)(param_3 + 0xc0);
  puVar5 = (undefined8 *)(local_res8 + 0x28);
  for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(local_res8 + 0x18) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

