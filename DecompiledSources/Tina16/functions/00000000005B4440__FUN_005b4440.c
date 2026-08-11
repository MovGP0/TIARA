/* Ghidra address: 005b4440 */
/* Ghidra symbol: FUN_005b4440 */


void FUN_005b4440(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  wchar_t *local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar3 = FUN_005b37f0(param_1);
  if (cVar3 == '\0') {
    FUN_0041ddd0(local_20,PTR_PTR_02003380);
    local_30 = L"Actions";
    local_28 = 0x11;
    uVar4 = FUN_0044d530(&PTR_FUN_005ae658,1,local_20[0],&local_30,0);
    FUN_004134c0(uVar4);
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (*(uint *)(lVar1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_3);
  FUN_00414480(local_20);
  return;
}

