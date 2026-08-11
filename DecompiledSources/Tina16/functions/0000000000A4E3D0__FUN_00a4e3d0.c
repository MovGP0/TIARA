/* Ghidra address: 00a4e3d0 */
/* Ghidra symbol: FUN_00a4e3d0 */


undefined8 FUN_00a4e3d0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  char local_45;
  longlong local_40;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  
  local_50 = auStack_78;
  local_28 = 0;
  local_34 = -1;
  FUN_00414480(&local_28);
  FUN_0043e600(&local_28,*param_2);
  local_45 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                       (*(longlong **)(param_1 + 8),local_28,&local_34);
  FUN_00414480(&local_28);
  if (local_45 != '\0') {
    local_1c = FUN_0040c770(((double)param_2[1] *
                            (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98)) / 72.0);
    local_1c = -local_1c;
    local_40 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                         (*(longlong **)(param_1 + 8),local_34);
    iVar2 = *(int *)(local_40 + 0x10);
    local_34 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_30 = FUN_004aeac0(local_40,local_34);
        cVar1 = FUN_00a4e380(auStack_78,local_30);
        if (cVar1 != '\0') goto LAB_00a4e4ef;
        local_34 = local_34 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  local_30 = 0;
LAB_00a4e4ef:
  FUN_00414480(&local_28);
  return local_30;
}

