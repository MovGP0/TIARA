/* Ghidra address: 016e3c40 */
/* Ghidra symbol: FUN_016e3c40 */


/* WARNING: Removing unreachable block (ram,0x016e3e0e) */

longlong FUN_016e3c40(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  *(undefined8 *)(local_res8 + 0xc0) = 0;
  *(undefined8 *)(local_res8 + 200) = 0;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined8 *)(local_res8 + 0xd8) = 0xc6293e5939a08cea;
  *(undefined8 *)(local_res8 + 0xe0) = 0x46293e5939a08cea;
  *(undefined8 *)(local_res8 + 0x60) = 0x3eb0c6f7a0b5ed8d;
  *(undefined8 *)(local_res8 + 0xe8) = 0x408f400000000000;
  *(undefined8 *)(local_res8 + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0xf8) = 0x408f400000000000;
  *(undefined8 *)(local_res8 + 0x100) = 0x3fe0000000000000;
  *(undefined8 *)(local_res8 + 0x108) = 0x3e112e0be826d695;
  *(undefined8 *)(local_res8 + 0x110) = 0x3e112e0be826d695;
  *(undefined8 *)(local_res8 + 0x120) = 0;
  *(undefined8 *)(local_res8 + 0x128) = 0;
  *(undefined8 *)(local_res8 + 0x118) = 0;
  *(undefined1 *)(local_res8 + 0x138) = 1;
  *(undefined8 *)(local_res8 + 0x68) = *(undefined8 *)(local_res8 + 0xf0);
  *(ulonglong *)(local_res8 + 0x70) = *(ulonglong *)(local_res8 + 0xf0) ^ 0x8000000000000000;
  *(undefined8 *)(local_res8 + 0x48) = param_3;
  local_48 = param_5;
  local_40 = 0;
  local_38 = 0;
  uVar2 = FUN_016e2f60(&PTR_FUN_016df0a8,1,param_3,param_4);
  *(undefined8 *)(local_res8 + 0xb0) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

