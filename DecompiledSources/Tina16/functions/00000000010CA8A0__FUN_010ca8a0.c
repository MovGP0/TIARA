/* Ghidra address: 010ca8a0 */
/* Ghidra symbol: FUN_010ca8a0 */


undefined8 FUN_010ca8a0(longlong param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414480();
  bVar7 = 1;
  iVar5 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  if (*(int *)(param_1 + 8) <= iVar5) {
    uVar6 = *(undefined2 *)
             (*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
    do {
      bVar2 = FUN_010c9e10(param_1,uVar6);
      if ((bVar7 & bVar2) == 0) {
        cVar3 = FUN_010c9e10(param_1,uVar6);
        if (cVar3 == '\0') {
          cVar3 = FUN_010c9e40(param_1,uVar6);
          if (cVar3 != '\0') goto LAB_010ca9a5;
        }
        else {
LAB_010ca9a5:
          if (bVar7 == 0) goto LAB_010ca9aa;
        }
        bVar1 = false;
      }
      else {
LAB_010ca9aa:
        iVar5 = 0;
        if (*(longlong *)(param_1 + 0x18) != 0) {
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
        }
        bVar1 = *(int *)(param_1 + 8) <= iVar5;
      }
      if (!bVar1) break;
      FUN_00416780(local_30,uVar6);
      FUN_00416ad0(&local_20,local_30[0]);
      iVar5 = 0;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
      }
      if (*(int *)(param_1 + 8) < iVar5) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        uVar6 = *(undefined2 *)
                 (*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      bVar7 = 0;
    } while( true );
  }
  if ((param_3 != '\0') && (local_20 == 0)) {
    FUN_0043f750(&local_40,*(undefined4 *)(param_1 + 0x10));
    FUN_00416ba0(&local_38,L"Word expected, lineno: ",local_40);
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_38);
    FUN_004134c0(uVar4);
  }
  FUN_0043ea00(param_2,local_20);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_20);
  return param_2;
}

