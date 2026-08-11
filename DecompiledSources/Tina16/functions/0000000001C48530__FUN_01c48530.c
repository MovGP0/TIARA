/* Ghidra address: 01c48530 */
/* Ghidra symbol: FUN_01c48530 */


void FUN_01c48530(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x448);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4c0);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0) + -1;
  if (iVar2 <= iVar3) {
    iVar3 = (iVar3 - iVar2) + 1;
    do {
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_48,0,iVar2);
      FUN_0043ea00(&local_40,local_48);
      FUN_00416cd0(&local_28,3,&DAT_01c48748,local_40,&DAT_01c48748);
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_50,1,iVar2);
      FUN_0043ea00(&local_30,local_50);
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_58,2,iVar2);
      FUN_0043ea00(&local_38,local_58);
      if (((local_28 != 0) && (local_30 != 0)) && (local_38 != 0)) {
        FUN_00416cd0(&local_20,5,local_28,&LAB_01c48758,local_30,&LAB_01c48758,local_38);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x448);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_58,8);
  return;
}

