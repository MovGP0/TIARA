/* Ghidra address: 01472630 */
/* Ghidra symbol: FUN_01472630 */


void FUN_01472630(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  if (*(char *)(param_1 + 0x740) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x90))(*(longlong **)(param_1 + 0x728));
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4c0);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0) + -1;
    if (iVar1 <= iVar2) {
      iVar2 = (iVar2 - iVar1) + 1;
      do {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_20,0,iVar1);
        if (local_20 != 0) {
          FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_28,1,iVar1);
          if (local_28 != 0) {
            FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_38,0,iVar1);
            FUN_0084e320(*(undefined8 *)(param_1 + 0x6b0),&local_40,1,iVar1);
            FUN_00416cd0(&local_30,3,local_38,&LAB_014727d8,local_40);
            (**(code **)(**(longlong **)(param_1 + 0x728) + 0x78))
                      (*(longlong **)(param_1 + 0x728),local_30);
          }
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    FUN_014727e0(param_1,param_2);
  }
  FUN_00414560(&local_40,5);
  return;
}

