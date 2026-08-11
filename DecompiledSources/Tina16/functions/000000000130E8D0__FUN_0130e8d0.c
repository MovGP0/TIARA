/* Ghidra address: 0130e8d0 */
/* Ghidra symbol: FUN_0130e8d0 */


undefined8 FUN_0130e8d0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (param_2 == 2) {
    uVar1 = FUN_013021e0(*(undefined8 *)PTR_DAT_02002f98);
    FUN_012dd160(*(undefined8 *)(param_1 + 0x980),local_20,L"PARAMETER_UNIT",0);
    local_30 = FUN_012e0e20(uVar1,param_3,local_20[0]);
  }
  else {
    uVar1 = FUN_013021e0(*(undefined8 *)PTR_DAT_02002f98);
    FUN_012dd160(*(undefined8 *)(param_1 + 0x980),&local_28,L"PARAMETER_UNIT",
                 *(undefined4 *)(param_1 + 0x978));
    local_30 = FUN_012e0e20(uVar1,param_3,local_28);
  }
  FUN_00414560(&local_28,2);
  return local_30;
}

