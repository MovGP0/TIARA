/* Ghidra address: 016cedb0 */
/* Ghidra symbol: FUN_016cedb0 */


void FUN_016cedb0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  (**(code **)(*param_2 + 0x90))(param_2);
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x9b8) != 0)) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x9b8) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x9b8),iVar2);
        FUN_016bca60(uVar1,local_30);
        (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa58) + 0x28))();
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0xa58) + 0x18))
                  (*(longlong **)(param_1 + 0xa58),&local_38,iVar2);
        (**(code **)(*param_2 + 0x78))(param_2,local_38);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa60) + 0x28))();
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0xa60) + 0x18))
                  (*(longlong **)(param_1 + 0xa60),&local_40,iVar2);
        (**(code **)(*param_2 + 0x78))(param_2,local_40);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_40,3);
  return;
}

