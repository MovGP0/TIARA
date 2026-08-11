/* Ghidra address: 00c8b6a0 */
/* Ghidra symbol: FUN_00c8b6a0 */


int FUN_00c8b6a0(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_3c = -1;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar2 = 0;
    if (param_2 != 0) {
      lVar2 = *(longlong *)(param_2 + -8);
    }
    if (lVar2 == 0) {
      FUN_0041ddd0(local_30,PTR_PTR_02004b78);
      uVar3 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_30[0]);
      FUN_004134c0(uVar3);
    }
    if ((param_3 < 0) || (*(int *)(param_1 + 0x30) <= param_3)) {
      FUN_0041ddd0(&local_38,PTR_PTR_020028b8);
      uVar3 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_38);
      FUN_004134c0(uVar3);
    }
    iVar7 = 0;
    if (param_2 != 0) {
      iVar7 = (int)*(undefined8 *)(param_2 + -8);
    }
    iVar5 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x30);
    param_3 = *(int *)(param_1 + 0x1c) + param_3;
    iVar8 = iVar5 - iVar7;
    if (param_3 <= iVar8) {
      iVar8 = (iVar8 - param_3) + 1;
      do {
        bVar1 = true;
        iVar4 = 0;
        iVar6 = iVar7;
        if (iVar7 - 1U < 0x80000000) {
          do {
            if (iVar5 <= param_3 + iVar4) break;
            if (*(char *)(*(longlong *)(param_1 + 8) + (longlong)(param_3 + iVar4)) !=
                *(char *)(param_2 + iVar4)) {
              bVar1 = false;
              break;
            }
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (bVar1) {
          local_3c = param_3 - *(int *)(param_1 + 0x1c);
          break;
        }
        param_3 = param_3 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  FUN_00414560(&local_38,2);
  return local_3c;
}

