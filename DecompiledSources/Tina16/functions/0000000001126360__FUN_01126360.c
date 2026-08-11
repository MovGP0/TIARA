/* Ghidra address: 01126360 */
/* Ghidra symbol: FUN_01126360 */


void FUN_01126360(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20;
  
  local_140 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  local_20 = 0;
  local_28 = 0;
  if ((*PTR_DAT_020039a8 == '\0') || (*(int *)(*(longlong *)(param_1 + 0x800) + 0x638) != 1))
  goto code_r0x01126702;
  lVar1 = *(longlong *)(param_1 + 0x800);
  if (*(int *)PTR_DAT_020056e8 == 0) {
    lVar2 = FUN_019a4600();
    if ((lVar2 != 0) && (*PTR_DAT_02002430 == '\0')) {
      lVar2 = FUN_019a4600();
      lVar2 = FUN_004aecf0(*(undefined8 *)(lVar2 + 0x470));
      *(char *)(lVar2 + 9) = (*(char *)(lVar1 + 0x4ac) - *(char *)(lVar1 + 0x4c0)) + '\x01';
      *(char *)(lVar2 + 0xb) = (*(char *)(lVar1 + 0x4ac) - *(char *)(lVar1 + 0x4c0)) + '\x01';
      FUN_0084e320(lVar1,&local_28,0,*(undefined4 *)(lVar1 + 0x4ac));
      FUN_01b1d680(&local_20,local_28);
      FUN_00416910(local_128,local_20,0xff);
      FUN_00415020(lVar2 + 0x22f,local_128,10);
    }
    lVar2 = FUN_019a4600();
    if (lVar2 != 0) {
      lVar2 = FUN_019a4600();
      if (0 < *(int *)(*(longlong *)(lVar2 + 0x470) + 0x10)) {
        lVar2 = FUN_019a4600();
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x470),0);
        PTR_DAT_02004010[0x43a] = *(undefined1 *)(lVar2 + 9);
        lVar2 = FUN_019a4600();
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x470),0);
        PTR_DAT_02004010[0x43c] = *(undefined1 *)(lVar2 + 0xb);
        FUN_0084e320(lVar1,&local_138,0,*(undefined4 *)(lVar1 + 0x4ac));
        FUN_01b1d680(&local_130,local_138);
        FUN_00416910(local_128,local_130,0xff);
        FUN_00415020(PTR_DAT_02004010 + 0x558,local_128,10);
        goto code_r0x01126702;
      }
    }
    PTR_DAT_02004010[0x43a] = PTR_DAT_02001120[0x43a];
    PTR_DAT_02004010[0x43c] = PTR_DAT_02001120[0x43c];
    PTR_DAT_02004010[0x558] = 0;
    goto code_r0x01126702;
  }
  if (*(int *)PTR_DAT_020056e8 != 1) goto code_r0x01126702;
  lVar2 = FUN_019a4600();
  if ((lVar2 != 0) && (*PTR_DAT_02002430 == '\0')) {
    lVar2 = FUN_019a4600();
    lVar2 = FUN_004aecf0(*(undefined8 *)(lVar2 + 0x468));
    *(char *)(lVar2 + 9) = (*(char *)(lVar1 + 0x4ac) - *(char *)(lVar1 + 0x4c0)) + '\x01';
    *(char *)(lVar2 + 0xb) = (*(char *)(lVar1 + 0x4ac) - *(char *)(lVar1 + 0x4c0)) + '\x01';
  }
  lVar2 = FUN_019a4600();
  if (lVar2 == 0) {
LAB_01126679:
    PTR_DAT_02004010[0x588] = PTR_DAT_02001120[0x588];
    PTR_DAT_02004010[0x58a] = PTR_DAT_02001120[0x58a];
  }
  else {
    lVar2 = FUN_019a4600();
    if (*(int *)(*(longlong *)(lVar2 + 0x468) + 0x10) < 1) goto LAB_01126679;
    lVar2 = FUN_019a4600();
    lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x468),0);
    PTR_DAT_02004010[0x588] = *(undefined1 *)(lVar2 + 9);
    lVar2 = FUN_019a4600();
    lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x468),0);
    PTR_DAT_02004010[0x58a] = *(undefined1 *)(lVar2 + 0xb);
  }
  FUN_0084e320(lVar1,&local_148,0,*(undefined4 *)(lVar1 + 0x4ac));
  FUN_01b1d680(&local_140,local_148);
  FUN_00416910(local_128,local_140,0xff);
  FUN_00415020(PTR_DAT_02004010 + 0x558,local_128,10);
code_r0x01126702:
  FUN_00414560(&local_148,4);
  FUN_00414560(&local_28,2);
  return;
}

