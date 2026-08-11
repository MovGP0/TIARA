/* Ghidra address: 00f5cdb0 */
/* Ghidra symbol: FUN_00f5cdb0 */


bool FUN_00f5cdb0(longlong param_1,char *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool local_89;
  undefined8 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  wchar_t *local_50 [2];
  undefined8 local_40 [2];
  
  local_80 = 0;
  local_78 = 0;
  local_70 = (wchar_t *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_50[0] = (wchar_t *)0x0;
  local_58 = (char *)0x0;
  local_40[0] = 0;
  local_89 = false;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b3cf0(*(undefined8 *)(param_1 + 0x438),&local_58,iVar7);
      FUN_0043ea00(local_50,local_58);
      if (local_50[0] == L"TR_Mode") {
        local_89 = true;
      }
      else if (local_50[0] == (wchar_t *)0x0) {
        local_89 = false;
      }
      else {
        iVar3 = FUN_0043e420(local_50[0],L"TR_Mode");
        local_89 = iVar3 == 0;
      }
      if (local_89 != false) {
        if (param_3 == '\0') {
          FUN_004b5390(*(undefined8 *)(param_1 + 0x438),&local_68,iVar7);
          iVar2 = FUN_0043fc00(local_68);
          *param_2 = 0.5 < (double)iVar2;
        }
        else {
          FUN_0043f750(&local_60,*param_2);
          FUN_004b5450(*(undefined8 *)(param_1 + 0x438),iVar7,local_60);
        }
        goto LAB_00f5d196;
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b6d10(plVar5,0);
  if (param_3 == '\0') {
    *param_2 = '\0';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar6 = FUN_00b94e60(param_1,iVar7);
      if ((((lVar6 != 0) && (cVar1 = FUN_0198a580(lVar6), cVar1 == '\x04')) &&
          (cVar1 = FUN_01d04d40(lVar6), cVar1 != '\0')) && (*(char *)(lVar6 + 0x1a0) == '\x02')) {
        if (*(longlong *)(*(longlong *)(lVar6 + 0x1a8) + 0x58) == 0) {
          FUN_013ad8c0(local_40,*(undefined8 *)(*(longlong *)(lVar6 + 0x1a8) + 0xb0));
          (**(code **)(**(longlong **)(lVar6 + 0x1a8) + 0x10))
                    (*(longlong **)(lVar6 + 0x1a8),local_40[0]);
        }
        else {
          FUN_00414b50(local_40,*(undefined8 *)(*(longlong *)(lVar6 + 0x1a8) + 0x58));
        }
        FUN_016cc2a0(local_40[0],plVar5);
        iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (0 < iVar3) {
          iVar3 = (**(code **)(*plVar5 + 0x28))();
          iVar8 = 0;
          if (-1 < iVar3 + -1) {
            do {
              FUN_004b3cf0(plVar5,&local_70,iVar8);
              if (local_70 == L"TR_Mode") {
                bVar9 = true;
              }
              else if (local_70 == (wchar_t *)0x0) {
                bVar9 = false;
              }
              else {
                iVar4 = FUN_0043e420(local_70,L"TR_Mode");
                bVar9 = iVar4 == 0;
              }
              if (bVar9) {
                local_89 = true;
                if (param_3 == '\0') {
                  if (*param_2 == '\0') {
                    FUN_004b5390(plVar5,&local_80,iVar8);
                    iVar4 = FUN_0043fc00(local_80);
                    if (0.5 < (double)iVar4) goto LAB_00f5d118;
                    cVar1 = '\0';
                  }
                  else {
LAB_00f5d118:
                    cVar1 = '\x01';
                  }
                  *param_2 = cVar1;
                }
                else {
                  FUN_0043f750(&local_78,*param_2);
                  FUN_004b5450(plVar5,iVar8,local_78);
                }
              }
              iVar8 = iVar8 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          if (param_3 != '\0') {
            *(undefined2 *)((longlong)plVar5 + 0x2c) = 0x20;
            *(undefined2 *)((longlong)plVar5 + 0x2e) = 0x20;
            FUN_004b3880(plVar5,local_40);
            (**(code **)(**(longlong **)(lVar6 + 0x1a8) + 0x10))
                      (*(longlong **)(lVar6 + 0x1a8),local_40[0]);
          }
        }
        (**(code **)(*plVar5 + 0x90))(plVar5);
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar5);
LAB_00f5d196:
  FUN_00414560(&local_80,7);
  FUN_00414480(local_40);
  return local_89;
}

