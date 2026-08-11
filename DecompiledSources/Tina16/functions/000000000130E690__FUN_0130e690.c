/* Ghidra address: 0130e690 */
/* Ghidra symbol: FUN_0130e690 */


int FUN_0130e690(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong local_res10 [3];
  int local_38;
  undefined2 local_32;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_38 = -1;
  iVar2 = FUN_012dd0a0();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      iVar3 = FUN_004170c0(&DAT_0130e88c,local_res10[0],1);
      if ((iVar3 != 0) || (iVar3 = FUN_004170c0(&DAT_0130e89c,local_res10[0],1), iVar3 != 0)) {
        iVar3 = FUN_004170c0(&DAT_0130e88c,local_res10[0],1);
        if (iVar3 == 0) {
          iVar3 = FUN_004170c0(&DAT_0130e89c,local_res10[0],1);
          if (iVar3 != 0) {
            local_32 = 0x3a;
          }
        }
        else {
          local_32 = 0x5b;
        }
        FUN_0130e500(param_1,local_30,local_res10[0],local_32);
        FUN_00414b50(local_res10,local_30[0]);
      }
      FUN_012dd160(*(undefined8 *)(param_1 + 0x980),&local_20,L"PARAMETER_SYMBOL",iVar4);
      if (local_res10[0] == local_20) {
        bVar5 = true;
      }
      else if ((local_res10[0] == 0) || (local_20 == 0)) {
        bVar5 = false;
      }
      else {
        iVar3 = FUN_0043e420(local_res10[0],local_20);
        bVar5 = iVar3 == 0;
      }
      if ((bVar5) && (cVar1 = FUN_0130e660(param_1,iVar4), cVar1 == '\0')) {
        *(int *)(*(longlong *)(param_1 + 0x988) + (longlong)*(int *)(param_1 + 0x97c) * 4) = iVar4;
        *(int *)(param_1 + 0x97c) = *(int *)(param_1 + 0x97c) + 1;
        local_38 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_38;
}

