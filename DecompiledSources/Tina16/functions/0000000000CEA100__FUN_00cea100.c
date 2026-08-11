/* Ghidra address: 00cea100 */
/* Ghidra symbol: FUN_00cea100 */


void FUN_00cea100(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_60 = auStack_98;
  local_68 = 0;
  local_40 = 0;
  FUN_00cea770(param_1);
  local_30 = FUN_00ce9860(*(undefined8 *)(param_1 + 0xa8),0);
  if (0 < *(int *)(local_30 + 0x10)) {
    local_20 = FUN_00410e60(&PTR_FUN_00ce60e0,1);
    iVar4 = *(int *)(local_30 + 0x10);
    local_24 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_38 = (longlong *)FUN_00ce6f60(local_30,local_24);
        cVar1 = (**(code **)(*local_38 + 0x58))(local_38,param_2,param_3);
        if (cVar1 != '\0') {
          FUN_004ae7e0(local_20,local_38);
        }
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (0 < *(int *)(local_20 + 0x10)) {
      if (1 < *(int *)(local_20 + 0x10)) {
        FUN_004af4a0(local_20,FUN_00cea080);
      }
      local_48 = FUN_00448ed0();
      iVar4 = *(int *)(local_20 + 0x10);
      local_24 = 0;
      if (-1 < iVar4 + -1) {
        do {
          lVar2 = FUN_00ce6f60(local_20,local_24);
          *(undefined8 *)(lVar2 + 0x60) = local_48;
          local_24 = local_24 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      plVar3 = (longlong *)FUN_00ce6f60(local_20,0);
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_40);
      iVar4 = *(int *)(local_20 + 0x10) + -1;
      local_24 = 1;
      if (0 < iVar4) {
        do {
          plVar3 = (longlong *)FUN_00ce6f60(local_20,local_24);
          (**(code **)(*plVar3 + 0x50))(plVar3,&local_68);
          local_78 = local_68;
          FUN_00416cd0(&local_40,3,local_40,&DAT_00cea3a4);
          local_24 = local_24 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_00cd8890(param_4,L"Cookie",local_40);
    }
    FUN_00410f20(local_20);
  }
  FUN_00ce98a0(*(undefined8 *)(param_1 + 0xa8),0);
  FUN_00414480(&local_68);
  FUN_00414480(&local_40);
  return;
}

