/* Ghidra address: 01bb4620 */
/* Ghidra symbol: FUN_01bb4620 */


char FUN_01bb4620(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  bool local_39;
  undefined8 local_38;
  longlong local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  iVar5 = 0;
  local_39 = false;
  if (param_2 != 0) {
    while ((iVar5 < *(int *)(param_2 + 0x10) && (local_39 == false))) {
      lVar4 = FUN_00b94e60(param_2,iVar5);
      FUN_017ff4f0(lVar4,&local_20);
      iVar2 = FUN_00416db0(local_20,*(undefined8 *)(param_1 + 0x48));
      local_39 = iVar2 == 0;
      if (!local_39) {
        iVar2 = FUN_004170c0(&PTR_u_claFloralwhite_01bb4888,*(undefined8 *)(param_1 + 0x48),1);
        if (iVar2 == 1) {
          uVar3 = 0;
          if (*(longlong *)(param_1 + 0x48) != 0) {
            uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + -4);
          }
          FUN_00416dc0(param_1 + 0x48,*(undefined8 *)(param_1 + 0x48),3,uVar3);
        }
        iVar2 = FUN_004170c0(&PTR_u_claFloralwhite_01bb4888,local_20,1);
        if (iVar2 == 1) {
          uVar3 = 0;
          if (local_20 != 0) {
            uVar3 = *(undefined4 *)(local_20 + -4);
          }
          FUN_00416dc0(&local_20,local_20,3,uVar3);
        }
        iVar2 = FUN_00416db0(local_20,*(undefined8 *)(param_1 + 0x48));
        local_39 = iVar2 == 0;
      }
      if (local_39 == false) {
        cVar1 = FUN_01d04d50(lVar4);
        if ((((cVar1 != '\0') && (*(char *)(*(longlong *)(lVar4 + 0x1a8) + 0xb0) == '\0')) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x1a8) + 8) != 0)) &&
           (cVar1 = FUN_019af180(*(undefined8 *)(*(longlong *)(lVar4 + 0x1a8) + 8)), cVar1 == '\0'))
        {
          FUN_01d04330(lVar4,local_30);
          if (local_30[0] != 0) {
            FUN_01d04330(lVar4,&local_38);
            iVar2 = FUN_004170c0(L"NOPCB",local_38,1);
            if (iVar2 < 1) goto LAB_01bb4810;
          }
          local_39 = (bool)FUN_01bb4620(param_1,*(undefined8 *)(*(longlong *)(lVar4 + 0x1a8) + 8));
        }
      }
      else {
        **(longlong **)(param_1 + 0x58) = lVar4;
        **(longlong **)(param_1 + 0x50) = param_2;
      }
LAB_01bb4810:
      iVar5 = iVar5 + 1;
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return local_39;
}

