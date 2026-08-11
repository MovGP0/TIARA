/* Ghidra address: 010caad0 */
/* Ghidra symbol: FUN_010caad0 */


undefined8 FUN_010caad0(longlong param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414480();
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  if (*(int *)(param_1 + 8) <= iVar4) {
    uVar5 = *(undefined2 *)
             (*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
    while( true ) {
      cVar2 = FUN_01aa1060();
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        iVar4 = 0;
        if (*(longlong *)(param_1 + 0x18) != 0) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
        }
        bVar1 = *(int *)(param_1 + 8) <= iVar4;
      }
      if (!bVar1) break;
      FUN_00416780(local_30,uVar5);
      FUN_00416ad0(local_20,local_30[0]);
      iVar4 = 0;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
      }
      if (*(int *)(param_1 + 8) < iVar4) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        uVar5 = *(undefined2 *)
                 (*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
  }
  if ((param_3 != '\0') && (local_20[0] == 0)) {
    FUN_0043f750(&local_40,*(undefined4 *)(param_1 + 0x10));
    FUN_00416ba0(&local_38,L"Hex number expected, lineno: ",local_40);
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_38);
    FUN_004134c0(uVar3);
  }
  FUN_0043ea00(param_2,local_20[0]);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return param_2;
}

