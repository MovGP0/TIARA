/* Ghidra address: 00997260 */
/* Ghidra symbol: FUN_00997260 */


longlong FUN_00997260(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  if (param_1[9] == 0) {
    local_20[0] = 0;
    FUN_00995210(param_1,&local_28,param_1[7]);
    iVar1 = FUN_00416420(local_28,0);
    if (iVar1 == 0) {
      iVar1 = FUN_00416420(param_1[7],0);
      if (iVar1 != 0) {
        local_38 = param_1[7];
        local_30 = 0xf;
        uVar2 = FUN_0044d530(&PTR_FUN_00901770,1,L"Namespace URI of prefix \'%S\' not found.",
                             &local_38,0);
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
            plVar4 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
            uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4);
            (**(code **)(**(longlong **)(lVar3 + 0xa0) + 0xb8))
                      (*(longlong **)(lVar3 + 0xa0),local_28,param_1[8],uVar2,param_3,param_4,
                       param_1[6],local_20);
          }
        }
      }
    }
    if (local_20[0] == 0) {
      uVar2 = FUN_0044d490(&PTR_FUN_00901b50,1,L"Unknown function name.");
      FUN_004134c0(uVar2);
    }
  }
  else {
    local_20[0] = (*(code *)param_1[9])(param_2,param_3,param_4,param_1[6]);
  }
  FUN_00414520(&local_28);
  return local_20[0];
}

