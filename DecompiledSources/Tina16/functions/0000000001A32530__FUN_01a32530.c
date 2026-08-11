/* Ghidra address: 01a32530 */
/* Ghidra symbol: FUN_01a32530 */


undefined8 FUN_01a32530(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  double local_40;
  double local_38;
  undefined8 uStack_30;
  
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50 = *param_1;
  uStack_48 = param_1[1];
  local_40 = (double)param_1[2];
  local_38 = (double)param_1[3];
  uStack_30 = param_1[4];
  FUN_004179d0(&local_50,&DAT_01a30988);
  uVar1 = FUN_00f309b0(&LAB_00f23b78,1);
  uVar2 = FUN_00f2f8e0(&LAB_00f22f08,1,uStack_48._4_4_);
  FUN_00f30e70(uVar1,L"valid",uVar2);
  if (0.0 < local_40) {
    uVar2 = FUN_00f2f680(&LAB_00f22f08,1,local_40);
    FUN_00f30e70(uVar1,L"res_imp",uVar2);
  }
  if (local_38 != 0.0) {
    uVar2 = FUN_00f2f680(&LAB_00f22f08,1,local_38);
    FUN_00f30e70(uVar1,L"res_req",uVar2);
  }
  FUN_00414560(&local_78,5);
  FUN_00417740(&local_50,&DAT_01a30988);
  return uVar1;
}

