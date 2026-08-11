/* Ghidra address: 00b1a9a0 */
/* Ghidra symbol: FUN_00b1a9a0 */


undefined8 FUN_00b1a9a0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_40;
  undefined8 local_30;
  
  local_30 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_40 = 0;
  uVar3 = FUN_00414df0(param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = *(undefined4 *)(*param_2 + -4);
  }
  uVar1 = FUN_00b1a7a0(param_1,uVar3,uVar1);
  lVar4 = FUN_004aeac0(param_1[1],uVar1);
  if (lVar4 != 0) {
    iVar6 = *(int *)(lVar4 + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar3 = FUN_004aeac0(lVar4,iVar5);
        (**(code **)(*param_1 + 8))(param_1,uVar3,&local_30);
        iVar2 = FUN_00415a60(*param_2,local_30);
        if (iVar2 == 0) {
          local_40 = FUN_004aeac0(lVar4,iVar5);
          *(undefined1 *)(param_1 + 5) = 1;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_004144d0(&local_30);
  return local_40;
}

