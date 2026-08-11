/* Ghidra address: 018a6c20 */
/* Ghidra symbol: FUN_018a6c20 */


void FUN_018a6c20(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *in_stack_ffffffffffffffa8;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_30 = 0;
  DAT_02110670 = 0;
  FUN_01894a70(*(undefined8 *)(*(longlong *)(param_1 + 0x538) + 0x508));
  if (DAT_0211068d != '\0') {
    *(undefined4 *)(param_1 + 0x50c) = 0;
  }
  do {
    iVar2 = FUN_004b2060(*(undefined8 *)(param_1 + 0x528));
    if (iVar2 <= *(int *)(param_1 + 0x50c)) {
code_r0x018a6e05:
      if ((DAT_0211068d == '\0') && (DAT_02110670 == 0)) {
        uVar4 = FUN_0180bfb0();
        FUN_01809b60(uVar4,&local_30,L"clStrNotFound");
        FUN_0072d710(local_30);
        *(undefined1 *)(*(longlong *)(param_1 + 0x538) + 0x4b9) = 0;
      }
      FUN_00414480(&local_30);
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x4f8);
    if ((lVar1 == 0) || (*(int *)(param_1 + 0x500) != *(int *)(param_1 + 0x50c))) {
      if (lVar1 != 0) {
        FUN_00410f20(lVar1);
      }
      uVar4 = FUN_00605cc0(&PTR_FUN_005f86c8,1);
      *(undefined8 *)(param_1 + 0x4f8) = uVar4;
      uVar4 = FUN_006056e0(&PTR_FUN_005f7f40,1,uVar4,0);
      plVar3 = (longlong *)FUN_018a73a0(param_1);
      in_stack_ffffffffffffffa8 = (undefined1 *)0x3ff0000000000000;
      (**(code **)(*plVar3 + 0x118))
                (plVar3,*(undefined4 *)(param_1 + 0x50c),uVar4,0x3ff0000000000000,0x3ff0000000000000
                 ,0,0,0);
      FUN_00410f20(uVar4);
    }
    *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x50c);
    DAT_02110684 = 0;
    uVar4 = FUN_006060c0(*(undefined8 *)(param_1 + 0x4f8));
    FUN_00498350(local_28,0,0,0,(ulonglong)in_stack_ffffffffffffffa8 & 0xffffffff00000000);
    in_stack_ffffffffffffffa8 = local_28;
    thunk_FUN_039a5df8(0,uVar4,FUN_018a4a60,param_1,in_stack_ffffffffffffffa8);
    if ((DAT_02110670 & DAT_0211068d == '\0') != 0) {
      FUN_018a6eb0(param_1);
      *(undefined1 *)(*(longlong *)(param_1 + 0x538) + 0x4b9) = 1;
      goto code_r0x018a6e05;
    }
    *(int *)(param_1 + 0x50c) = *(int *)(param_1 + 0x50c) + 1;
    DAT_02110688 = 0xffffffff;
  } while( true );
}

