/* Ghidra address: 0143afb0 */
/* Ghidra symbol: FUN_0143afb0 */


void FUN_0143afb0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5,
                 byte param_6)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int local_58;
  int local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_5;
  uStack_40 = param_5[1];
  if ((param_6 & 1) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x490);
    (**(code **)(*plVar1 + 0x98))(plVar1,&local_48);
  }
  if (((*(longlong *)(param_1 + 0x748) != 0) &&
      (*(int *)(*(longlong *)(param_1 + 0x700) + 0x4c0) <= param_4)) && (param_3 == 2)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x700) + 0x490);
    FUN_005fd4e0(*(undefined8 *)(lVar2 + 0x78),0);
    FUN_005fd6d0(*(undefined8 *)(lVar2 + 0x78),1);
    FUN_005fdab0(*(undefined8 *)(lVar2 + 0x80),0xffffff);
    iVar4 = FUN_004230a0(&local_48);
    iVar4 = iVar4 - *(int *)(*(longlong *)(param_1 + 0x748) + 0x98);
    local_58 = (int)local_48 + iVar4 / 2;
    iVar4 = FUN_004230c0(&local_48,(longlong)iVar4 % 2 & 0xffffffff);
    local_54 = local_48._4_4_ + (iVar4 - *(int *)(*(longlong *)(param_1 + 0x748) + 0x9c)) / 2;
    FUN_00423090(&local_58,*(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0x98));
    FUN_004230b0(&local_58,*(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0x9c));
    FUN_005fdf50(lVar2,&local_58);
    cVar3 = FUN_0143d610(param_1,param_4);
    if (cVar3 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x490);
      (**(code **)(*plVar1 + 0x110))(plVar1,&local_58,*(undefined8 *)(param_1 + 0x750));
    }
  }
  return;
}

