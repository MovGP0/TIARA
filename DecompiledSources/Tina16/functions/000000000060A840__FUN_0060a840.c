/* Ghidra address: 0060a840 */
/* Ghidra symbol: FUN_0060a840 */


void FUN_0060a840(longlong *param_1,short param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_90 [24];
  longlong local_78;
  undefined4 local_70;
  
  if ((param_2 != 2) || (param_3 == 0)) {
    FUN_005ffe20(PTR_PTR_02004180);
  }
  FUN_0060a440(param_1);
  FUN_0040d200(local_90,0x68,0);
  thunk_FUN_03d2c01a(param_3,0x68,local_90);
  if (local_78 == 0) {
    local_70 = 0;
  }
  FUN_00608f90(param_1,param_3,param_4,local_90);
  *(undefined1 *)(param_1[0xc] + 0x39) = 0;
  lVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  *(bool *)((longlong)param_1 + 0x3a) = lVar1 != 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

