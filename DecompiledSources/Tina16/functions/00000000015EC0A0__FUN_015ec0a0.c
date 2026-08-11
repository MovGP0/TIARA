/* Ghidra address: 015ec0a0 */
/* Ghidra symbol: FUN_015ec0a0 */


undefined1 FUN_015ec0a0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_30;
  undefined8 local_20;
  undefined1 local_12;
  undefined1 local_9;
  
  local_30 = auStack_68;
  local_20 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_00416ba0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x7a8),L"\\sc_model");
  FUN_00440c30(*(undefined8 *)(param_1 + 0x20));
  FUN_0156a880(param_2);
  local_12 = FUN_015eb7c0(param_1);
  cVar1 = FUN_015eb7c0(param_1);
  if (cVar1 == '\0') {
    FUN_015ebc90(param_1);
  }
  else {
    local_48 = L"\\systemc_model.dll";
    FUN_00416cd0(&local_20,3,*(undefined8 *)(param_1 + 0x20),L"\\Debug");
    FUN_015651e0(param_2,local_20);
    FUN_015ebc30(param_1);
  }
  local_9 = local_12;
  FUN_015ebc30(param_1);
  FUN_00414480(&local_20);
  return local_9;
}

