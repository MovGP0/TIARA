/* Ghidra address: 0147f7b0 */
/* Ghidra symbol: FUN_0147f7b0 */


void FUN_0147f7b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_40 = 0;
  local_70 = param_1;
  local_60 = param_2;
  cVar2 = FUN_01486290(param_1,L"graph",&local_48);
  if (cVar2 == '\0') {
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x78))(local_60,L"FixComponentIDsFromGraph: no graph node");
    }
  }
  else {
    local_68 = FUN_014860c0(local_48,L"components");
    local_58 = FUN_014860c0(local_70,L"components");
    iVar5 = *(int *)(*(longlong *)(local_58 + 0x10) + 0x10);
    local_4c = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar1 = *(longlong *)(local_58 + 0x10);
        if (*(uint *)(lVar1 + 0x10) <= local_4c) {
          FUN_00594f90();
        }
        local_30 = FUN_004113f0(*(undefined8 *)
                                 (*(longlong *)(lVar1 + 8) + (longlong)(int)local_4c * 8),
                                &LAB_00f23b78);
        FUN_014861c0(local_30,&local_40,&PTR_DAT_0147fa20);
        iVar6 = *(int *)(*(longlong *)(local_68 + 0x10) + 0x10);
        uVar4 = 0;
        if (-1 < iVar6 + -1) {
          do {
            lVar1 = *(longlong *)(local_68 + 0x10);
            if (*(uint *)(lVar1 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            uVar3 = FUN_004113f0(*(undefined8 *)
                                  (*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8),
                                 &LAB_00f23b78);
            FUN_014861c0(uVar3,&local_38,L"label");
            cVar2 = FUN_0147b780(local_40,local_38);
            if (cVar2 != '\0') {
              FUN_0147f690(auStack_98,local_38);
              break;
            }
            uVar4 = uVar4 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_4c = local_4c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_00414560(&local_40,2);
  return;
}

