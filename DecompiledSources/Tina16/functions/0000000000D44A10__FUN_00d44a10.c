/* Ghidra address: 00d44a10 */
/* Ghidra symbol: FUN_00d44a10 */


void FUN_00d44a10(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if ((*param_2 == 0x134) && (param_1[0x10] == 0)) {
    param_1[0x10] = *(longlong *)(param_2 + 4);
  }
  if ((*param_2 == 0x133) && (param_1[0x11] == 0)) {
    param_1[0x11] = *(longlong *)(param_2 + 4);
  }
  iVar1 = *param_2;
  if (iVar1 < 0xb008) {
    if (iVar1 == 0xb007) {
      (**(code **)(*param_1 + 0x60))(param_1);
      FUN_00788400(param_1,param_2);
      return;
    }
    if (iVar1 != 8) {
      if (iVar1 - 0x132U < 7) goto LAB_00d44ad8;
      if (iVar1 != 0x14e) goto LAB_00d44b82;
    }
    FUN_00788d60(param_1,0);
    FUN_00788400(param_1,param_2);
    FUN_00788d60(param_1,1);
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  else {
    if (iVar1 == 0xb00c) {
      (**(code **)(*param_1 + 0x48))(param_1);
      FUN_00788400(param_1,param_2);
      return;
    }
    if (6 < iVar1 - 0xbd32U) {
LAB_00d44b82:
      FUN_007899d0(param_1,param_2);
      return;
    }
LAB_00d44ad8:
    if (*(char *)((longlong)param_1 + 0x2b) != '\0') {
      uVar2 = FUN_00788c20(param_1);
      uVar2 = FUN_005fbf20(uVar2);
      thunk_FUN_0412a071(*(undefined8 *)(param_2 + 2),uVar2);
      uVar3 = FUN_00781840();
      uVar4 = FUN_00787c60(param_1[3]);
      uVar2 = FUN_00779380(uVar3,(&DAT_01ecd3c4)[uVar4 & 0xff]);
      FUN_005fdab0(param_1[7],uVar2);
      uVar2 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1[7] + 0x18) + 0x28));
      thunk_FUN_03e3a7dc(*(undefined8 *)(param_2 + 2),uVar2);
    }
    uVar3 = FUN_005fdb10(param_1[7]);
    *(undefined8 *)(param_2 + 6) = uVar3;
  }
  return;
}

