/* Ghidra address: 0099bfd0 */
/* Ghidra symbol: FUN_0099bfd0 */


longlong FUN_0099bfd0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *in_stack_ffffffffffffffa8;
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00995210(param_1,&local_28,param_1[6]);
  iVar1 = FUN_00416420(local_28,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00416420(param_1[6],0);
    if (iVar1 != 0) {
      local_38 = param_1[6];
      local_30 = 0xf;
      in_stack_ffffffffffffffa8 =
           (longlong *)((ulonglong)in_stack_ffffffffffffffa8 & 0xffffffff00000000);
      uVar2 = FUN_0044d530(&PTR_FUN_00901770,1,L"Namespace URI of prefix \'%S\' not found.",
                           &local_38,in_stack_ffffffffffffffa8);
      FUN_004134c0(uVar2);
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  if (lVar3 != 0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
    lVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    if (lVar3 != 0) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4);
      lVar3 = (**(code **)(*plVar4 + 0x118))(plVar4);
      if (lVar3 != 0) {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4);
        lVar3 = (**(code **)(*plVar4 + 0x118))(plVar4);
        if (*(longlong *)(lVar3 + 0xa0) != 0) {
          plVar4 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4);
          lVar3 = (**(code **)(*plVar4 + 0x118))(plVar4);
          lVar5 = (**(code **)(*param_1 + 0x30))(param_1);
          in_stack_ffffffffffffffa8 = local_20;
          (**(code **)(**(longlong **)(lVar3 + 0xa0) + 0xc0))
                    (*(longlong **)(lVar3 + 0xa0),*(undefined8 *)(lVar5 + 0x18),local_28,param_1[7],
                     in_stack_ffffffffffffffa8);
        }
      }
    }
  }
  if (local_20[0] == 0) {
    local_38 = param_1[5];
    local_30 = 0xf;
    uVar2 = FUN_0044d530(&PTR_FUN_00901b50,1,L"No binding for variable $%s provided.",&local_38,
                         (ulonglong)in_stack_ffffffffffffffa8 & 0xffffffff00000000);
    FUN_004134c0(uVar2);
  }
  FUN_00414520(&local_28);
  return local_20[0];
}

