/* Ghidra address: 00b44650 */
/* Ghidra symbol: FUN_00b44650 */


void FUN_00b44650(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong local_20 [2];
  
  local_20[0] = 0;
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
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xca2);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf00a);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),8);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_2 + 0x30));
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0xa00);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x93);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf00b);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0x36);
  FUN_00b258a0(*(undefined8 *)(param_1 + 0xe8),&DAT_01e85d58,0x36);
  FUN_00b43f40(param_1,param_2);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf011);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0);
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(int *)(param_1 + 0x38) = (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x40)) + 4;
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x40));
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x38));
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x3c));
  iVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (iVar2 - *(int *)(param_1 + 0x48)) + 8;
  iVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + (iVar2 - *(int *)(param_1 + 0x50)) + 8;
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x44)) + -2;
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x44));
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),*(undefined2 *)(param_1 + 0x2c));
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x3c));
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x5d);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x34);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x15);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x12);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x19);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),*(undefined2 *)(param_2 + 0x2c));
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x4011);
  FUN_0040d200(param_1 + 0x5c,0xc,0);
  FUN_00b258a0(*(undefined8 *)(param_1 + 0xe8),param_1 + 0x5c,0xc);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xd);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x16);
  FUN_00b258a0(*(undefined8 *)(param_1 + 0xe8),&DAT_01e85d42,0x16);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xec);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),8);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf00d);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x1b6);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x12);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x212);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
  iVar2 = 6;
  do {
    FUN_00b25810(*(undefined8 *)(param_1 + 0xe8),0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar4 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    uVar4 = *(uint *)(*(longlong *)(param_2 + 0x40) + -4) >> 1;
  }
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),uVar4);
  uVar1 = 0;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x50) + -4);
  }
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),uVar1);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00b15100(local_20,*(undefined8 *)(param_2 + 0x40));
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x3c);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(local_20[0] + -4);
  }
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),
               CONCAT22((short)((uint)uVar1 >> 0x10),(short)uVar1 + 1));
  FUN_00b25810(*(undefined8 *)(param_1 + 0xe8),1);
  uVar3 = FUN_00414df0(local_20);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(local_20[0] + -4);
  }
  FUN_00b258a0(*(undefined8 *)(param_1 + 0xe8),uVar3,uVar1);
  FUN_00414c70(local_20,*(undefined8 *)(param_2 + 0x50));
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x3c);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(local_20[0] + -4);
  }
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),uVar1);
  uVar3 = FUN_00414df0(local_20);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(local_20[0] + -4);
  }
  FUN_00b258a0(*(undefined8 *)(param_1 + 0xe8),uVar3,uVar1);
  FUN_004144d0(local_20);
  return;
}

