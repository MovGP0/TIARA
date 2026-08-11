/* Ghidra address: 015ebd50 */
/* Ghidra symbol: FUN_015ebd50 */


void FUN_015ebd50(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined1 *local_40;
  undefined8 local_30;
  int local_28;
  char local_21;
  
  local_40 = auStack_78;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_21 = '\0';
  local_58 = L"sc_model";
  FUN_00416cd0(param_1 + 0x20,3,*(undefined8 *)(param_2 + 0x7a8),&DAT_015ebfc4);
  FUN_00440c30(*(undefined8 *)(param_1 + 0x20));
  FUN_0156a880(param_2);
  cVar1 = FUN_015eb7c0(param_1);
  if (cVar1 == '\0') {
    FUN_015ebc90(param_1);
  }
  else {
    FUN_015ebc30(param_1);
    local_58 = L"\\systemc_model.dll";
    FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x20),L"\\Debug");
    FUN_015e9d50(local_30);
    local_21 = '\x01';
    FUN_015ec240(param_1);
    (**(code **)PTR_DAT_02002750)(param_1 + 0x30);
    local_28 = (**(code **)PTR_DAT_02005958)
                         (*(undefined4 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if (local_28 != 0) {
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SystemC model execution: an error occured");
      FUN_004134c0(uVar2);
    }
    uVar2 = (**(code **)PTR_DAT_020037d8)
                      (*(undefined8 *)(param_1 + 0x30),param_1 + 0x4c,param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    FUN_015e9fc0(param_2,uVar2,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)PTR_DAT_020058d0)(*(longlong *)(param_1 + 0x30));
  }
  if (local_21 != '\0') {
    FUN_015e9d30();
  }
  FUN_015ebc30(param_1);
  FUN_00414480(&local_30);
  return;
}

