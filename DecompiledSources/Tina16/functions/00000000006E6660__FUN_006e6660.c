/* Ghidra address: 006e6660 */
/* Ghidra symbol: FUN_006e6660 */


void FUN_006e6660(undefined8 *param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  if (param_3 < (int)param_2) {
    FUN_0041ddd0(&local_10,PTR_PTR_02002958);
    FUN_00410ae0(*param_1,&local_28);
    local_20 = local_28;
    local_18 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_00472870,1,local_10,&local_20,0);
    FUN_004134c0(uVar2);
  }
  if ((*(char *)(param_1 + 0x92) == '\0') &&
     (((((int)param_2 < 0 || (0xffff < (int)param_2)) || (param_3 < 0)) || (0xffff < param_3)))) {
    FUN_006e6090();
  }
  if ((*(uint *)((longlong)param_1 + 0x494) != param_2) || (*(int *)(param_1 + 0x93) != param_3)) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x92) == '\0') {
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar2,0x401,0,param_2 & 0xffff | param_3 << 0x10);
      }
      else {
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar2,0x406,(longlong)(int)param_2,(longlong)param_3);
      }
      if ((int)param_2 < *(int *)((longlong)param_1 + 0x494)) {
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar2,0x402,(longlong)(int)param_2,0);
      }
    }
    *(uint *)((longlong)param_1 + 0x494) = param_2;
    *(int *)(param_1 + 0x93) = param_3;
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

