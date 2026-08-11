/* Ghidra address: 00f42e40 */
/* Ghidra symbol: FUN_00f42e40 */


void FUN_00f42e40(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [256];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_168 = 0;
  local_150 = 0;
  local_158 = 0;
  local_140 = 0;
  local_148 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  *param_3 = 2;
  if (*PTR_DAT_020039a8 == '\0') {
    if (*(char *)(param_1 + 0x738) != '\0') {
      FUN_013b1f30(param_1,*(undefined8 *)(param_1 + 0x748),*(undefined8 *)(param_1 + 0x740),
                   *(undefined1 *)(param_1 + 0x73a));
    }
  }
  else if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x638) == 1) {
    lVar1 = *(longlong *)(param_1 + 0x6d0);
    if (*(int *)PTR_DAT_020056e8 == 0) {
      if (*PTR_DAT_02002430 == '\0') {
        lVar2 = FUN_019a4600();
        puVar3 = (undefined8 *)FUN_004aecf0(*(undefined8 *)(lVar2 + 0x470));
        lVar2 = FUN_0084e390(lVar1,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
        *puVar3 = *(undefined8 *)(lVar2 + 8);
        lVar2 = FUN_0084e390(lVar1,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
        *(char *)(puVar3 + 1) = *(char *)(lVar2 + 0x18) + '\x01';
        *(char *)((longlong)puVar3 + 10) = *(char *)(lVar1 + 0x4ac) + '\x01';
        FUN_0084e320(lVar1,&local_28,0,*(undefined4 *)(lVar1 + 0x4ac));
        FUN_01b1d680(&local_20,local_28);
        if (local_20 != 0) {
          FUN_0084e320(lVar1,&local_38,0,*(undefined4 *)(lVar1 + 0x4ac));
          FUN_01b1d680(&local_30,local_38);
          FUN_00416910(local_138,local_30,0xff);
          FUN_00415020((longlong)puVar3 + 0x22f,local_138,10);
        }
      }
      lVar2 = FUN_019a4600();
      if (*(int *)(*(longlong *)(lVar2 + 0x470) + 0x10) < 1) {
        *(undefined8 *)(PTR_DAT_02004010 + 0x431) = *(undefined8 *)(PTR_DAT_02001120 + 0x431);
        PTR_DAT_02004010[0x439] = PTR_DAT_02001120[0x439];
        PTR_DAT_02004010[0x43b] = PTR_DAT_02001120[0x43b];
        PTR_DAT_02004010[0x558] = 0;
      }
      else {
        lVar2 = FUN_019a4600();
        puVar3 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar2 + 0x470),0);
        *(undefined8 *)(PTR_DAT_02004010 + 0x431) = *puVar3;
        lVar2 = FUN_019a4600();
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x470),0);
        PTR_DAT_02004010[0x439] = *(undefined1 *)(lVar2 + 8);
        lVar2 = FUN_019a4600();
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x470),0);
        PTR_DAT_02004010[0x43b] = *(undefined1 *)(lVar2 + 10);
        FUN_0084e320(lVar1,&local_148,0,*(undefined4 *)(lVar1 + 0x4ac));
        FUN_01b1d680(&local_140,local_148);
        if (local_140 != 0) {
          FUN_0084e320(lVar1,&local_158,0,*(undefined4 *)(lVar1 + 0x4ac));
          FUN_01b1d680(&local_150,local_158);
          FUN_00416910(local_138,local_150,0xff);
          FUN_00415020(PTR_DAT_02004010 + 0x558,local_138,10);
        }
      }
    }
    else if (*(int *)PTR_DAT_020056e8 == 1) {
      if (*PTR_DAT_02002430 == '\0') {
        lVar2 = FUN_019a4600();
        puVar3 = (undefined8 *)FUN_004aecf0(*(undefined8 *)(lVar2 + 0x468));
        lVar2 = FUN_0084e390(lVar1,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
        *puVar3 = *(undefined8 *)(lVar2 + 8);
        lVar2 = FUN_0084e390(lVar1,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
        *(char *)(puVar3 + 1) = *(char *)(lVar2 + 0x18) + '\x01';
        *(char *)((longlong)puVar3 + 10) = *(char *)(lVar1 + 0x4ac) + '\x01';
      }
      lVar2 = FUN_019a4600();
      if (*(int *)(*(longlong *)(lVar2 + 0x468) + 0x10) < 1) {
        *(undefined8 *)(PTR_DAT_02004010 + 0x57f) = *(undefined8 *)(PTR_DAT_02001120 + 0x57f);
        PTR_DAT_02004010[0x587] = PTR_DAT_02001120[0x587];
        PTR_DAT_02004010[0x589] = PTR_DAT_02001120[0x589];
      }
      else {
        lVar2 = FUN_019a4600();
        puVar3 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar2 + 0x468),0);
        *(undefined8 *)(PTR_DAT_02004010 + 0x57f) = *puVar3;
        lVar2 = FUN_019a4600();
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x468),0);
        PTR_DAT_02004010[0x587] = *(undefined1 *)(lVar2 + 8);
        lVar2 = FUN_019a4600();
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x468),0);
        PTR_DAT_02004010[0x589] = *(undefined1 *)(lVar2 + 10);
      }
      FUN_0084e320(lVar1,&local_168,0,*(undefined4 *)(lVar1 + 0x4ac));
      FUN_01b1d680(&local_160,local_168);
      if (local_160 != 0) {
        FUN_0084e320(lVar1,&local_178,0,*(undefined4 *)(lVar1 + 0x4ac));
        FUN_01b1d680(&local_170,local_178);
        FUN_00416910(local_138,local_170,0xff);
        FUN_00415020(PTR_DAT_02004010 + 0x558,local_138,10);
      }
    }
  }
  FUN_00414560(&local_178,8);
  FUN_00414560(&local_38,4);
  return;
}

