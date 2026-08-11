/* Ghidra address: 008204a0 */
/* Ghidra symbol: FUN_008204a0 */


undefined8 * FUN_008204a0(undefined8 *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_0068b1b0(local_res8,0,param_3);
  *(undefined1 *)((longlong)local_res8 + 0x551) = 1;
  *(undefined4 *)(local_res8 + 0xad) = 0xff000017;
  *(undefined4 *)((longlong)local_res8 + 0x56c) = 0xff000018;
  if ((DAT_020126c0 == 0) && (DAT_020126c4 == 0)) {
    FUN_008213f0(*local_res8);
  }
  *(int *)(local_res8 + 0xaf) = DAT_020126c0;
  *(int *)((longlong)local_res8 + 0x57c) = DAT_020126c4;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_res8[0xae] = uVar2;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

