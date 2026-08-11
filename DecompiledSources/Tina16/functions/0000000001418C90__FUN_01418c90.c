/* Ghidra address: 01418c90 */
/* Ghidra symbol: FUN_01418c90 */


void FUN_01418c90(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0xfa9) = 1;
  if ((*(int *)(param_1 + 0xf8c) == 0) && (*(longlong *)(param_1 + 0xf90) == 0)) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,local_20,0x89f);
    FUN_016fd940(local_20[0]);
    *(undefined1 *)(param_1 + 0xfa9) = 0;
  }
  if (*(int *)(param_1 + 0xf8c) == 1) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x28))(*(longlong **)(param_1 + 0x748));
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x28))
                        (*(longlong **)(param_1 + 0x750));
      if (iVar2 != 0) goto LAB_01418e5f;
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x28))(*(longlong **)(param_1 + 0x748));
    if (iVar2 == 0) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x28))
                        (*(longlong **)(param_1 + 0x750));
      if (iVar2 == 0) {
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_30,PTR_PTR_02005378);
        FUN_00b8e650(uVar3,&local_28,L"HDLStrings.Msg_Vhdl_MCU_NoHexLstFile",local_30);
        FUN_016fd940(local_28);
        *(undefined1 *)(param_1 + 0xfa9) = 0;
        goto LAB_01418e5f;
      }
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x28))(*(longlong **)(param_1 + 0x748));
    if (iVar2 == 0) {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_40,PTR_PTR_020055a8);
      FUN_00b8e650(uVar3,&local_38,L"HDLStrings.Msg_Vhdl_MCU_NoHexFile",local_40);
      FUN_016fd940(local_38);
      *(undefined1 *)(param_1 + 0xfa9) = 0;
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x28))
                        (*(longlong **)(param_1 + 0x750));
      if (iVar2 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x750) + 0x78))(*(longlong **)(param_1 + 0x750),0);
      }
    }
  }
LAB_01418e5f:
  if (*(char *)(param_1 + 0xfa9) != '\0') {
    if (*(char *)(param_1 + 0x769) == '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfb0) + 0xd8);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfb0) + 0xd0);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfb0) + 200);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfb0) + 0xd8);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x740));
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfb0) + 0xd0);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x748));
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfb0) + 200);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x750));
    }
    if ((*(char *)(param_1 + 0x769) != '\0') && (*(char *)(param_1 + 0x76a) != '\0')) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfb0) + 0xd0);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x748));
    }
    if (*(int *)(param_1 + 0xf8c) == 2) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfb0) + 0xf8);
      (**(code **)(*plVar1 + 8))(plVar1,0);
      (**(code **)(**(longlong **)(param_1 + 0x760) + 0x58))
                (*(longlong **)(param_1 + 0x760),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xfb0) + 0xf8));
    }
    if (*(int *)(param_1 + 0xf8c) != 3) {
      FUN_010afec0(*(undefined8 *)(*(longlong *)(param_1 + 0xfb0) + 0x110));
    }
    if (*(int *)(param_1 + 0xf8c) != 4) {
      FUN_010b4300(*(undefined8 *)(*(longlong *)(param_1 + 0xfb0) + 0x118));
    }
  }
  FUN_00414560(&local_40,5);
  return;
}

