/* Ghidra address: 00c39310 */
/* Ghidra symbol: FUN_00c39310 */


void FUN_00c39310(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined1 local_28;
  int local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 != *(int *)(param_1 + 0x318)) {
    if ((*(int *)(param_1 + 0x31c) < param_2) && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
      FUN_0041ddd0(&local_10,PTR_PTR_02002fe0);
      local_30[0] = 0x80000001;
      local_28 = 0;
      local_20 = *(int *)(param_1 + 0x31c) + -1;
      local_18 = 0;
      uVar1 = FUN_0044d530(&PTR_FUN_00472870,1,local_10,local_30,1);
      FUN_004134c0(uVar1);
    }
    *(int *)(param_1 + 0x318) = param_2;
    if (*(int *)(param_1 + 800) < param_2) {
      *(int *)(param_1 + 800) = param_2;
    }
    FUN_0064e770(param_1);
  }
  FUN_00414480(&local_10);
  return;
}

