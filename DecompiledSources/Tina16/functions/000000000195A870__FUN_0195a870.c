/* Ghidra address: 0195a870 */
/* Ghidra symbol: FUN_0195a870 */


void FUN_0195a870(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if ((*(char *)(param_1 + 0x298) == '\0') || (*(char *)(param_1 + 0x299) != '\0')) {
    local_3c = *(int *)(param_1 + 0x248);
    local_38 = *(int *)(param_1 + 0x24c);
    local_34 = *(int *)(param_1 + 0x250);
    local_30 = *(int *)(param_1 + 0x254);
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    iVar2 = FUN_0040c770((*(double *)(lVar1 + 0x40) * *(double *)(param_1 + 0x268)) / 2.0);
    iVar3 = FUN_0040c770((*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) *
                         *(double *)(param_1 + 0x268)) / 2.0);
    lVar6 = FUN_0040c770(*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) *
                         *(double *)(param_1 + 0x268));
    iVar4 = FUN_0040c770((*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) *
                         *(double *)(param_1 + 0x270)) / 2.0);
    iVar5 = FUN_0040c770((*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) *
                         *(double *)(param_1 + 0x270)) / 2.0);
    lVar7 = FUN_0040c770(*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) *
                         *(double *)(param_1 + 0x270));
    if ((*(byte *)(lVar1 + 0x3d) & 1) != 0) {
      local_3c = local_3c - iVar2;
    }
    if ((*(byte *)(lVar1 + 0x3d) & 2) != 0) {
      local_34 = local_34 + iVar3 + (int)(lVar6 % 2);
    }
    if ((*(byte *)(lVar1 + 0x3d) & 4) != 0) {
      local_38 = local_38 - iVar4;
    }
    if ((*(byte *)(lVar1 + 0x3d) & 8) != 0) {
      local_30 = local_30 + iVar5 + (int)(lVar7 % 2);
    }
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))
              (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x288),local_3c,local_38,
               local_34,local_30,*(undefined8 *)(param_1 + 0x268),*(undefined8 *)(param_1 + 0x270));
  }
  return;
}

