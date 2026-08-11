/* Ghidra address: 00f82f20 */
/* Ghidra symbol: FUN_00f82f20 */


void FUN_00f82f20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (*(char *)(param_1 + 0x8e) == '\0') {
    lVar4 = FUN_00f828a0(&DAT_00f81eb0,1);
    *(undefined8 *)(lVar4 + 0x48) = param_3;
    *(undefined8 *)(lVar4 + 0x20) = uVar1;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    *(undefined4 *)(lVar4 + 0x50) = param_4;
    uVar3 = thunk_FUN_039b2f93();
    *(undefined4 *)(lVar4 + 0x54) = uVar3;
    *(undefined1 *)(lVar4 + 0x58) = param_5;
    *(short *)(lVar4 + 0x5a) = (short)param_4;
    *(int *)(lVar4 + 0x68) = *(int *)(param_1 + 0x88) + 1;
    LOCK();
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    UNLOCK();
    FUN_004afc10(*(undefined8 *)(param_1 + 0x80),lVar4);
    uVar3 = thunk_FUN_03d2fc6e(param_4,*(undefined2 *)(param_1 + 0x8c),FUN_00f82b50,
                               *(undefined8 *)(DAT_0202ef10 + 0x78),0);
    *(undefined4 *)(lVar4 + 0x6c) = uVar3;
  }
  return;
}

