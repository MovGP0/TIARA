/* Ghidra address: 0135c7a0 */
/* Ghidra symbol: FUN_0135c7a0 */


void FUN_0135c7a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar3);
      if (*(char *)(lVar2 + 0xc) != '\0') {
        FUN_004b3cf0(*(undefined8 *)(param_1 + 8),&local_28,iVar3);
        FUN_004b5390(*(undefined8 *)(param_1 + 8),&local_30,iVar3);
        FUN_00416cd0(&local_20,5,L"SetNState(",local_28,&DAT_0135c92c,local_30,&LAB_0135c940);
        (**(code **)(*param_2 + 0x78))(param_2,local_20);
        FUN_004b3cf0(*(undefined8 *)(param_1 + 8),&local_38,iVar3);
        FUN_0135c3b0(param_1,local_38,iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_38,4);
  return;
}

