/* Ghidra address: 00b5ab80 */
/* Ghidra symbol: FUN_00b5ab80 */


longlong FUN_00b5ab80(longlong param_1,char param_2,undefined8 param_3)

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
  *(undefined8 *)(local_res8 + 8) = param_3;
  uVar2 = FUN_00b5aa70(&DAT_00b5a378,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined1 *)(local_res8 + 0x18) = 0;
  *(undefined4 *)(local_res8 + 0xd34) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x130) = 0x400;
  *(undefined4 *)(local_res8 + 0xd38) = 0;
  *(undefined1 *)(local_res8 + 0x12e) = 0;
  FUN_0040d200(local_res8 + 0x134,(longlong)*(int *)(local_res8 + 0x130),0);
  FUN_0040d200(local_res8 + 0x534,(longlong)*(int *)(local_res8 + 0x130),0);
  FUN_0040d200(local_res8 + 0x934,(longlong)*(int *)(local_res8 + 0x130),0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

