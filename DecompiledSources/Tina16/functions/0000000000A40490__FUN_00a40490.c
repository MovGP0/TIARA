/* Ghidra address: 00a40490 */
/* Ghidra symbol: FUN_00a40490 */


longlong FUN_00a40490(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_00a40350(local_res8,0,param_3,param_4);
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 2) * 4));
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 2) * 4));
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 2) * 4));
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  FUN_0040d200(*(undefined8 *)(local_res8 + 0x20),(longlong)((*(int *)(local_res8 + 0x18) + 2) * 4),
               0);
  FUN_0040d200(*(undefined8 *)(local_res8 + 0x28),(longlong)((*(int *)(local_res8 + 0x18) + 2) * 4),
               0);
  FUN_0040d200(*(undefined8 *)(local_res8 + 0x30),(longlong)((*(int *)(local_res8 + 0x18) + 2) * 4),
               0);
  *(undefined8 *)(local_res8 + 0x38) = *(undefined8 *)(local_res8 + 0x20);
  *(undefined8 *)(local_res8 + 0x40) = *(undefined8 *)(local_res8 + 0x28);
  *(undefined8 *)(local_res8 + 0x48) = *(undefined8 *)(local_res8 + 0x30);
  *(undefined4 *)(local_res8 + 0x50) = 0;
  *(undefined4 *)(local_res8 + 0x54) = 0;
  *(undefined4 *)(local_res8 + 0x58) = *(undefined4 *)(local_res8 + 0x50);
  *(undefined4 *)(local_res8 + 0x5c) = *(undefined4 *)(local_res8 + 0x50);
  *(undefined4 *)(local_res8 + 0x60) = *(undefined4 *)(local_res8 + 0x50);
  *(undefined4 *)(local_res8 + 100) = *(undefined4 *)(local_res8 + 0x50);
  *(undefined4 *)(local_res8 + 0x68) = *(undefined4 *)(local_res8 + 0x50);
  *(undefined4 *)(local_res8 + 0x6c) = *(undefined4 *)(local_res8 + 0x50);
  *(undefined4 *)(local_res8 + 0x70) = *(undefined4 *)(local_res8 + 0x50);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

