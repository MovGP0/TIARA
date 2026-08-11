/* Ghidra address: 016e56e0 */
/* Ghidra symbol: FUN_016e56e0 */


longlong FUN_016e56e0(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 *local_30;
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_58 = param_5;
  local_50 = param_6;
  local_48 = param_7;
  FUN_016e2d40(local_res8,0,param_3,param_4);
  *(undefined8 *)(local_res8 + 0xa0) = 0x3e112e0be826d695;
  *(undefined8 *)(local_res8 + 0xa8) = 0;
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  *(undefined8 *)(local_res8 + 0xc0) = 0;
  *(double *)(local_res8 + 0x70) = 1.0 / *(double *)(param_4 + 0x760);
  *(undefined8 *)(local_res8 + 0x78) = 0x3ff0000000000000;
  *(undefined4 *)(local_res8 + 0x9c) = 0;
  *(undefined4 *)(local_res8 + 0x98) = 5;
  uVar3 = FUN_00409570(0x90);
  *(undefined8 *)(local_res8 + 0x90) = uVar3;
  uVar2 = FUN_016ea350(param_3,local_res8);
  *(undefined2 *)(local_res8 + 0x3a) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

