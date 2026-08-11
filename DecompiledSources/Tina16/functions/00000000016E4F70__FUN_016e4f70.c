/* Ghidra address: 016e4f70 */
/* Ghidra symbol: FUN_016e4f70 */


longlong FUN_016e4f70(longlong param_1,char param_2,longlong param_3,longlong param_4,
                     undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_48 = param_5;
  local_40 = param_6;
  local_38 = param_7;
  FUN_016e2d40(local_res8,0,param_3,param_4);
  *(undefined8 *)(local_res8 + 0x68) = 0;
  *(undefined8 *)(local_res8 + 0x70) = 0;
  *(undefined8 *)(local_res8 + 0x78) = 0;
  *(undefined8 *)(local_res8 + 0x80) = 0;
  *(undefined8 *)(local_res8 + 0x60) = *(undefined8 *)(param_4 + 0x7f0);
  *(undefined8 *)(local_res8 + 0x88) = 0x3ff0000000000000;
  *(undefined1 *)(local_res8 + 0x90) = 1;
  *(undefined8 *)(local_res8 + 0x98) = 0;
  *(undefined8 *)(local_res8 + 0xa0) = 0;
  *(undefined8 *)(local_res8 + 0xa8) = 0x4000000000000000;
  *(undefined1 *)(local_res8 + 0xb0) = 0;
  if (param_3 != 0) {
    uVar2 = FUN_016ea1b0(param_3,1);
    *(undefined2 *)(local_res8 + 0x38) = uVar2;
    *(undefined1 *)(param_3 + 0x122) = 1;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

