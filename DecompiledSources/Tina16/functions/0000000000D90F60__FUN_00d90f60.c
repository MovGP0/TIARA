/* Ghidra address: 00d90f60 */
/* Ghidra symbol: FUN_00d90f60 */


undefined8
FUN_00d90f60(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
            longlong *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  char local_34;
  int local_30;
  
  uVar1 = 0;
  local_34 = (char)*param_3;
  if (local_34 == '\x1f') {
    local_30 = (int)((ulonglong)*param_3 >> 0x20);
    if (local_30 == 0x4d) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x88))
                        (*(longlong **)(param_1 + 0x180),0,param_4,L"default");
      *param_5 = lVar2;
      if (*param_5 == 0) {
        lVar2 = thunk_FUN_03976db5(*param_4,param_4[1],param_4[2],param_4[3]);
        *param_5 = lVar2;
      }
      uVar1 = 1;
    }
    else if (local_30 == 0x4e) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x88))
                        (*(longlong **)(param_1 + 0x180),6,param_4,L"default");
      *param_5 = lVar2;
      if (*param_5 == 0) {
        lVar2 = thunk_FUN_03976db5(*param_4,param_4[1],param_4[2],param_4[3]);
        *param_5 = lVar2;
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

