/* Ghidra address: 016e2f60 */
/* Ghidra symbol: FUN_016e2f60 */


longlong FUN_016e2f60(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                     undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  short sVar2;
  undefined2 uVar3;
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
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0x70) = 0xc6293e5939a08cea;
  *(undefined8 *)(local_res8 + 0x78) = 0x46293e5939a08cea;
  *(undefined8 *)(local_res8 + 0x60) = 0x3eb0c6f7a0b5ed8d;
  *(undefined8 *)(local_res8 + 0x80) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined8 *)(local_res8 + 0x28) = 0;
  *(double *)(local_res8 + 0x30) = -*(double *)(local_res8 + 0x68) / 1.0;
  *(undefined1 *)(local_res8 + 0x44) = param_5;
  *(longlong *)(local_res8 + 0x48) = param_3;
  if (param_3 != 0) {
    sVar2 = FUN_016ea1b0(param_3,2);
    *(short *)(local_res8 + 0x38) = sVar2;
    FUN_016ea2d0(param_3,sVar2 + 1,*(undefined1 *)(local_res8 + 0x44));
    uVar3 = FUN_016ea350(param_3,local_res8);
    *(undefined2 *)(local_res8 + 0x3a) = uVar3;
    *(undefined1 *)(param_3 + 0x122) = 1;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

