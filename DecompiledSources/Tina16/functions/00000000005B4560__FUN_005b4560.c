/* Ghidra address: 005b4560 */
/* Ghidra symbol: FUN_005b4560 */


void FUN_005b4560(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_58;
  wchar_t *local_50;
  undefined1 local_48;
  undefined8 local_40;
  code *local_38;
  longlong local_30;
  
  local_58 = 0;
  local_40 = 0;
  local_38 = (code *)*param_2;
  local_30 = param_2[1];
  cVar2 = FUN_005b37f0(param_1);
  if (cVar2 == '\0') {
    FUN_0041ddd0(&local_40,PTR_PTR_02003380);
    local_50 = L"Actions";
    local_48 = 0x11;
    uVar3 = FUN_0044d530(&PTR_FUN_005ae658,1,local_40,&local_50,0);
    FUN_004134c0(uVar3);
  }
  if (local_38 == (code *)0x0) {
    FUN_0041ddd0(&local_58,PTR_PTR_02003380);
    local_50 = L"Proc";
    local_48 = 0x11;
    uVar3 = FUN_0044d530(&PTR_FUN_005ae658,1,local_58,&local_50,0);
    FUN_004134c0(uVar3);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 8) + (longlong)iVar4 * 8);
      if (*(longlong *)(lVar1 + 8) == param_3) {
        (*local_38)(local_30,lVar1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_40);
  return;
}

