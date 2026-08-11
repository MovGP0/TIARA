/* Ghidra address: 013c1e30 */
/* Ghidra symbol: FUN_013c1e30 */


void FUN_013c1e30(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  
  local_80 = auStack_a8;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  *param_3 = 0;
  FUN_00414480(param_4);
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10);
  local_64 = 0;
  local_30 = param_2;
  if (-1 < iVar4 + -1) {
    do {
      local_38 = FUN_00f30ba0(local_30,local_64);
      (**(code **)(**(longlong **)(local_38 + 0x10) + 0x18))
                (*(longlong **)(local_38 + 0x10),&local_58);
      local_28 = *(longlong **)(local_38 + 0x18);
      cVar1 = FUN_004113d0(local_28,&LAB_00f22f08);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(local_28,&LAB_00f22a90);
        if (cVar1 == '\0') {
          uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"ProcessResult");
          FUN_004134c0(uVar3);
        }
        else {
          (**(code **)(*local_28 + 0x18))(local_28,&local_50);
        }
      }
      else {
        local_60 = FUN_013ba600(local_28);
      }
      iVar2 = FUN_00416db0(local_58,&DAT_013c20d0);
      if (iVar2 == 0) {
        FUN_00414ad0(param_4,local_50);
      }
      else {
        iVar2 = FUN_00416db0(local_58,L"syntax_error");
        if (iVar2 == 0) {
          local_68 = FUN_0040c840(local_60);
          if (local_68 == 1) {
            *param_3 = 1;
          }
        }
        else {
          iVar2 = FUN_00416db0(local_58,L"base_exc_error");
          if (iVar2 == 0) {
            local_68 = FUN_0040c840(local_60);
            if (local_68 == 1) {
              *param_3 = 2;
            }
          }
          else {
            iVar2 = FUN_00416db0(local_58,L"security_error");
            if ((iVar2 == 0) && (local_68 = FUN_0040c840(local_60), local_68 == 1)) {
              *param_3 = 3;
            }
          }
        }
      }
      local_64 = local_64 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_58,4);
  return;
}

