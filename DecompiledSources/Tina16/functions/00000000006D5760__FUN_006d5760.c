/* Ghidra address: 006d5760 */
/* Ghidra symbol: FUN_006d5760 */


void FUN_006d5760(undefined8 *param_1,short param_2)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  if (*(short *)(param_1 + 0x9a) != param_2) {
    if (param_2 < 0) {
      FUN_0041ddd0(&local_10,PTR_PTR_02002958);
      FUN_00410ae0(*param_1,&local_28);
      local_20 = local_28;
      local_18 = 0x11;
      uVar2 = FUN_0044d530(&PTR_FUN_00472870,1,local_10,&local_20,0);
      FUN_004134c0(uVar2);
    }
    sVar1 = *(short *)(param_1 + 0x9a);
    *(short *)(param_1 + 0x9a) = param_2;
    if ((sVar1 == 0) || (param_2 == 0)) {
      FUN_00655b90(param_1);
    }
    else {
      FUN_006d58e0(param_1);
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

