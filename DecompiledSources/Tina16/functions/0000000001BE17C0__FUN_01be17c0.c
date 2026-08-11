/* Ghidra address: 01be17c0 */
/* Ghidra symbol: FUN_01be17c0 */


void FUN_01be17c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  
  thunk_FUN_03e0f7b4(0x1002,0,param_1 + 0x2c,0);
  if ((*(longlong *)PTR_DAT_02003ec8 != 0) &&
     (((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x5a8) + 0x578) != '\0' ||
       (*(char *)(param_1 + 0x48) == '\0')) && (*(int *)(param_1 + 0x2c) != 0)))) {
    thunk_FUN_03e0f7b4(0x1012,0,param_1 + 0x2c,0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x5b0);
      FUN_0064d000(lVar1,local_28);
      uVar2 = FUN_0064d1f0(*(undefined8 *)(lVar1 + 0x78),local_28);
      *(undefined8 *)(param_1 + 0x24) = uVar2;
      uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
      (**(code **)PTR_DAT_02003ec8)
                (uVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x5f0),
                 *(uint *)(&DAT_01fe11a8 +
                          (ulonglong)
                          (*(int *)(*(longlong *)(param_1 + 0x40) + 0x94) <
                          *(int *)(param_1 + 0x28) + -5) * 4) |
                 *(uint *)(&DAT_01fe11a0 + (ulonglong)*(byte *)(param_1 + 0x48) * 4));
    }
    else {
      uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
      (**(code **)PTR_DAT_02003ec8)
                (uVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x5f0),
                 *(uint *)(&DAT_01fe11a0 + (ulonglong)*(byte *)(param_1 + 0x48) * 4) | 0x80000);
    }
  }
  return;
}

