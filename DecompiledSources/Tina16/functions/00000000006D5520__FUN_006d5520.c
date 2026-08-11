/* Ghidra address: 006d5520 */
/* Ghidra symbol: FUN_006d5520 */


void FUN_006d5520(undefined8 *param_1,short param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  if (*(short *)((longlong)param_1 + 0x4d2) != param_2) {
    if (param_2 < 0) {
      FUN_0041ddd0(&local_10,PTR_PTR_02002958);
      FUN_00410ae0(*param_1,&local_28);
      local_20 = local_28;
      local_18 = 0x11;
      uVar1 = FUN_0044d530(&PTR_FUN_00472870,1,local_10,&local_20,0);
      FUN_004134c0(uVar1);
    }
    *(short *)((longlong)param_1 + 0x4d2) = param_2;
    FUN_006d58e0();
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

