/* Ghidra address: 00ad4c30 */
/* Ghidra symbol: FUN_00ad4c30 */


void FUN_00ad4c30(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_48 = param_2;
  FUN_00ad4a50(auStack_68);
  FUN_00414480(&local_38);
  while ((cVar1 = *(char *)(param_1 + 0x44), cVar1 != -0x3f && (cVar1 != '\x04'))) {
    if (cVar1 == '\x03') {
      FUN_00416ba0(&local_40,local_38,&LAB_00ad4dc8);
      FUN_00accba0(local_48,local_40);
      FUN_00414480(&local_38);
    }
    else {
      iVar2 = 0;
      if (local_30 != 0) {
        iVar2 = *(int *)(local_30 + -4);
      }
      if (0 < iVar2) {
        iVar5 = 0;
        if (local_38 != 0) {
          iVar5 = *(int *)(local_38 + -4);
        }
        FUN_004169f0(&local_38,iVar5 + iVar2);
        uVar3 = FUN_00416740(local_30);
        lVar4 = FUN_00414de0(&local_38);
        FUN_00409a70(uVar3,lVar4 + -2 + (longlong)(iVar5 + 1) * 2,(longlong)(iVar2 * 2));
      }
    }
    FUN_00ad4a50(auStack_68);
  }
  while ((*(short *)(param_1 + 0x20) != 0 && (*(short *)(param_1 + 0x20) != 0x3e))) {
    FUN_00ad1170(param_1);
  }
  FUN_00ad1170(param_1);
  iVar2 = 0;
  if (local_38 != 0) {
    iVar2 = *(int *)(local_38 + -4);
  }
  if (0 < iVar2) {
    FUN_00accba0(local_48,local_38);
  }
  (**(code **)(*local_48 + 0x178))(local_48);
  FUN_00414560(&local_40,3);
  return;
}

