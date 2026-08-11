/* Ghidra address: 01cc5ec0 */
/* Ghidra symbol: FUN_01cc5ec0 */


undefined8 FUN_01cc5ec0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38;
  undefined8 local_30;
  
  local_res10[0] = param_2;
  local_39 = param_3;
  local_38 = param_1;
  FUN_00414610(param_2);
  local_30 = 0;
  lVar1 = *(longlong *)(local_38 + 8);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_01d347d0(lVar1,iVar4);
      cVar2 = FUN_01cc5cf0(auStack_68,uVar3,local_39);
      if (cVar2 != '\0') {
        local_30 = FUN_01d347d0(lVar1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(local_res10);
  return local_30;
}

