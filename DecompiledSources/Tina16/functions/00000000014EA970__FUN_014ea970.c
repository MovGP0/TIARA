/* Ghidra address: 014ea970 */
/* Ghidra symbol: FUN_014ea970 */


void FUN_014ea970(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x9c) == 0) {
    if (*(int *)(param_1 + 0x98) == 0) {
      FUN_014ea8c0(param_1,L"simprim",L"simprim_Vpackage.vhd",1);
      iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x68),L"tina");
      if (iVar1 == 0) {
        FUN_014ea8c0(param_1,L"simprim",L"simprim_Vcomponents.vhd",0);
      }
      else {
        FUN_014ea8c0(param_1,L"simprim",L"simprim_Vcomponents_all.vhd",0);
      }
    }
    else {
      FUN_014ea8c0(param_1,L"unisim",L"unisim_VPKG.vhd",1);
      FUN_014ea8c0(param_1,L"unisim",L"unisim_VCOMP.vhd",0);
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))();
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        if (*(int *)(param_1 + 0x98) == 0) {
          FUN_00414b50(&local_38,L"simprim");
        }
        else {
          FUN_00414b50(&local_38,L"unisim");
        }
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                  (*(longlong **)(param_1 + 0x40),&local_40,iVar2);
        FUN_014ea8c0(param_1,local_38,local_40,0);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))();
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_00414b50(&local_38,L"v_unisim");
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                  (*(longlong **)(param_1 + 0x40),&local_48,iVar2);
        FUN_014ea8c0(param_1,local_38,local_48,0);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414560(&local_48,4);
  return;
}

