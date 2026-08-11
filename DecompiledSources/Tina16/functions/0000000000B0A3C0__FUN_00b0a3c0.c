/* Ghidra address: 00b0a3c0 */
/* Ghidra symbol: FUN_00b0a3c0 */


char FUN_00b0a3c0(longlong *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  char local_31;
  undefined8 local_30;
  int local_28;
  int local_24;
  
  local_30 = 0;
  local_31 = FUN_0084a020(param_1,param_2,param_3);
  if (local_31 == '\0') goto LAB_00b0a6ed;
  cVar1 = FUN_00b09b70(param_1,param_2,param_3);
  if (cVar1 == '\0') goto LAB_00b0a6ed;
  lVar2 = FUN_0084e390(param_1,param_2,param_3);
  if ((lVar2 == 0) || ((char)param_1[0xcd] != '\0')) {
    local_31 = '\0';
    goto LAB_00b0a6ed;
  }
  local_31 = '\x01';
  if (-1 < *(int *)((longlong)param_1 + 0x63c)) {
    lVar2 = FUN_0084e390(param_1,1,(int)param_1[200]);
    if (lVar2 != 0) {
      FUN_00b0a150(param_1,*(undefined4 *)((longlong)param_1 + 0x63c),(int)param_1[200]);
    }
  }
  if ((*PTR_DAT_020039a8 == '\0') && (2 < *(int *)((longlong)param_1 + 0x4a4))) {
    lVar2 = FUN_0084e390(param_1,1,param_3);
    if (lVar2 == 0) goto LAB_00b0a593;
    lVar2 = FUN_0084e390(param_1,1,param_3);
    if (*(char *)(lVar2 + 0x3a) == '\0') goto LAB_00b0a593;
    if (*(char *)((longlong)param_1 + 0xb1) == '\0') {
      FUN_00849e90(param_1,&local_28,2,param_3);
    }
    else {
      FUN_00849e90(param_1,&local_28,*(int *)((longlong)param_1 + 0x4a4) + -3,param_3);
    }
    FUN_0064dbe0(param_1[0xc4],1);
    FUN_0064cb30(param_1[0xc4],local_28 + 2);
    FUN_0064cb90(param_1[0xc4],local_24 + 1);
    lVar2 = FUN_0084e390(param_1,1,param_3);
    FUN_00b06920(param_1[0xc4],*(undefined1 *)(lVar2 + 0x39));
  }
  else {
LAB_00b0a593:
    FUN_0064dbe0(param_1[0xc4],0);
  }
  plVar3 = (longlong *)FUN_0084e390(param_1,param_2,param_3);
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  FUN_00b07aa0(param_1[0xc3],local_30);
  lVar2 = FUN_0084e390(param_1,param_2,param_3);
  FUN_00b07b60(param_1[0xc3],(*(byte *)(lVar2 + 0x28) & 1) != 0);
  lVar2 = FUN_0084e390(param_1,param_2,param_3);
  FUN_00b07ba0(param_1[0xc3],(*(byte *)(lVar2 + 0x28) & 2) != 0);
  lVar2 = FUN_0084e390(param_1,param_2,param_3);
  FUN_00b07ad0(param_1[0xc3],*(undefined8 *)(lVar2 + 0x20));
  lVar2 = FUN_0084e390(param_1,param_2,param_3);
  FUN_00b07bd0(param_1[0xc3],*(undefined1 *)(lVar2 + 0x38));
  lVar2 = FUN_0084e390(param_1,param_2,param_3);
  FUN_00b07b20(param_1[0xc3],lVar2 + 0x3b);
  FUN_00b07c30(param_1[0xc3],0);
  *(undefined4 *)((longlong)param_1 + 0x63c) = param_2;
  *(int *)(param_1 + 200) = param_3;
  FUN_00b0a730(param_1,param_2,param_3);
  if (param_3 != *(int *)((longlong)param_1 + 0x4ac)) {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
LAB_00b0a6ed:
  FUN_00414480(&local_30);
  return local_31;
}

