/* Ghidra address: 01634120 */
/* Ghidra symbol: FUN_01634120 */


/* WARNING: Removing unreachable block (ram,0x01634190) */

void FUN_01634120(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  lVar1 = FUN_0161bb40();
  iVar4 = *(int *)(lVar1 + 0x10);
  local_40 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(lVar1,local_40);
      if (*(char *)(lVar2 + 8) == '4') {
        lVar3 = FUN_016339d0(param_1,lVar2,*(undefined8 *)(param_1 + 0x10),param_2,1);
        if (lVar3 == 0) {
          lVar3 = FUN_01628df0(lVar2,1,param_2);
          FUN_01634240(param_1,lVar3);
        }
        FUN_0161af40(lVar3,lVar2);
      }
      local_40 = local_40 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

