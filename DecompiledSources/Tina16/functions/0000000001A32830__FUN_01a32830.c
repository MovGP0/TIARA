/* Ghidra address: 01a32830 */
/* Ghidra symbol: FUN_01a32830 */


undefined8 FUN_01a32830(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  uVar1 = FUN_00f309b0(&LAB_00f23b78,1);
  if (*(int *)(param_1 + 0x38) == 1) {
    uVar2 = FUN_00f2f8e0(&LAB_00f22f08,1,1);
    FUN_00f30e70(uVar1,L"mode",uVar2);
    uVar2 = FUN_00f2f680(&LAB_00f22f08,1,*(undefined8 *)(param_1 + 0x40));
    FUN_00f30e70(uVar1,L"AbsV",uVar2);
    uVar2 = FUN_00f2f680(&LAB_00f22f08,1,*(undefined8 *)(param_1 + 0x48));
    FUN_00f30e70(uVar1,L"Phase",uVar2);
    uVar2 = FUN_00f2f680(&LAB_00f22f08,1,*(undefined8 *)(param_1 + 0x50));
    FUN_00f30e70(uVar1,L"Freq",uVar2);
    FUN_00b8fd60(local_40,*(undefined8 *)(param_1 + 0x50),*PTR_DAT_02005310,0,1);
    uVar2 = FUN_00f2e9d0(&LAB_00f22a90,1,local_40[0]);
    FUN_00f30e70(uVar1,L"FreqStr",uVar2);
  }
  else {
    uVar2 = FUN_00f2f8e0(&LAB_00f22f08,1,*(int *)(param_1 + 0x38));
    FUN_00f30e70(uVar1,L"mode",uVar2);
  }
  FUN_00414480(local_40);
  FUN_00414560(&local_30,3);
  return uVar1;
}

