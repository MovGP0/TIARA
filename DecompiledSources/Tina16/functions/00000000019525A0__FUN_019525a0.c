/* Ghidra address: 019525a0 */
/* Ghidra symbol: FUN_019525a0 */


undefined8 * FUN_019525a0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_88 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_00414480(param_2);
  cVar1 = FUN_0180c8c0(param_1[0x13],*(undefined8 *)(param_3 + 0x98));
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x98))(param_1);
    if (cVar1 != '\0') {
      FUN_00448430(local_20,param_1[0x13]);
      FUN_00416cd0(param_2,4,*param_2,L" l=\"",local_20[0],&DAT_01952b48);
    }
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_0192c3a0);
  if (cVar1 == '\0') {
    cVar1 = FUN_0180c8c0(param_1[0x14],*(undefined8 *)(param_3 + 0xa0));
    if (cVar1 != '\0') goto LAB_019526fc;
  }
  else {
LAB_019526fc:
    cVar1 = (**(code **)(*param_1 + 0x90))(param_1);
    if (cVar1 != '\0') {
      FUN_00448430(&local_28,param_1[0x14]);
      FUN_00416cd0(param_2,4,*param_2,L" t=\"",local_28,&DAT_01952b48);
    }
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01925478);
  if (cVar1 != '\0') {
    cVar1 = FUN_0195f670(param_1,2);
    if (cVar1 != '\0') goto LAB_01952807;
  }
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_0180c8c0(param_1[0x15],*(undefined8 *)(param_3 + 0xa8));
    if (cVar1 != '\0') {
      FUN_00448430(&local_30,param_1[0x15]);
      FUN_00416cd0(param_2,4,*param_2,L" w=\"",local_30,&DAT_01952b48);
    }
  }
LAB_01952807:
  cVar1 = FUN_0180c8c0(param_1[0x16],*(undefined8 *)(param_3 + 0xb0));
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
    if (cVar1 != '\0') {
      FUN_00448430(&local_38,param_1[0x16]);
      FUN_00416cd0(param_2,4,*param_2,L" h=\"",local_38,&DAT_01952b48);
    }
  }
  if (*(char *)((longlong)param_1 + 0xc5) != *(char *)(param_3 + 0xc5)) {
    FUN_00468820(&local_58,*(char *)((longlong)param_1 + 0xc5));
    FUN_018036e0(&local_40,&local_58);
    FUN_00416cd0(param_2,4,*param_2,L" Visible=\"",local_40,&DAT_01952b48);
  }
  if ((char)param_1[0x17] == '\0') {
    FUN_01951d40(param_1,&local_60,param_1[0xf],*(undefined8 *)(param_3 + 0x78),&DAT_01952bc4);
    FUN_00416ad0(param_2,local_60);
  }
  if ((char)param_1[0x17] != *(char *)(param_3 + 0xb8)) {
    FUN_00468820(&local_80,(char)param_1[0x17]);
    FUN_018036e0(&local_68,&local_80);
    FUN_00416cd0(param_2,4,*param_2,L" ParentFont=\"",local_68,&DAT_01952b48);
  }
  if (param_1[3] != *(longlong *)(param_3 + 0x18)) {
    FUN_0043f780(&local_88,param_1[3]);
    FUN_00416cd0(param_2,4,*param_2,L" Tag=\"",local_88,&DAT_01952b48);
  }
  if (*(char *)((longlong)param_1 + 0xc5) != *(char *)(param_3 + 0xc5)) {
    FUN_00468820(&local_a8,*(undefined1 *)((longlong)param_1 + 0xe2));
    FUN_018036e0(&local_90,&local_a8);
    FUN_00416cd0(param_2,4,*param_2,L" AllowMirrorMode=\"",local_90,&DAT_01952b48);
  }
  FUN_00460ba0(&local_a8);
  FUN_00414560(&local_90,2);
  FUN_00460ba0(&local_80);
  FUN_00414560(&local_68,2);
  FUN_00460ba0(&local_58);
  FUN_00414560(&local_40,5);
  return param_2;
}

