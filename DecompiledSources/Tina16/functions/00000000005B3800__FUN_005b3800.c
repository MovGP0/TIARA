/* Ghidra address: 005b3800 */
/* Ghidra symbol: FUN_005b3800 */


void FUN_005b3800(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  wchar_t *local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_38 = 0;
  local_20[0] = 0;
  cVar1 = FUN_005b37f0(param_1);
  if (cVar1 == '\0') {
    FUN_0041ddd0(local_20,PTR_PTR_02003380);
    local_30 = L"Actions";
    local_28 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_005ae658,1,local_20[0],&local_30,0);
    FUN_004134c0(uVar2);
  }
  if (param_2 == 0) {
    FUN_0041ddd0(&local_38,PTR_PTR_02003380);
    local_30 = L"Action";
    local_28 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_005ae658,1,local_38,&local_30,0);
    FUN_004134c0(uVar2);
  }
  local_10 = param_2;
  FUN_00597e50(*(longlong *)(param_1 + 0x78) + 8,&local_10);
  *(longlong *)(param_2 + 0xc0) = param_1;
  FUN_004d26c0(param_2,param_1);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

