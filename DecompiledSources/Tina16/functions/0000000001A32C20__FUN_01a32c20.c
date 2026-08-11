/* Ghidra address: 01a32c20 */
/* Ghidra symbol: FUN_01a32c20 */


undefined8 FUN_01a32c20(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_00414b50(&local_30,L"<CompNil>");
  }
  else {
    FUN_017ff4f0(*(longlong *)(param_1 + 0x30),&local_30);
  }
  uVar2 = FUN_00f309b0(&LAB_00f23b78,1);
  uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(param_1 + 0x18));
  FUN_00f30e70(uVar2,L"label",uVar3);
  uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(param_1 + 0x20));
  FUN_00f30e70(uVar2,L"match_label",uVar3);
  uVar3 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(param_1 + 0x28));
  FUN_00f30e70(uVar2,L"CompId",uVar3);
  uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,local_30);
  FUN_00f30e70(uVar2,L"UniqueID",uVar3);
  uVar3 = FUN_00f2f680(&LAB_00f22f08,1,*(undefined8 *)(param_1 + 8));
  FUN_00f30e70(uVar2,L"value",uVar3);
  cVar1 = FUN_01a32a70(*(undefined4 *)(param_1 + 0x28),1);
  if (cVar1 == '\0') {
    uVar3 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(param_1 + 0x2c));
    FUN_00f30e70(uVar2,L"flags",uVar3);
  }
  else {
    uVar3 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(param_1 + 0x2c));
    FUN_00f30e70(uVar2,L"flags",uVar3);
    uVar3 = FUN_01a32830(param_1);
    FUN_00f30e70(uVar2,L"ac_gen",uVar3);
  }
  FUN_00414560(&local_30,3);
  return uVar2;
}

