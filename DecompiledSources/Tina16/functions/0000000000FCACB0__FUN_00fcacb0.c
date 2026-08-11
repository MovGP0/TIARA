/* Ghidra address: 00fcacb0 */
/* Ghidra symbol: FUN_00fcacb0 */


void FUN_00fcacb0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  double local_38;
  double local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  local_20[0] = 0;
  local_28 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    if (iVar1 != 2) {
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
      (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x700),1);
      if (*(int *)(param_1 + 0x848) == 9) {
        FUN_00fcb2e0(param_1,param_2);
      }
      if (*(int *)(param_1 + 0x848) == 8) {
        FUN_00fcb990(param_1,param_2);
      }
      goto code_r0x00fcaf57;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x700),0);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  if (iVar1 == 0) {
    *(double *)(param_1 + 0x828) = *(double *)(param_1 + 0xce8) / 6.0;
    *(double *)(param_1 + 0x820) = *(double *)(param_1 + 0xce8) / 6.0;
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x818) = 1;
      *(double *)(param_1 + 0x828) = *(double *)(param_1 + 0xce8) / 32.0;
      *(double *)(param_1 + 0x820) = *(double *)(param_1 + 0xce8) / 32.0;
    }
  }
  FUN_00414480(local_20);
  lVar2 = FUN_0040c840(*(double *)(param_1 + 0x828) + 0.5);
  local_30 = (double)lVar2;
  FUN_00448450(local_20,local_30,PTR_DAT_02004830);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(&local_28);
  lVar2 = FUN_0040c840(*(double *)(param_1 + 0x820) + 0.5);
  local_38 = (double)lVar2;
  FUN_00448450(&local_28,local_38,PTR_DAT_02004830);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_28);
  FUN_00414480(&local_28);
code_r0x00fcaf57:
  FUN_00414560(&local_28,2);
  return;
}

