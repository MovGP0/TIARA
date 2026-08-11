/* Ghidra address: 00651a90 */
/* Ghidra symbol: FUN_00651a90 */


void FUN_00651a90(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar1 == '\0') goto code_r0x00651bed;
  if (param_3 == '\0') {
LAB_00651b0f:
    FUN_0064de00(param_1,*(undefined8 *)(param_2 + 0xd0));
  }
  else {
    FUN_0064dd90(param_1,local_30);
    if (local_30[0] == 0) goto LAB_00651b0f;
    FUN_0064dd90(param_1,&local_38);
    iVar2 = FUN_00416db0(local_38,param_1[2]);
    if (iVar2 == 0) goto LAB_00651b0f;
  }
  if (param_3 == '\0') {
LAB_00651b41:
    (**(code **)(*param_1 + 0x128))(param_1,*(undefined1 *)(param_2 + 0xd9));
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 == '\x01') goto LAB_00651b41;
  }
  if ((param_3 == '\0') || (param_1[0x1e] == 0)) {
    FUN_00414ad0(param_1 + 0x1e,*(undefined8 *)(param_2 + 0xf8));
  }
  if ((param_3 == '\0') || (*(char *)((longlong)param_1 + 0xa9) == '\x01')) {
    FUN_0064dbe0(param_1,*(undefined1 *)(param_2 + 0x100));
  }
  if ((param_3 == '\0') || (param_1[0x3f] == 0)) {
    param_1[0x3f] = *(longlong *)(param_2 + 0x98);
    param_1[0x40] = *(longlong *)(param_2 + 0xa0);
  }
code_r0x00651bed:
  FUN_00414560(&local_38,2);
  return;
}

