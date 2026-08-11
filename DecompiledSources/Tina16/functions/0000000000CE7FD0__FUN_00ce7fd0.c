/* Ghidra address: 00ce7fd0 */
/* Ghidra symbol: FUN_00ce7fd0 */


undefined1 FUN_00ce7fd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int local_4c;
  longlong local_48;
  undefined1 local_39;
  longlong *local_38;
  longlong *local_30;
  
  local_60 = auStack_a8;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_39 = 0;
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00ce7340(auStack_a8,local_38,local_48);
  iVar3 = (**(code **)(*local_38 + 0x28))(local_38);
  if (iVar3 == 0) {
LAB_00ce834c:
    FUN_00ce8390(0,local_60);
  }
  else {
    FUN_004b3cf0(local_38,&local_68,0);
    FUN_00414ad0(param_1 + 0x30,local_68);
    FUN_00879940(&local_70,local_38,0);
    FUN_00414ad0(param_1 + 0x48,local_70);
    (**(code **)(*local_38 + 0x98))(local_38,0);
    uVar4 = FUN_00448ed0();
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x50);
    cVar2 = FUN_00ce7f00(auStack_a8,local_38,L"MAX-AGE",&local_48);
    if (cVar2 == '\0') {
      cVar2 = FUN_00ce7f00(auStack_a8,local_38,L"EXPIRES",&local_48);
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x68) = 0;
        dVar5 = (double)FUN_00448c80(9999,0xc,0x1f);
        dVar6 = (double)FUN_00448a90(0x17,0x3b,0x3b,999);
        *(double *)(param_1 + 0x20) = dVar5 + dVar6;
      }
      else {
        *(undefined1 *)(param_1 + 0x68) = 1;
        uVar4 = FUN_00448650(local_48,PTR_DAT_02004830);
        *(undefined8 *)(param_1 + 0x20) = uVar4;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x68) = 1;
      uVar4 = FUN_00448650(local_48,PTR_DAT_02004830);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
    }
    FUN_00414480(&local_48);
    FUN_00ce7f00(auStack_a8,local_38,L"DOMAIN",&local_48);
    local_4c = 0;
    if (local_48 != 0) {
      local_4c = *(int *)(local_48 + -4);
    }
    if (local_4c < 1) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      FUN_00ce6c20(&local_78,*(undefined8 *)(param_3 + 0x30));
      FUN_00414ad0(param_1 + 0x18,local_78);
    }
    else {
      cVar2 = FUN_00ce6c40(*(undefined8 *)(param_3 + 0x30),local_48);
      if (cVar2 == '\0') goto LAB_00ce834c;
      *(undefined1 *)(param_1 + 0x58) = 0;
      FUN_00414ad0(param_1 + 0x18,local_48);
    }
    cVar2 = FUN_00ce7f00(auStack_a8,local_38,L"PATH",&local_48);
    if (cVar2 == '\0') {
      FUN_00ce6ba0(&local_80,param_3);
      FUN_00414ad0(param_1 + 0x38,local_80);
    }
    else {
      FUN_00414ad0(param_1 + 0x38,local_48);
    }
    iVar3 = (**(code **)(*local_38 + 0xb8))(local_38,L"SECURE");
    *(bool *)(param_1 + 0x40) = iVar3 != -1;
    iVar3 = (**(code **)(*local_38 + 0xb8))(local_38,L"HTTPONLY");
    *(bool *)(param_1 + 0x28) = iVar3 != -1;
    if (*(char *)(param_1 + 0x28) != '\0') {
      cVar2 = FUN_00ce6df0(*(undefined8 *)(param_3 + 0x10));
      if (cVar2 == '\0') goto LAB_00ce834c;
    }
    plVar1 = local_38;
    local_39 = 1;
    local_30 = local_38;
    local_38 = (longlong *)0x0;
    FUN_00410f20(plVar1);
  }
  FUN_00414560(&local_80,4);
  FUN_00414480(&local_48);
  return local_39;
}

