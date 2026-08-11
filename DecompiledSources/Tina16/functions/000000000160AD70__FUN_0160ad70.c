/* Ghidra address: 0160ad70 */
/* Ghidra symbol: FUN_0160ad70 */


void FUN_0160ad70(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  int *local_res10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  char local_39;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_01609da0(local_res10);
  iVar1 = FUN_004170c0(L"HSE_VALUE",local_res8,1);
  local_39 = 0 < iVar1;
  local_20 = (longlong *)FUN_01b21190(local_res8,0x20,0);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_58,local_24);
      FUN_01b21b80(local_58,0x3d,&local_30,&local_38);
      if (local_24 == 0) {
        iVar2 = FUN_0043fc00(local_38);
        *local_res10 = iVar2;
      }
      else if (local_24 == 1) {
        iVar2 = FUN_0043fc00(local_38);
        local_res10[1] = iVar2;
      }
      else if (local_24 == 2) {
        if (local_39 == '\0') {
          iVar2 = FUN_0160a050(local_38);
          local_res10[2] = iVar2;
        }
        else {
          iVar2 = FUN_0043fc00(local_38);
          local_res10[4] = iVar2;
        }
      }
      else if (local_24 == 3) {
        if (local_39 == '\0') {
          iVar2 = FUN_00f60db0(local_38);
          local_res10[3] = iVar2;
        }
        else {
          iVar2 = FUN_0043fc00(local_38);
          local_res10[5] = iVar2;
        }
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((*local_res10 < 1) || (9999 < *local_res10)) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"FLASH size too small or too big");
    FUN_004134c0(uVar3);
  }
  if ((local_res10[1] < 1) || (9999 < local_res10[1])) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SRAM size too small or too big");
    FUN_004134c0(uVar3);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_58);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_res8);
  return;
}

