/* Ghidra address: 01a33010 */
/* Ghidra symbol: FUN_01a33010 */


undefined8 FUN_01a33010(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  uVar1 = FUN_00f33100(&LAB_00f256b8,1);
  FUN_00f33660(uVar1,*(undefined4 *)(param_1 + 8));
  FUN_00f33660(uVar1,*(undefined4 *)(param_1 + 0xc));
  FUN_00414b50(&local_38,L"False");
  uVar2 = FUN_01a32c20(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_00f309b0(&LAB_00f23b78,1);
  FUN_00f30e70(uVar3,L"nodes",uVar1);
  FUN_00f30e70(uVar3,L"prop",uVar2);
  if (param_2 != 0) {
    uVar1 = FUN_00f2f8e0(&LAB_00f22f08,1,param_2);
    FUN_00f30e70(uVar3,&DAT_01a33180,uVar1);
  }
  FUN_00414560(&local_38,2);
  return uVar3;
}

