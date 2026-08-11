/* Ghidra address: 01958800 */
/* Ghidra symbol: FUN_01958800 */


undefined8 *
FUN_01958800(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,char param_5,
            char param_6,char param_7)

{
  char cVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_20[0] = 0;
  FUN_00414480(param_2);
  if (param_5 == '\0') {
LAB_01958866:
    if ((param_5 == '\0') && (*(int *)(param_1 + 0x10) != *(int *)(param_3 + 0x10)))
    goto LAB_0195887f;
  }
  else {
    cVar1 = FUN_019587c0(param_1);
    if (cVar1 == '\0') goto LAB_01958866;
LAB_0195887f:
    FUN_0043f750(local_20,*(undefined4 *)(param_1 + 0x10));
    FUN_00416cd0(param_2,6,*param_2,&DAT_01958a94,param_4,L".Color=\"",local_20[0],&DAT_01958ac4);
  }
  if (param_6 == '\0') {
LAB_019588f1:
    if ((param_6 == '\0') && (*(char *)(param_1 + 0x14) != *(char *)(param_3 + 0x14)))
    goto LAB_01958910;
  }
  else {
    cVar1 = FUN_019587d0(param_1);
    if (cVar1 == '\0') goto LAB_019588f1;
LAB_01958910:
    FUN_00468530(&local_40,*(undefined1 *)(param_1 + 0x14),1);
    FUN_018036e0(&local_28,&local_40);
    FUN_00416cd0(param_2,6,*param_2,&DAT_01958a94,param_4,L".Style=\"",local_28,&DAT_01958ac4);
  }
  if (param_7 == '\0') {
LAB_01958997:
    if (param_7 != '\0') goto code_r0x01958a14;
    cVar1 = FUN_0180c8c0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_3 + 0x18));
    if (cVar1 == '\0') goto code_r0x01958a14;
  }
  else {
    cVar1 = FUN_019587e0(param_1);
    if (cVar1 == '\0') goto LAB_01958997;
  }
  FUN_00448430(&local_48,*(undefined8 *)(param_1 + 0x18));
  FUN_00416cd0(param_2,6,*param_2,&DAT_01958a94,param_4,L".Width=\"",local_48,&DAT_01958ac4);
code_r0x01958a14:
  FUN_00414480(&local_48);
  FUN_00460ba0(&local_40);
  FUN_00414560(&local_28,2);
  return param_2;
}

