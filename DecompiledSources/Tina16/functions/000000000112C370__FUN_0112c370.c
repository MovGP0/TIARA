/* Ghidra address: 0112c370 */
/* Ghidra symbol: FUN_0112c370 */


void FUN_0112c370(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  iVar2 = (uint)*param_1 + (uint)param_1[1] + (uint)param_1[2];
  if (iVar2 + (uint)param_1[3] + (uint)param_1[4] + (uint)param_1[5] == 0) goto code_r0x0112c4aa;
  if (iVar2 != 0) {
    if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) && (param_1[1] < 0xd)) {
      uVar1 = FUN_005bb9e0(*param_1,param_1[1]);
      if (param_1[2] <= uVar1) goto LAB_0112c442;
    }
    FUN_0041ddd0(&local_10,PTR_PTR_020058d8);
    uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,local_10);
    FUN_004134c0(uVar3);
  }
LAB_0112c442:
  if (((uint)param_1[3] + (uint)param_1[4] + (uint)param_1[5] != 0) &&
     (((0x17 < param_1[3] || (0x3b < param_1[5])) || (0x3b < param_1[4])))) {
    FUN_0041ddd0(&local_18,PTR_PTR_020058d8);
    uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,local_18);
    FUN_004134c0(uVar3);
  }
code_r0x0112c4aa:
  FUN_00414560(&local_18,2);
  return;
}

