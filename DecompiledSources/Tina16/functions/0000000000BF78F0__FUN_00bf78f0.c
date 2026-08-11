/* Ghidra address: 00bf78f0 */
/* Ghidra symbol: FUN_00bf78f0 */


void FUN_00bf78f0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_7c [20];
  int local_68;
  int local_5c;
  int local_44;
  int local_40;
  int local_3c;
  
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xd0) + -2 + (longlong)*(int *)(param_1 + 0xc0) * 2);
  iVar2 = FUN_00bd4cc0(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x620),uVar1);
  iVar5 = iVar2;
  if (*PTR_DAT_02001bb8 == '\0') {
    if (uVar1 < 0x100) {
      uVar4 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x490));
      iVar3 = thunk_FUN_0419b8dc(uVar4,uVar1,uVar1,&local_44);
      if (iVar3 == 0) {
        if (uVar1 < 0xff) {
          uVar4 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x490));
          thunk_FUN_040f248f(uVar4,local_7c);
          iVar5 = local_68 + local_5c;
        }
      }
      else {
        iVar5 = local_44 + local_40;
        if (-1 < local_3c) {
          iVar5 = local_44 + local_40 + local_3c;
        }
      }
    }
  }
  else {
    uVar4 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x490));
    iVar3 = thunk_FUN_0419b8dc(uVar4,uVar1,uVar1,&local_44);
    if (iVar3 == 0) {
      if (uVar1 < 0xff) {
        uVar4 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x490));
        thunk_FUN_040f248f(uVar4,local_7c);
        iVar5 = local_68 + local_5c;
      }
    }
    else {
      iVar5 = local_44 + local_40;
      if (-1 < local_3c) {
        iVar5 = local_44 + local_40 + local_3c;
      }
    }
  }
  if (iVar2 < iVar5) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + (iVar5 - iVar2);
  }
  return;
}

