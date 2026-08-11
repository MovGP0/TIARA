/* Ghidra address: 01750230 */
/* Ghidra symbol: FUN_01750230 */


void FUN_01750230(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x6c) = param_2 - param_4;
  *(int *)(param_1 + 0x68) = param_3 - param_4;
  *(int *)(param_1 + 100) = param_2 + param_4;
  *(int *)(param_1 + 0x60) = param_3 + param_4;
  FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x28),*(undefined4 *)(param_1 + 0x6c)
               ,*(undefined4 *)(param_1 + 0x68),param_1 + 0x8c,param_1 + 0x88,
               *(longlong *)(param_1 + 0xc0) == 0,1);
  lVar2 = param_1 + 0x80;
  FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x28),*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 0x60),param_1 + 0x84,lVar2,
               *(longlong *)(param_1 + 0xc0) == 0,1);
  uVar3 = (undefined4)((ulonglong)lVar2 >> 0x20);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_01a98380(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x88),param_1 + 0x7c,param_1 + 0x78);
    lVar2 = param_1 + 0x70;
    FUN_01a98380(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x84),
                 *(undefined4 *)(param_1 + 0x80),param_1 + 0x74,lVar2);
    uVar3 = (undefined4)((ulonglong)lVar2 >> 0x20);
    if (param_6 < 1) {
      uVar1 = thunk_FUN_0412d81c(0xffffff);
      uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x148),uVar1);
      *(undefined8 *)(param_1 + 0x58) = uVar1;
      uVar1 = thunk_FUN_041d21bb(0,1,param_5);
      uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x148),uVar1);
      *(undefined8 *)(param_1 + 0x50) = uVar1;
    }
    else {
      if (param_5 == 0x8080) {
        param_5 = 0xffff;
      }
      uVar1 = thunk_FUN_0412d81c(param_5);
      uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x148),uVar1);
      *(undefined8 *)(param_1 + 0x58) = uVar1;
    }
    if (*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x7c)) {
      FUN_01cefdf0(param_1 + 0x7c,param_1 + 0x74);
    }
    if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x78)) {
      FUN_01cefdf0(param_1 + 0x78,param_1 + 0x70);
    }
    uVar1 = CONCAT44(uVar3,*(undefined4 *)(param_1 + 0x70));
    thunk_FUN_041d615e(*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x148),
                       *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x78),
                       *(undefined4 *)(param_1 + 0x74),uVar1);
    uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
    FUN_01a9a6f0(*(undefined8 *)(param_1 + 0xb8),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x148),
                 *(undefined8 *)(param_1 + 0x58));
    if (param_6 < 1) {
      FUN_01a9a6f0(*(undefined8 *)(param_1 + 0xb8),
                   *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x148),
                   *(undefined8 *)(param_1 + 0x50));
    }
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    if (param_6 < 1) {
      param_5 = 0xffffff;
    }
    else if (param_5 == 0x8080) {
      param_5 = 0xffff;
    }
    FUN_01243bf0(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                 *(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x88),
                 CONCAT44(uVar3,*(undefined4 *)(param_1 + 0x84)),*(undefined4 *)(param_1 + 0x80),1,
                 param_5,param_5);
  }
  return;
}

