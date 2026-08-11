/* Ghidra address: 00b44030 */
/* Ghidra symbol: FUN_00b44030 */


void FUN_00b44030(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  iVar3 = *(int *)(param_2 + 0x38);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xec);
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
  if (*(char *)(param_1 + 0x5b) == '\0') {
    FUN_00b43d30(param_1);
  }
  else {
    uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0x48) = uVar1;
  }
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf004);
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x4b2);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf00a);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),8);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_2 + 0x30));
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0xa00);
  lVar4 = FUN_00b41f30(*(undefined8 *)(param_1 + 0xe0),iVar3);
  FUN_00414be0(&local_28,*(undefined8 *)(lVar4 + 0x10));
  FUN_00b15100(&local_30,local_28);
  FUN_004156b0(local_20,local_30,&DAT_00b445cc);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x23);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf00b);
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),iVar2 + 0xc);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x4104);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),iVar3 + 1);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xc105);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(local_20[0] + -4);
  }
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),uVar1);
  uVar5 = FUN_00414df0(local_20);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(local_20[0] + -4);
  }
  FUN_00b258a0(*(undefined8 *)(param_1 + 0xe8),uVar5,uVar1);
  FUN_00b43f40(param_1,param_2);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf011);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0);
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(int *)(param_1 + 0x38) = (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x40)) + -4;
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x40));
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x38));
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x3c));
  iVar3 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (iVar3 - *(int *)(param_1 + 0x48));
  iVar3 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + (iVar3 - *(int *)(param_1 + 0x50));
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x44)) + -2;
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x44));
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),*(undefined2 *)(param_1 + 0x2c));
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x3c));
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x5d);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x26);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x15);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x12);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),8);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),*(undefined2 *)(param_2 + 0x2c));
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x6011);
  FUN_0040d200(param_1 + 0x5c,0xc,0);
  FUN_00b258a0(*(undefined8 *)(param_1 + 0xe8),param_1 + 0x5c,0xc);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),7);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),2);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xffffffff);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),8);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),2);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),1);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_004144d0(&local_30);
  FUN_00414520(&local_28);
  FUN_004144d0(local_20);
  return;
}

