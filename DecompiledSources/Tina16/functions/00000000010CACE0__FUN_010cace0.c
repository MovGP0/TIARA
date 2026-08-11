/* Ghidra address: 010cace0 */
/* Ghidra symbol: FUN_010cace0 */


undefined8 FUN_010cace0(longlong param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  short sVar5;
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
    sVar5 = *(short *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
    while( true ) {
      cVar2 = FUN_010c9e40(param_1,sVar5);
      if (((cVar2 == '\0') && (sVar5 != 0x2b)) && (sVar5 != 0x2d)) {
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
      FUN_00416780(local_30,sVar5);
      FUN_00416ad0(local_20,local_30[0]);
      iVar4 = 0;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
      }
      if (*(int *)(param_1 + 8) < iVar4) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        sVar5 = *(short *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2)
        ;
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
  }
  if ((param_3 != '\0') && (local_20[0] == 0)) {
    FUN_0043f750(&local_40,*(undefined4 *)(param_1 + 0x10));
    FUN_00416ba0(&local_38,L"Int number expected, lineno: ",local_40);
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_38);
    FUN_004134c0(uVar3);
  }
  FUN_0043ea00(param_2,local_20[0]);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return param_2;
}

