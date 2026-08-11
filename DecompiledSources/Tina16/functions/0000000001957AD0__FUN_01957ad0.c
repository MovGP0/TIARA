/* Ghidra address: 01957ad0 */
/* Ghidra symbol: FUN_01957ad0 */


undefined8 *
FUN_01957ad0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_00414480(param_2);
  lVar2 = 0;
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_01920448);
  if (cVar1 != '\0') {
    lVar2 = FUN_004113f0(param_3,&PTR_FUN_01920448);
  }
  if ((lVar2 == 0) || (*(int *)(param_1 + 8) != *(int *)(lVar2 + 8))) {
    FUN_0043f750(&local_20,*(undefined4 *)(param_1 + 8));
    FUN_00416cd0(param_2,6,*param_2,&DAT_01957d08,param_4,L".StartColor=\"",local_20,&DAT_01957d40);
  }
  if ((lVar2 == 0) || (*(int *)(param_1 + 0xc) != *(int *)(lVar2 + 0xc))) {
    FUN_0043f750(&local_28,*(undefined4 *)(param_1 + 0xc));
    FUN_00416cd0(param_2,6,*param_2,&DAT_01957d08,param_4,L".EndColor=\"",local_28,&DAT_01957d40);
  }
  if ((lVar2 == 0) || (*(char *)(param_1 + 0x10) != *(char *)(lVar2 + 0x10))) {
    FUN_00468530(&local_48,*(undefined1 *)(param_1 + 0x10),1);
    FUN_018036e0(&local_30,&local_48);
    FUN_00416cd0(param_2,6,*param_2,&DAT_01957d08,param_4,L".GradientStyle=\"",local_30,
                 &DAT_01957d40);
  }
  FUN_00460ba0(&local_48);
  FUN_00414560(&local_30,3);
  return param_2;
}

