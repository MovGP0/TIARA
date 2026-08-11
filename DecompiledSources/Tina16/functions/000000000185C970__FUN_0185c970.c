/* Ghidra address: 0185c970 */
/* Ghidra symbol: FUN_0185c970 */


longlong FUN_0185c970(longlong param_1,char param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar2 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined8 *)(local_res8 + 0x28) = 0;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined8 *)(local_res8 + 0x48) = 0;
  *(undefined4 *)(local_res8 + 0x50) = 0xffffffff;
  lVar3 = FUN_004095c0(6);
  *(longlong *)(local_res8 + 0x20) = lVar3;
  if (lVar3 == 0) {
    FUN_0044d470();
  }
  puVar1 = *(undefined4 **)(local_res8 + 0x20);
  *puVar1 = 0x2d2d2d2d;
  *(undefined2 *)(puVar1 + 1) = 0x2d2d;
  lVar3 = FUN_004095c0(0x24);
  *(longlong *)(local_res8 + 0x28) = lVar3;
  if (lVar3 == 0) {
    FUN_0044d470();
  }
  FUN_0040d200(*(undefined8 *)(local_res8 + 0x28),0x24,0);
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar4;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar4;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

