/* Ghidra address: 00e7af60 */
/* Ghidra symbol: FUN_00e7af60 */


void FUN_00e7af60(undefined8 param_1,longlong param_2,char param_3,char param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined8 *param_9,
                 char *param_10)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 in_stack_ffffffffffffff68;
  uint uVar4;
  undefined8 local_88 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  puVar3 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_9;
    param_9 = param_9 + 1;
    puVar3 = puVar3 + 1;
  }
  param_10[8] = param_3;
  param_10[9] = param_4;
  if (*param_10 == '\0') {
    uVar1 = FUN_016e9e80(param_1,4);
    *(uint *)(param_10 + 4) = uVar1 & 0xff;
  }
  else {
    uVar1 = FUN_016e9e80(param_1,2);
    *(uint *)(param_10 + 4) = uVar1 & 0xff;
  }
  lVar2 = FUN_016e3c40(&PTR_FUN_016df868,1,param_1,param_2,1,0,(ulonglong)uVar4 << 0x20);
  *(longlong *)(param_10 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0xe8) = local_88[0];
  lVar2 = *(longlong *)(param_10 + 0x10);
  *(undefined8 *)(lVar2 + 0xf8) = local_88[1];
  *(undefined8 *)(lVar2 + 0x118) = local_88[2];
  *(undefined8 *)(lVar2 + 0xf0) = local_88[3];
  *(undefined8 *)(lVar2 + 0xd0) = local_68;
  *(undefined8 *)(lVar2 + 0xd8) = local_60;
  *(undefined8 *)(lVar2 + 0xe0) = local_58;
  *(undefined8 *)(lVar2 + 0x60) = local_50;
  *(undefined8 *)(lVar2 + 0x100) = local_48;
  *(undefined8 *)(lVar2 + 0x108) = local_40;
  *(undefined8 *)(lVar2 + 0x110) = local_38;
  *(undefined1 *)(lVar2 + 0x138) = local_30;
  FUN_016ebe60(param_1,param_10[4] + '\x01',param_10[8],param_10[9],1);
  FUN_016ec240(param_1,param_10[4] + '\x02',param_6,param_5);
  FUN_016ed320(param_1,param_10[4] + '\x01',0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ed5d0(param_1,param_10[4] + '\x02',0,0,0,0x3ff0000000000000,0);
  if (*param_10 == '\0') {
    FUN_016ec240(param_1,param_10[4] + '\x03',param_7,param_5);
    FUN_016ec240(param_1,param_10[4] + '\x04',param_8,param_5);
    FUN_016ed5d0(param_1,param_10[4] + '\x03',0,0,0,0x3ff0000000000000,0);
    FUN_016ed5d0(param_1,param_10[4] + '\x04',0,0,0,0x3ff0000000000000,0);
  }
  return;
}

