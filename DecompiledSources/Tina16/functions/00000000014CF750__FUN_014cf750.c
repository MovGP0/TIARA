/* Ghidra address: 014cf750 */
/* Ghidra symbol: FUN_014cf750 */


char FUN_014cf750(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  char local_3d;
  int local_3c [3];
  
  local_68 = 0;
  local_60[0] = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_01b24870(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),&local_3d);
  bVar2 = false;
  bVar1 = false;
  if ((local_3d != '\0') &&
     (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))(*(longlong **)(param_1 + 0x40)),
     0 < iVar6)) {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))();
    iVar9 = 0;
    bVar3 = false;
    bVar4 = false;
    if (-1 < iVar6 + -1) {
      do {
        bVar2 = bVar4;
        bVar1 = bVar3;
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                  (*(longlong **)(param_1 + 0x40),&local_48,iVar9);
        iVar7 = FUN_014cf430(param_1,local_48);
        if (iVar7 == 1) {
          bVar1 = true;
        }
        else if (iVar7 == 2) {
          bVar2 = true;
        }
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + -1;
        bVar3 = bVar1;
        bVar4 = bVar2;
      } while (iVar6 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x90))(*(longlong **)(param_1 + 0x40));
    if (bVar1) {
      FUN_014ceab0(param_1);
    }
    if (bVar2) {
      cVar5 = _JSAPP_GetSym(*(undefined8 *)(param_1 + 0x10),7,local_3c);
      if (cVar5 == '\0') {
        uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,L"JSSim: Invalid sym: JSAPP_W_SEM");
        FUN_004134c0(uVar8);
      }
      FUN_00414480(&local_50);
      bVar1 = false;
      if (local_3c[0] == 0) {
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
        iVar9 = 0;
        bVar1 = false;
        if (-1 < iVar6 + -1) {
          do {
            lVar10 = (longlong)iVar9;
            FUN_0043f750(local_60,*(undefined4 *)(param_1 + 0x218 + lVar10 * 0xc));
            FUN_00416ad0(&local_50,local_60[0]);
            if (iVar9 < *(int *)(*(longlong *)(param_1 + 0x60) + 0x10) + -1) {
              FUN_00416ad0(&local_50,&DAT_014cfae8);
            }
            if (*(int *)(param_1 + 0x218 + lVar10 * 0xc) != *(int *)(param_1 + 0x21c + lVar10 * 0xc)
               ) {
              _JSAPP_SendCmd(*(undefined8 *)(param_1 + 0x10),2,iVar9,
                             *(undefined4 *)(param_1 + 0x218 + lVar10 * 0xc));
              bVar1 = true;
              *(undefined4 *)(param_1 + 0x21c + lVar10 * 0xc) =
                   *(undefined4 *)(param_1 + 0x218 + lVar10 * 0xc);
            }
            iVar9 = iVar9 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))(*(longlong **)(param_1 + 0x50),local_50)
      ;
      if (bVar1) {
        _JSAPP_SendCmd(*(undefined8 *)(param_1 + 0x10),0x16,1,0);
      }
    }
    FUN_01b24710(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),&local_3d);
    FUN_004414c0(&local_68,*(undefined8 *)(param_1 + 0x38),L".log");
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x100))(*(longlong **)(param_1 + 0x50),local_68);
  }
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_50,2);
  return local_3d;
}

