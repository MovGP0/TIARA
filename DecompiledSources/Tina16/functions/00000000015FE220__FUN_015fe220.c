/* Ghidra address: 015fe220 */
/* Ghidra symbol: FUN_015fe220 */


void FUN_015fe220(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  if (((param_3 != 0) && (*(longlong *)(param_3 + 0x710) != 0)) &&
     (*(char *)(param_3 + 0x7ba) == '\0')) {
    *(undefined1 *)(param_3 + 0x7ba) = 1;
    iVar5 = *(int *)(*(longlong *)(param_3 + 0x9b8) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar1 = FUN_004aeac0(*(undefined8 *)(param_3 + 0x9b8),iVar4);
        FUN_01565cf0(lVar1,&local_38);
        if (*(char *)(lVar1 + 0x38) != '\0') {
          uVar2 = FUN_01565d40(lVar1);
          local_50 = *(undefined8 *)(param_3 + 0x710);
          FUN_01d04b50(uVar2,&local_50);
          uVar3 = FUN_0198d430(param_1);
          FUN_01d04aa0(uVar2,uVar3);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined1 *)(param_3 + 0x7ba) = 0;
  }
  FUN_00414560(&local_48,4);
  return;
}

