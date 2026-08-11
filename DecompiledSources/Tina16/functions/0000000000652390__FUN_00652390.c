/* Ghidra address: 00652390 */
/* Ghidra symbol: FUN_00652390 */


undefined8 FUN_00652390(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_20;
  
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_1 + 0x78);
  }
  if (param_3 == 0) {
    FUN_006482f0(PTR_PTR_02004550,param_1);
  }
  local_20._0_4_ = (int)*param_2;
  local_20._4_4_ = (int)((ulonglong)*param_2 >> 0x20);
  local_20 = CONCAT44(local_20._4_4_ + *(int *)(param_1 + 0x94),
                      (int)local_20 + *(int *)(param_1 + 0x90));
  lVar1 = *(longlong *)(param_1 + 0x78);
  while ((lVar2 = lVar1, lVar2 != 0 && (lVar2 != param_3))) {
    lVar1 = *(longlong *)(lVar2 + 0x78);
    if (lVar1 != 0) {
      local_20 = CONCAT44(local_20._4_4_ + *(int *)(lVar2 + 0x94),
                          (int)local_20 + *(int *)(lVar2 + 0x90));
    }
  }
  if (lVar2 == 0) {
    FUN_006482f0(PTR_PTR_02002ee0,param_1);
  }
  return local_20;
}

