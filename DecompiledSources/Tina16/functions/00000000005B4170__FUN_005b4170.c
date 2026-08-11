/* Ghidra address: 005b4170 */
/* Ghidra symbol: FUN_005b4170 */


undefined1 FUN_005b4170(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  undefined1 local_19 [9];
  
  local_30[0] = 0;
  cVar1 = FUN_005b37f0(param_1);
  if (cVar1 == '\0') {
    FUN_0041ddd0(local_30,PTR_PTR_02003380);
    local_40 = L"Actions";
    local_38 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_005ae658,1,local_30[0],&local_40,0);
    FUN_004134c0(uVar2);
  }
  local_19[0] = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0x98),param_2,local_19);
  }
  FUN_00414480(local_30);
  return local_19[0];
}

