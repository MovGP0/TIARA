/* Ghidra address: 01b6b720 */
/* Ghidra symbol: FUN_01b6b720 */


void FUN_01b6b720(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined8 local_160;
  undefined1 local_158 [45];
  undefined1 local_12b [3];
  undefined1 local_128 [280];
  
  local_170 = auStack_1b8;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_160 = 0;
  FUN_00417600(local_128,&DAT_00401390,0x21);
  *(undefined1 *)((longlong)param_1 + 0x9cb) = 1;
  FUN_0064cf60(param_1,0xdad);
  FUN_0065b830(param_1);
  *(undefined1 *)((longlong)param_1 + 0x9cd) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9ce) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9cf) = 0;
  param_1[0x13d] = 0;
  *(undefined2 *)(param_1 + 0x13a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9d2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9cc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9ca) = 0x6c;
  *(undefined1 *)((longlong)param_1 + 0x9b9) = 0;
  *(undefined1 *)(param_1 + 0x137) = 0;
  lVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  param_1[0x138] = lVar3;
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmVoltMet");
  *(undefined1 *)(param_1 + 0xff) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7fa) = 1;
  (**(code **)(*param_1 + 0x450))(param_1);
  *(undefined1 *)(param_1 + 0x13e) = 0;
  if (*(char *)((longlong)param_1 + 0x7f9) == '\x01') {
    FUN_00452e30(&local_160,L"MM2_TEST");
    iVar2 = thunk_FUN_03ce33a6();
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x13e) = 1;
    }
  }
  if ((char)param_1[0x13e] == '\0') {
    lVar3 = param_1[0x124];
    FUN_007fdf10(param_1,*(int *)(lVar3 + 0x94) + *(int *)(lVar3 + 0x9c) + *(int *)(lVar3 + 0x90));
  }
  FUN_010e1dd0(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    lVar3 = FUN_010dc070(&PTR_FUN_010db178,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x13b] = lVar3;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x7f9) != '\x01') goto LAB_01b6bbc0;
    lVar3 = FUN_010dbf40(&PTR_FUN_010dab30,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x13b] = lVar3;
    plVar4 = (longlong *)FUN_004113f0(lVar3,&PTR_FUN_010dab30);
    (**(code **)(*plVar4 + 0xb0))(plVar4,local_12b);
  }
  (**(code **)(*(longlong *)param_1[0x13b] + 0x48))((longlong *)param_1[0x13b],local_12b);
  FUN_0064dd90(param_1,&local_180);
  FUN_004169a0(&local_188,param_1[0x13b] + 0x23);
  local_198 = local_188;
  FUN_00416cd0(&local_178,3,local_180,&DAT_01b6bcb8);
  FUN_0064de00(param_1,local_178);
  FUN_01b6bf50(param_1);
  FUN_01b6df10(param_1);
  (**(code **)(*(longlong *)param_1[0x13b] + 0xa0))
            ((longlong *)param_1[0x13b],(longlong)param_1 + 0x9ca);
  (**(code **)(*(longlong *)param_1[0x13b] + 0x78))
            ((longlong *)param_1[0x13b],(longlong)param_1 + 0x9b9);
  uVar1 = FUN_0040c770((double)*(byte *)((longlong)param_1 + 0x9b9) / 2.0);
  *(undefined1 *)(param_1 + 0x137) = uVar1;
  (**(code **)(*(longlong *)param_1[0x13b] + 0x80))
            ((longlong *)param_1[0x13b],param_1 + 0x137,local_158,1);
  (**(code **)(*(longlong *)param_1[0x13b] + 0x88))((longlong *)param_1[0x13b],(char)param_1[0x137])
  ;
  (**(code **)(*(longlong *)param_1[0x13b] + 0xa8))((longlong *)param_1[0x13b],0x6e);
  FUN_01b6bcd0(param_1,*(undefined1 *)((longlong)param_1 + 0x9ca));
  FUN_01b6e340(param_1,*(undefined1 *)((longlong)param_1 + 0x9ca));
LAB_01b6bbc0:
  FUN_00414480(&local_188);
  FUN_00414560(&local_180,2);
  FUN_00414480(&local_160);
  FUN_00417840(local_128,&DAT_00401390,0x21);
  return;
}

