/* Ghidra address: 017e8320 */
/* Ghidra symbol: FUN_017e8320 */


void FUN_017e8320(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x350) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),&local_30,param_3);
    if (local_30 != 0) {
      FUN_00414480(&local_38);
      iVar3 = 1;
      iVar2 = 0;
      if (local_30 != 0) {
        iVar2 = *(int *)(local_30 + -4);
      }
      do {
        FUN_00416780(&local_40,*(undefined2 *)(local_30 + -2 + (longlong)iVar3 * 2));
        FUN_00416ad0(&local_38,local_40);
        iVar3 = iVar3 + 1;
        if (iVar2 < iVar3) break;
      } while (*(short *)(local_30 + -2 + (longlong)iVar3 * 2) != 0x3d);
      FUN_00416cd0(&local_38,5,local_38,&DAT_017e863c,&DAT_017e864c,local_res10[0],&DAT_017e865c);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                (*(longlong **)(param_1 + 0x18),param_3,local_38);
    }
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x340) + 0x4e8);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,param_3);
    if (local_30 != 0) {
      FUN_00414480(&local_38);
      iVar3 = 1;
      iVar2 = 0;
      if (local_30 != 0) {
        iVar2 = *(int *)(local_30 + -4);
      }
      do {
        FUN_00416780(&local_48,*(undefined2 *)(local_30 + -2 + (longlong)iVar3 * 2));
        FUN_00416ad0(&local_38,local_48);
        iVar3 = iVar3 + 1;
        if (iVar2 < iVar3) break;
      } while (*(short *)(local_30 + -2 + (longlong)iVar3 * 2) != 0x3d);
      FUN_00416cd0(&local_38,5,local_38,&DAT_017e863c,&DAT_017e864c,local_res10[0],&DAT_017e865c);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x340) + 0x4e8);
      (**(code **)(*plVar1 + 0x40))(plVar1,param_3,local_38);
      iVar5 = 0;
      iVar2 = FUN_010d1220();
      iVar3 = 0;
      if (-1 < iVar2 + -1) {
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x340) + 0x4e8);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_50,iVar3);
          iVar4 = 0;
          if (local_50 != 0) {
            iVar4 = *(int *)(local_50 + -4);
          }
          iVar5 = iVar5 + iVar4 + 2;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_00c08950(*(undefined8 *)(param_1 + 0x340),iVar5);
      FUN_00c0fb50(*(undefined8 *)(param_1 + 0x340),0);
    }
  }
  FUN_00414560(&local_50,5);
  FUN_00414480(local_res10);
  return;
}

