/* Ghidra address: 00785aa0 */
/* Ghidra symbol: FUN_00785aa0 */


longlong FUN_00785aa0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  *(undefined1 *)(local_res8 + 0x18) = 0;
  *(undefined1 *)(local_res8 + 0x23) = 0;
  *(undefined1 *)(local_res8 + 0x22) = 0;
  *(undefined1 *)(local_res8 + 0x24) = 0;
  *(undefined1 *)(local_res8 + 0x19) = 0;
  *(undefined1 *)(local_res8 + 0x21) = 0;
  *(undefined1 *)(local_res8 + 0x25) = 0;
  *(undefined1 *)(local_res8 + 0x20) = 0;
  *(undefined1 *)(local_res8 + 0x1b) = 0;
  uVar3 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  *(undefined8 *)(local_res8 + 8) = uVar3;
  uVar4 = FUN_00781840();
  uVar2 = FUN_00779380(uVar4,0x1d);
  FUN_005fdab0(uVar3,uVar2);
  uVar3 = FUN_00781840();
  uVar2 = FUN_007793c0(uVar3,0xff000008);
  *(undefined4 *)(local_res8 + 0x1c) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

