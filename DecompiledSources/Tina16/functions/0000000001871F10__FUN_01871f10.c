/* Ghidra address: 01871f10 */
/* Ghidra symbol: FUN_01871f10 */


undefined1
FUN_01871f10(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined2 param_5,longlong param_6)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = (longlong *)0x0;
  local_38 = 0;
  uVar2 = FUN_0197c040(param_1,param_2,param_3,param_4,param_5,param_6);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = FUN_00423990(*(int *)(lVar1 + 0x248) +
                       (*(int *)(lVar1 + 0x250) - *(int *)(lVar1 + 0x248)) / 2 + -8,
                       *(int *)(lVar1 + 0x24c) +
                       (*(int *)(lVar1 + 0x254) - *(int *)(lVar1 + 0x24c)) / 2 + -8);
  local_28._0_4_ = (int)uVar4;
  iVar5 = (int)local_28 + 0x10;
  local_28._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
  iVar6 = local_28._4_4_ + 0x10;
  local_28 = uVar4;
  local_20 = FUN_00423990(iVar5,iVar6);
  if (*(char *)(param_1 + 0x70) != '\0') {
    local_40 = FUN_00423990(param_2,param_3);
    cVar3 = FUN_004231e0(&local_28,&local_40);
    if (cVar3 != '\0') {
      uVar4 = FUN_0041b800(&local_30);
      cVar3 = FUN_00452370(*(undefined8 *)(param_1 + 8),&LAB_018720b8,uVar4);
      if (cVar3 != '\0') {
        (**(code **)(*local_30 + 0x20))(local_30,&local_38,0);
        if (local_38 != 0) {
          uVar4 = FUN_01872d10();
          FUN_01873140(uVar4,&local_38,local_30);
        }
        *(undefined1 *)(param_6 + 8) = 1;
      }
    }
  }
  FUN_00414480(&local_38);
  FUN_0041b800(&local_30);
  return uVar2;
}

