/* Ghidra address: 00f82e00 */
/* Ghidra symbol: FUN_00f82e00 */


void FUN_00f82e00(longlong param_1,undefined8 param_2,ushort param_3,ulonglong param_4,int param_5,
                 undefined8 *param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *param_6;
  uVar2 = param_6[1];
  if (*(char *)(param_1 + 0x8e) == '\0') {
    lVar4 = FUN_00f828a0(&DAT_00f81eb0,1);
    *(undefined8 *)(lVar4 + 8) = param_2;
    *(uint *)(lVar4 + 0x30) = (uint)param_3;
    *(ulonglong *)(lVar4 + 0x38) = param_4 & 0xffff;
    *(longlong *)(lVar4 + 0x40) = (longlong)param_5;
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined8 *)(lVar4 + 0x18) = uVar2;
    *(undefined4 *)(lVar4 + 0x50) = param_7;
    uVar3 = thunk_FUN_039b2f93();
    *(undefined4 *)(lVar4 + 0x54) = uVar3;
    *(undefined1 *)(lVar4 + 0x58) = param_8;
    *(undefined2 *)(lVar4 + 0x5a) = (undefined2)param_7;
    *(int *)(lVar4 + 0x68) = *(int *)(param_1 + 0x88) + 1;
    LOCK();
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    UNLOCK();
    FUN_004afc10(*(undefined8 *)(param_1 + 0x80),lVar4);
    uVar3 = thunk_FUN_03d2fc6e(param_7,*(undefined2 *)(param_1 + 0x8c),FUN_00f82b50,
                               *(undefined8 *)(DAT_0202ef10 + 0x78),0);
    *(undefined4 *)(lVar4 + 0x6c) = uVar3;
  }
  return;
}

