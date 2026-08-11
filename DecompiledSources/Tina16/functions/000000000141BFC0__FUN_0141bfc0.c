/* Ghidra address: 0141bfc0 */
/* Ghidra symbol: FUN_0141bfc0 */


void FUN_0141bfc0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  cVar1 = FUN_0141c2f0(param_1);
  if (cVar1 != '\0') {
    FUN_00414480(param_1 + 0x6f8);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4e0);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x6f0),&local_30,0,iVar4);
        FUN_0043ea00(&local_20,local_30);
        FUN_0084e320(*(undefined8 *)(param_1 + 0x6f0),&local_38,1,iVar4);
        FUN_0043ea00(&local_28,local_38);
        if ((local_20 != 0) && (local_28 != 0)) {
          iVar2 = FUN_004170c0(&DAT_0141c228,local_28,1);
          if ((iVar2 < 1) && (iVar2 = FUN_004170c0(&DAT_0141c238,local_28,1), iVar2 < 1)) {
            FUN_00416cd0(param_1 + 0x6f8,5,*(undefined8 *)(param_1 + 0x6f8),local_20,&LAB_0141c248,
                         local_28,&DAT_0141c238);
          }
          else {
            FUN_00416cd0(&local_48,3,local_20,&LAB_0141c248,local_28);
            FUN_0043eca0(&local_40,local_48,0x22);
            FUN_00416cd0(param_1 + 0x6f8,3,*(undefined8 *)(param_1 + 0x6f8),local_40,&DAT_0141c238);
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (*(longlong *)(param_1 + 0x6f8) != 0) {
      uVar3 = 0;
      if (*(longlong *)(param_1 + 0x6f8) != 0) {
        uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x6f8) + -4);
      }
      FUN_00416e20(param_1 + 0x6f8,uVar3,1);
    }
  }
  FUN_00414560(&local_48,6);
  return;
}

