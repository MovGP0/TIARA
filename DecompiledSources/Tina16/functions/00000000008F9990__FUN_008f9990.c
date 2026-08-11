/* Ghidra address: 008f9990 */
/* Ghidra symbol: FUN_008f9990 */


void FUN_008f9990(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if ((param_2 & 1) != 0) {
    FUN_0041ddd0(local_20,PTR_PTR_02001f20);
    uVar2 = FUN_0044d490(&PTR_FUN_00471608,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  if (*(int *)((longlong)param_1 + 0x14) < (int)param_2) {
    uVar1 = param_2 >> 2;
    if (uVar1 < 8) {
      uVar1 = 8;
    }
    (**(code **)(*param_1 + 0x58))(param_1,param_2 + uVar1 & 0xfffffffc);
  }
  else if ((int)param_2 < 0) {
    FUN_0041ddd0(&local_28,PTR_PTR_02004bb8);
    uVar2 = FUN_0044d490(&PTR_FUN_00471608,1,local_28);
    FUN_004134c0(uVar2);
  }
  *(uint *)(param_1 + 2) = param_2;
  if ((int)param_2 < (int)param_1[3]) {
    *(uint *)(param_1 + 3) = param_2;
  }
  FUN_00414560(&local_28,2);
  return;
}

