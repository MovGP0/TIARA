/* Ghidra address: 007299b0 */
/* Ghidra symbol: FUN_007299b0 */


void FUN_007299b0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  if (param_2 != *(int *)(param_1 + 3)) {
    if (*(int *)((longlong)param_1 + 0x14) < param_2) {
      FUN_0041ddd0(&local_10,PTR_PTR_02002958);
      FUN_00410ae0(*param_1,&local_28);
      local_20 = local_28;
      local_18 = 0x11;
      uVar2 = FUN_0044d530(&PTR_FUN_00472870,1,local_10,&local_20,0);
      FUN_004134c0(uVar2);
    }
    *(int *)(param_1 + 3) = param_2;
    lVar1 = *(longlong *)(param_1[1] + 0xd8);
    if ((lVar1 != 0) && ((*(uint *)(param_1[1] + 200) & 0x400) == 0)) {
      thunk_FUN_041b2403(lVar1,0x469,0,
                         CONCAT22(*(undefined2 *)((longlong)param_1 + 0x14),
                                  *(undefined2 *)(param_1 + 3)));
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

