/* Ghidra address: 004b1ce0 */
/* Ghidra symbol: FUN_004b1ce0 */


void FUN_004b1ce0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  uint local_1c;
  
  local_50 = auStack_78;
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_00475a40);
  if (cVar2 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1);
    while( true ) {
      lVar1 = param_1[2];
      if (*(int *)(lVar1 + 0x10) < 1) break;
      local_30 = *(undefined8 *)
                  (*(longlong *)(lVar1 + 8) + (longlong)(*(int *)(lVar1 + 0x10) + -1) * 8);
      local_28 = lVar1;
      FUN_00410f20(local_30);
    }
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10);
    local_1c = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_40 = (longlong *)FUN_004b1ca0(param_1);
        local_38 = *(longlong *)(param_2 + 0x10);
        if (*(uint *)(local_38 + 0x10) <= local_1c) {
          FUN_00594f90();
        }
        (**(code **)(*local_40 + 0x10))
                  (local_40,*(undefined8 *)
                             (*(longlong *)(local_38 + 8) + (longlong)(int)local_1c * 8));
        local_1c = local_1c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return;
}

