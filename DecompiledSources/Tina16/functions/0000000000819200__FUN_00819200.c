/* Ghidra address: 00819200 */
/* Ghidra symbol: FUN_00819200 */


void FUN_00819200(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  FUN_008194f0(param_1,&local_38);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar4 = FUN_0065b870(*(longlong *)(param_1 + 0xc0));
    iVar1 = thunk_FUN_0419e3da(uVar4);
    if (iVar1 != 0) {
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        uVar4 = FUN_0065b870(*(longlong *)(param_1 + 0xe0));
        iVar1 = thunk_FUN_0419e3da(uVar4);
        if (iVar1 != 0) {
          uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xc0));
          iVar1 = FUN_004230a0(&local_38);
          thunk_FUN_041cc6e2(uVar4,0,local_38,
                             local_2c - *(int *)(*(longlong *)(param_1 + 0xc0) + 0x9c),
                             iVar1 - *(int *)(*(longlong *)(param_1 + 0xe0) + 0x98),
                             *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x9c),0x40);
          goto LAB_00819322;
        }
      }
      uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xc0));
      uVar3 = FUN_004230a0(&local_38);
      thunk_FUN_041cc6e2(uVar4,0,local_38,local_2c - *(int *)(*(longlong *)(param_1 + 0xc0) + 0x9c),
                         uVar3,*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x9c),0x40);
    }
  }
LAB_00819322:
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    uVar4 = FUN_0065b870(*(longlong *)(param_1 + 0xe0));
    iVar1 = thunk_FUN_0419e3da(uVar4);
    if (iVar1 != 0) {
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        uVar4 = FUN_0065b870(*(longlong *)(param_1 + 0xc0));
        iVar1 = thunk_FUN_0419e3da(uVar4);
        if (iVar1 != 0) {
          uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xe0));
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x98);
          iVar2 = FUN_004230c0(&local_38);
          thunk_FUN_041cc6e2(uVar4,0,local_30 - iVar1,local_34,iVar1,
                             iVar2 - *(int *)(*(longlong *)(param_1 + 0xc0) + 0x9c),0x40);
          goto LAB_0081940e;
        }
      }
      uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xe0));
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x98);
      uVar3 = FUN_004230c0(&local_38);
      thunk_FUN_041cc6e2(uVar4,0,local_30 - iVar1,local_34,iVar1,uVar3,0x40);
    }
  }
LAB_0081940e:
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    uVar4 = FUN_0065b870(*(longlong *)(param_1 + 0xd0));
    iVar1 = thunk_FUN_0419e3da(uVar4);
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
      uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xe0));
      iVar1 = thunk_FUN_0419e3da(uVar4);
      if ((iVar1 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
        uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xc0));
        iVar1 = thunk_FUN_0419e3da(uVar4);
        if (iVar1 != 0) {
          uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x98);
          iVar2 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x9c);
          thunk_FUN_041cc6e2(uVar4,0,local_30 - iVar1,local_2c - iVar2,iVar1,iVar2,0x40);
        }
      }
    }
  }
  return;
}

