/* Ghidra address: 00817ea0 */
/* Ghidra symbol: FUN_00817ea0 */


void FUN_00817ea0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_30;
  
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  FUN_00814f60(param_1);
  iVar2 = FUN_007e2ef0(*(undefined8 *)
                        (*(longlong *)(param_1 + 0x40) + 8 + (longlong)*(int *)(param_1 + 8) * 0x20)
                      );
  if (iVar2 != 0) {
    local_30 = FUN_00814a90(param_1,*(longlong *)(param_1 + 0x40) +
                                    (longlong)*(int *)(param_1 + 8) * 0x20);
    uVar5 = 0x4102;
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0xb1) == '\x01') {
      uVar5 = 0x410a;
    }
    cVar1 = FUN_00817d50(auStack_78,
                         *(undefined8 *)
                          (*(longlong *)(param_1 + 0x40) + 8 +
                          (longlong)*(int *)(param_1 + 8) * 0x20),&local_30);
    if (cVar1 != '\0') {
      uVar5 = uVar5 | 0x20;
      iVar2 = FUN_004230c0(*(longlong *)(param_1 + 0x40) + 0x10 +
                           (longlong)*(int *)(param_1 + 8) * 0x20);
      local_30 = CONCAT44(local_30._4_4_ - iVar2,(undefined4)local_30);
    }
    FUN_00814be0(param_1);
    uVar3 = FUN_007de060(*(undefined8 *)
                          (*(longlong *)(param_1 + 0x40) + 8 +
                          (longlong)*(int *)(param_1 + 8) * 0x20));
    local_50 = FUN_00786090(*(undefined8 *)(param_1 + 0x20));
    local_58 = 0;
    local_48 = 0;
    iVar2 = thunk_FUN_0412f5b0(uVar3,uVar5,local_30 & 0xffffffff,local_30._4_4_);
    FUN_00814c40(param_1);
    *(undefined1 *)(param_1 + 0xa8) = 0;
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0xab) == '\0') {
        *(undefined1 *)(param_1 + 0x9a) = 1;
        *(undefined1 *)(param_1 + 0x38) = 0;
        FUN_00814130(param_1,0);
      }
    }
    else {
      lVar4 = FUN_00813f30(param_1,(longlong)iVar2,0);
      if (lVar4 == 0) {
        uVar3 = FUN_00786090(*(undefined8 *)(param_1 + 0x20));
        thunk_FUN_0413e052(uVar3,0x111,(longlong)iVar2,0);
      }
      else {
        uVar3 = FUN_007e3880(lVar4);
        FUN_007e5c50(uVar3,*(undefined2 *)(lVar4 + 0xa8));
      }
      FUN_00813fb0(param_1);
    }
    FUN_00814f60(param_1);
  }
  return;
}

