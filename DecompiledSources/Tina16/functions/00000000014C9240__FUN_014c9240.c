/* Ghidra address: 014c9240 */
/* Ghidra symbol: FUN_014c9240 */


void FUN_014c9240(undefined8 param_1)

{
  undefined8 uVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_38 = 0;
  lVar3 = FUN_014cdd20();
  iVar5 = *(int *)(*(longlong *)(lVar3 + 0x9c0) + 0x10);
  local_40 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x9c0),local_40);
      FUN_015755e0(*(undefined8 *)(lVar3 + 0x8d0),*(undefined4 *)(lVar4 + 0x18),&local_30);
      if (*(char *)(local_30 + 0x49) != '\0') {
        uVar1 = *(undefined8 *)(lVar4 + 8);
        sVar2 = FUN_01d03160(uVar1);
        if (sVar2 == 0x40a) {
          FUN_014c9130(param_1,uVar1,0,*(undefined4 *)(lVar4 + 0x18),local_38,0);
        }
        if (sVar2 == 0x40b) {
          FUN_014c9130(param_1,uVar1,1,*(undefined4 *)(lVar4 + 0x18),local_38,0);
        }
      }
      local_40 = local_40 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_38);
  return;
}

