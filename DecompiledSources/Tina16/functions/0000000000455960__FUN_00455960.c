/* Ghidra address: 00455960 */
/* Ghidra symbol: FUN_00455960 */


void FUN_00455960(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  wchar_t *local_40;
  undefined1 local_38;
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  undefined4 local_c;
  
  local_30 = auStack_78;
  puVar1 = auStack_78;
  if (param_2 < 0) {
    local_40 = L"Value";
    local_38 = 0x11;
    local_58 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_40);
    FUN_004134c0(uVar2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (*(int *)(param_1 + 0x14) < param_2) {
    local_40 = (wchar_t *)CONCAT44(local_40._4_4_,param_2);
    local_38 = 0;
    local_58 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02003a10,&local_40);
    FUN_004134c0(uVar2);
  }
  local_c = *(undefined4 *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = param_2;
  local_20 = *(longlong *)(param_1 + 8);
  local_24 = 0;
  if (local_20 != 0) {
    local_24 = *(int *)(local_20 + -4);
  }
  if (local_24 < param_2) {
    FUN_00454310(param_1);
  }
  return;
}

