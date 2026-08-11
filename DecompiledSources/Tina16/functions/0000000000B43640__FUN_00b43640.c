/* Ghidra address: 00b43640 */
/* Ghidra symbol: FUN_00b43640 */


void FUN_00b43640(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00b419a0(&DAT_00b40220,1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),lVar2);
  *(undefined4 *)(lVar2 + 0x38) = param_3;
  *(undefined4 *)(lVar2 + 8) = param_2;
  uVar1 = FUN_00b41f80(param_1);
  *(undefined4 *)(lVar2 + 0x2c) = uVar1;
  *(undefined4 *)(lVar2 + 0xc) = param_4;
  *(undefined4 *)(lVar2 + 0x10) = param_5;
  *(undefined4 *)(lVar2 + 0x14) = param_6;
  *(undefined4 *)(lVar2 + 0x18) = param_7;
  *(undefined4 *)(lVar2 + 0x1c) = param_8;
  *(undefined4 *)(lVar2 + 0x20) = param_9;
  *(undefined4 *)(lVar2 + 0x24) = param_10;
  *(undefined4 *)(lVar2 + 0x28) = param_11;
  lVar2 = FUN_00b41f30(param_1,param_3);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  return;
}

