/* Ghidra address: 00b0a960 */
/* Ghidra symbol: FUN_00b0a960 */


void FUN_00b0a960(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  lVar4 = FUN_0084e390(param_1,*(undefined4 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x4ac));
  if (lVar4 != 0) {
    if (*PTR_DAT_020039a8 == '\0') {
      cVar2 = FUN_00b0a360(param_1);
      if (cVar2 == '\0') {
        plVar5 = (longlong *)
                 FUN_0084e390(param_1,*(undefined4 *)(param_1 + 0x4a8),
                              *(undefined4 *)(param_1 + 0x4ac));
        (**(code **)(*plVar5 + 0x30))(plVar5);
        plVar5 = (longlong *)
                 FUN_0084e390(param_1,*(undefined4 *)(param_1 + 0x4a8),
                              *(undefined4 *)(param_1 + 0x4ac));
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_20);
        FUN_00b07aa0(*(undefined8 *)(param_1 + 0x618),local_20);
        plVar5 = (longlong *)FUN_0084e390(param_1,1,1);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_28);
        FUN_00b0b2a0(param_1,1,1,local_28);
        plVar5 = (longlong *)
                 FUN_0084e390(param_1,*(undefined4 *)(param_1 + 0x4a8),
                              *(undefined4 *)(param_1 + 0x4ac));
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_30);
        if (local_30 != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x4ac);
          plVar5 = (longlong *)FUN_0084e390(param_1,*(undefined4 *)(param_1 + 0x4a8),uVar1);
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_38);
          FUN_00b0b2a0(param_1,0,uVar1,local_38);
        }
      }
    }
    else {
      plVar5 = (longlong *)
               FUN_0084e390(param_1,*(undefined4 *)(param_1 + 0x4a8),
                            *(undefined4 *)(param_1 + 0x4ac));
      iVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
      *(int *)(param_1 + 0x638) = iVar3;
      if (iVar3 == 1) {
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x508) = 1;
      }
    }
  }
  FUN_00414560(&local_38,4);
  return;
}

