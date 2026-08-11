/* Ghidra address: 016127d0 */
/* Ghidra symbol: FUN_016127d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_016127d0(longlong param_1,char param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar3;
  uVar3 = FUN_01612560(&DAT_01611548,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar3;
  uVar3 = FUN_00410e60(&DAT_01617398,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar3;
  uVar3 = FUN_00410e60(&DAT_01617398,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar3;
  *(undefined1 *)(local_res8 + 0x48) = 0;
  *(undefined8 *)(local_res8 + 0x80) = 0;
  *(undefined8 *)(local_res8 + 0x90) = 0;
  *(undefined8 *)(local_res8 + 0x98) = 0;
  *(undefined4 *)(local_res8 + 100) = 0;
  *(undefined4 *)(local_res8 + 0x2c) = 0;
  *(undefined4 *)(local_res8 + 0x34) = 0;
  *(undefined8 *)(local_res8 + 0xa0) = 0;
  *(undefined4 *)(local_res8 + 0x68) = 0;
  *(undefined1 *)(local_res8 + 0x49) = 0;
  *(undefined4 *)(local_res8 + 0xd8) = 0;
  *(undefined8 *)(local_res8 + 0xd0) = 0;
  *(undefined1 *)(local_res8 + 0x4a) = 0;
  *(undefined1 *)(local_res8 + 0x4b) = 0;
  *(undefined1 *)(local_res8 + 0x4c) = 0;
  *(undefined1 *)(local_res8 + 0x4d) = 1;
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  *(undefined1 *)(local_res8 + 0xa8) = 0;
  *(undefined1 *)(local_res8 + 0x4e) = 0;
  *(undefined4 *)(local_res8 + 0x38) = 0;
  FUN_0040d200(local_res8 + 0xc0,0x10,0);
  *(undefined8 *)(local_res8 + 0xe0) = 0;
  iVar1 = DAT_0210f804;
  *(int *)(local_res8 + 0x6c) = DAT_0210f804;
  if (iVar1 == 0) {
    _DAT_0210f80c = 1;
  }
  DAT_0210f804 = DAT_0210f804 + 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

