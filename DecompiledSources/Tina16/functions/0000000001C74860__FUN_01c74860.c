/* Ghidra address: 01c74860 */
/* Ghidra symbol: FUN_01c74860 */


void FUN_01c74860(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  lVar1 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
  if (lVar1 != 0) {
    if (*(char *)(*(longlong *)(param_1 + 0xca8) + 0x80) == '\0') {
      uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01a98500(uVar2,10000,10000,local_1c,&local_20);
    }
    else {
      uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01a98500(uVar2,*(int *)(*(longlong *)(param_1 + 0x27a8) + 0xac) * 2,
                   *(int *)(*(longlong *)(param_1 + 0x27a8) + 0xb0) * 2,local_1c,&local_20);
    }
    FUN_007fa870(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x498),local_1c[0]);
    FUN_007fa870(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x4b0),local_20);
    uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
    FUN_01a98500(uVar2,*(undefined4 *)(param_1 + 0x1b60),*(undefined4 *)(param_1 + 0x1b64),local_1c,
                 &local_20);
    FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x498),local_1c[0]);
    FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x4b0),local_20);
  }
  return;
}

