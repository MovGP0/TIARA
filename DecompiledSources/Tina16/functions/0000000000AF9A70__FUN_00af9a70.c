/* Ghidra address: 00af9a70 */
/* Ghidra symbol: FUN_00af9a70 */


void FUN_00af9a70(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x250) != '\x01') {
    FUN_005fdab0(param_2[0x10],0xffffff);
    FUN_005fdcb0(param_2[0x10],0);
    FUN_005fd670(param_2[0xf],0);
    FUN_005fd4e0(param_2[0xf],0xffffff);
    (**(code **)(*param_2 + 0xf8))
              (param_2,*(undefined4 *)(param_1 + 0x1dc),0,
               *(int *)(param_1 + 0x1d8) + *(int *)(param_1 + 0x1dc) + 1,
               *(int *)(param_1 + 0x1d4) + -2);
    (**(code **)(*param_2 + 0xf8))
              (param_2,*(undefined4 *)(param_1 + 0x1dc),param_3,
               *(int *)(param_1 + 0x1d8) + *(int *)(param_1 + 0x1dc) + 1,
               *(int *)(param_1 + 0x1d4) + *(int *)(param_1 + 0x1d0) + 1);
    if (((*(ushort *)(*(longlong *)(param_1 + 0x230) + 0x79a) & 8) != 0) &&
       (param_3 - *(int *)(param_1 + 0x1d4) < *(int *)(param_1 + 0x1d0))) {
      iVar1 = FUN_0040c840((double)(param_3 * *(int *)(param_1 + 0x1c8)) /
                           (double)*(int *)(param_1 + 0x1c4));
      uVar2 = thunk_FUN_03976db5(*(undefined4 *)(param_1 + 0x1cc),iVar1 + 2,
                                 *(int *)(param_1 + 0x1cc) + *(int *)(param_1 + 0x1c0),
                                 *(int *)(param_1 + 0x1bc) + *(int *)(param_1 + 0x1b8));
      uVar3 = FUN_005ffa40(param_2);
      thunk_FUN_039bba01(uVar3,uVar2);
      thunk_FUN_0416f828(uVar2);
      FUN_00af75c0(*(undefined8 *)(param_1 + 0x230),param_2,
                   *(int *)(param_1 + 0x1dc) + *(int *)(param_1 + 0x1b4),
                   *(undefined4 *)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x1d8),
                   *(undefined4 *)(param_1 + 0x1d0),
                   *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x740) + 200));
    }
    FUN_00af9a10(param_1,param_2);
  }
  return;
}

