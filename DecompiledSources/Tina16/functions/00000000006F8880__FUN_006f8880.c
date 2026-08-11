/* Ghidra address: 006f8880 */
/* Ghidra symbol: FUN_006f8880 */


void FUN_006f8880(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int extraout_var;
  longlong *plVar4;
  int iVar5;
  int local_54;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_40 = 0;
  plVar1 = *(longlong **)(param_1 + 0x498);
  FUN_005fdcb0(plVar1[0x10],1);
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x10) + 0x10);
  local_54 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_006ee150(*(undefined8 *)(param_1 + 0x598),local_54);
      FUN_005fd4e0(plVar1[0xf],*(undefined4 *)(lVar3 + 0x30));
      FUN_005fd670(plVar1[0xf],2);
      iVar2 = FUN_006f68f0(param_1);
      FUN_006f68f0(param_1);
      lVar3 = FUN_006ee150(*(undefined8 *)(param_1 + 0x598),local_54);
      local_38 = *(ulonglong *)(lVar3 + 0x18);
      local_30 = *(ulonglong *)(lVar3 + 0x20);
      FUN_00423b50(&local_38,-iVar2,-extraout_var);
      (**(code **)(*plVar1 + 0xf8))
                (plVar1,local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,local_30._4_4_);
      plVar4 = (longlong *)FUN_006ee150(*(undefined8 *)(param_1 + 0x598),local_54);
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
      if (local_40 != 0) {
        FUN_005fd670(plVar1[0xf],0);
        lVar3 = FUN_006ee150(*(undefined8 *)(param_1 + 0x598),local_54);
        FUN_005fc860(plVar1[0xe],*(undefined4 *)(lVar3 + 0x30));
        plVar4 = (longlong *)FUN_006ee150(*(undefined8 *)(param_1 + 0x598),local_54);
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
        (**(code **)(*plVar1 + 0x120))(plVar1,local_38 & 0xffffffff,local_30._4_4_,local_48);
      }
      local_54 = local_54 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_48,2);
  return;
}

