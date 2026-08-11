/* Ghidra address: 01177e70 */
/* Ghidra symbol: FUN_01177e70 */


undefined4 FUN_01177e70(longlong *param_1,int param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_4c;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  iVar3 = 0;
  FUN_005fd4e0(param_3[0xf],*(undefined4 *)(*param_1 + 0x14));
  FUN_005fd4e0(param_3[0xf],0xff);
  FUN_005fc860(param_3[0xe],0);
  iVar4 = -*(int *)(*(longlong *)(param_3[0xe] + 0x18) + 0x28);
  iVar2 = FUN_005fce00();
  iVar5 = 0;
  if (*(longlong *)*param_1 != 0) {
    iVar5 = *(int *)(*(longlong *)*param_1 + -4);
  }
  iVar2 = iVar2 * iVar5;
  if (param_2 == 0) {
    uVar1 = *(ushort *)(*param_1 + 8);
    if (uVar1 < 100) {
      if ((uVar1 == 99) || (uVar1 == 0x43)) {
        iVar2 = *(int *)(*param_1 + 0xc) - iVar2 / 2;
      }
      else {
        if (uVar1 == 0x4c) goto LAB_01177f55;
        if (uVar1 != 0x52) goto LAB_01177f87;
LAB_01177f79:
        iVar2 = *(int *)(*param_1 + 0xc) - iVar2;
      }
    }
    else {
      if (uVar1 != 0x6c) {
        if (uVar1 != 0x72) {
LAB_01177f87:
          local_4c = 4;
          goto LAB_01178116;
        }
        goto LAB_01177f79;
      }
LAB_01177f55:
      iVar2 = *(int *)(*param_1 + 0xc);
    }
    iVar3 = *(int *)(*param_1 + 0x10) - iVar4 / 2;
  }
  else {
    if (param_2 != 1) {
      local_4c = 4;
      goto LAB_01178116;
    }
    uVar1 = *(ushort *)(*param_1 + 8);
    if (uVar1 < 100) {
      if ((uVar1 == 99) || (uVar1 == 0x43)) {
        iVar3 = *(int *)(*param_1 + 0x10) + iVar2 / 2;
      }
      else {
        if (uVar1 == 0x4c) goto LAB_01178006;
        iVar3 = 0;
        if (uVar1 == 0x52) goto LAB_0117802a;
      }
    }
    else if (uVar1 == 0x6c) {
LAB_01178006:
      iVar3 = *(int *)(*param_1 + 0x10);
    }
    else if (uVar1 == 0x72) {
LAB_0117802a:
      iVar3 = *(int *)(*param_1 + 0x10) + iVar2;
    }
    iVar2 = *(int *)(*param_1 + 0xc) - iVar4 / 2;
  }
  (**(code **)(*param_3 + 200))(param_3,iVar2,iVar3);
  iVar5 = 0;
  if (*(longlong *)*param_1 != 0) {
    iVar5 = *(int *)(*(longlong *)*param_1 + -4);
  }
  if (param_2 == 1) {
    iVar4 = 1;
    if (0 < iVar5) {
      do {
        FUN_00416780(local_40,*(undefined2 *)(*(longlong *)*param_1 + -2 + (longlong)iVar4 * 2));
        (**(code **)(*param_3 + 0x120))(param_3,iVar2,iVar3,local_40[0]);
        iVar3 = iVar3 + 0xc;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    (**(code **)(*param_3 + 0x120))(param_3,iVar2,iVar3,*(undefined8 *)*param_1);
  }
  local_4c = 0;
LAB_01178116:
  FUN_00414480(local_40);
  return local_4c;
}

