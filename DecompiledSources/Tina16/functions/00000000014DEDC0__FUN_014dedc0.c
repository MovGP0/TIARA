/* Ghidra address: 014dedc0 */
/* Ghidra symbol: FUN_014dedc0 */


void FUN_014dedc0(short param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 unaff_R13;
  bool bVar6;
  undefined4 local_58 [2];
  undefined2 local_50;
  undefined1 uStack_4e;
  longlong local_40 [2];
  
  puVar1 = PTR_DAT_020059d0;
  uVar5 = CONCAT62((int6)((ulonglong)unaff_R13 >> 0x10),0x196);
  if ((ushort)(param_1 - 0x58U) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << ((byte)(param_1 - 0x58U) & 0x1f) &
            0x14U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df17d,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0xbfe6666666666666;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df182,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0xbff8000000000000;
    local_50 = 0x5502;
    uStack_4e = 0x30;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&local_50,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f9999999999999a;
    local_58[0] = 0x53435503;
    uVar3 = FUN_014dcff0(&DAT_01f57110,local_58,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3ff0000000000000;
    local_50 = 0x4502;
    uStack_4e = 0x55;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&local_50,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3ff0000000000000;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df193,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f841205bc01a36e;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df198,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f48def416bdb1a7;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df19d,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f9eb851eb851eb8;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df1a2,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f841205bc01a36e;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df1a7,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f48def416bdb1a7;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df1ac,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f9eb851eb851eb8;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df1b1,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f841205bc01a36e;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df1b6,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f48def416bdb1a7;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df1bb,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3f9eb851eb851eb8;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df1c0,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x4866bb2acfde2705;
    uVar3 = FUN_014dcff0(&DAT_01f57110,&DAT_014df1c5,uVar5 & 0xffffffff);
    *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x4528d0bf423c03d9;
  }
  cVar2 = FUN_014db910(&DAT_014df1ca,param_2,local_40);
  if (cVar2 != '\0') {
    lVar4 = FUN_0040c770(*(undefined8 *)(local_40[0] + 0x28));
    if (lVar4 == 1) {
      local_50 = 0x5502;
      uStack_4e = 0x43;
      uVar3 = FUN_014dcff0(&DAT_01f57110,&local_50,uVar5 & 0xffffffff);
      *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0xbfa7ced916872b02;
      local_58[0] = 0x31435503;
      uVar3 = FUN_014dcff0(&DAT_01f57110,local_58,uVar5 & 0xffffffff);
      *(undefined8 *)(puVar1 + (uVar3 & 0xffff) * 8 + -8) = 0x3facac083126e979;
    }
    lVar4 = FUN_0040c770(*(undefined8 *)(local_40[0] + 0x28));
    if (lVar4 == 2) {
      local_50 = 0x5502;
      uStack_4e = 0x41;
      uVar5 = FUN_014dcff0(&DAT_01f57110,&local_50,uVar5 & 0xffffffff);
      *(undefined8 *)(puVar1 + (uVar5 & 0xffff) * 8 + -8) = 0x3cd203af9ee75616;
    }
  }
  return;
}

