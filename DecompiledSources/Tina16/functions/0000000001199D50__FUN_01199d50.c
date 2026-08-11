/* Ghidra address: 01199d50 */
/* Ghidra symbol: FUN_01199d50 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01199d50(longlong *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_0064b380(param_1[0x1a],3,(int)param_1[0x13]);
  FUN_0064b380(param_1[0x1a],2,*(undefined4 *)((longlong)param_1 + 0x9c));
  _DAT_020c6558 = 10;
  *(undefined1 *)(param_1 + 0x8407) = 1;
  *(undefined1 *)((longlong)param_1 + 0x4203a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42039) = 0;
  iVar4 = 0;
  do {
    iVar1 = 0;
    do {
      *(undefined4 *)((longlong)param_1 + (longlong)iVar1 * 4 + (longlong)iVar4 * 0x400 + 0x838) = 0
      ;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x100);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x100);
  iVar4 = 0;
  puVar2 = &DAT_020c59b4;
  puVar3 = &DAT_020c5db4;
  do {
    *puVar2 = 0;
    *puVar3 = 0;
    *(undefined4 *)((longlong)param_1 + (longlong)iVar4 * 4 + 0x40838) = 0;
    *(undefined4 *)((longlong)param_1 + (longlong)iVar4 * 4 + 0x40c38) = 0;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x100);
  iVar4 = 0;
  do {
    FUN_00414480(param_1 + (longlong)iVar4 + 0x8207);
    FUN_00414480(param_1 + (longlong)iVar4 + 0x8307);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x100);
  *(undefined4 *)(param_1 + 0x106) = 0;
  *(undefined4 *)(param_1 + 0x105) = 0;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  FUN_00414480(&DAT_020c6308);
  _DAT_020c6310 = *(undefined4 *)(*(longlong *)PTR_DAT_02001d60 + 0x718);
  FUN_0043f750(&local_20,*(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764));
  FUN_0064de00(param_1[0xda],local_20);
  FUN_0064de00(param_1[0x103],0);
  (**(code **)(*param_1 + 0x118))(param_1,0);
  DAT_020c6328 = param_1[0xe6];
  DAT_020c6330 = param_1[0xf2];
  DAT_020c6338 = param_1[0xf3];
  _DAT_020c6340 = param_1[0xfb];
  _DAT_020c6348 = param_1[0xfc];
  _DAT_020c6350 = param_1[0x100];
  _DAT_020c6358 = param_1[0x101];
  DAT_020c6378 = param_1[0xe7];
  DAT_020c6380 = param_1[0xf1];
  _DAT_020c6388 = param_1[0xf4];
  _DAT_020c6390 = param_1[0xfa];
  _DAT_020c6398 = param_1[0xfd];
  _DAT_020c63a0 = param_1[0xff];
  DAT_020c63c8 = param_1[0xe8];
  DAT_020c63d0 = param_1[0xf0];
  _DAT_020c63d8 = param_1[0xf5];
  _DAT_020c63e0 = param_1[0xf9];
  _DAT_020c63e8 = param_1[0xfe];
  DAT_020c6418 = param_1[0xe9];
  DAT_020c6420 = param_1[0xef];
  _DAT_020c6428 = param_1[0xf6];
  _DAT_020c6430 = param_1[0xf8];
  DAT_020c6468 = param_1[0xea];
  DAT_020c6470 = param_1[0xee];
  _DAT_020c6478 = param_1[0xf7];
  DAT_020c64b8 = param_1[0xeb];
  DAT_020c64c0 = param_1[0xed];
  DAT_020c6508 = param_1[0xec];
  if (DAT_01f29eb0 + 1 < 7) {
    DAT_020c61c0 = DAT_01f29eb0 + 1;
  }
  else {
    DAT_020c61c0 = 6;
  }
  if (-1 < (int)DAT_020c61c0) {
    iVar4 = DAT_020c61c0 + 1;
    puVar5 = &DAT_020c6328;
    do {
      FUN_0064dbe0(*puVar5,0);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (DAT_020c61c0 - 1 < 0x80000000) {
    puVar5 = &DAT_020c6378;
    uVar7 = DAT_020c61c0;
    do {
      FUN_0064dbe0(*puVar5,0);
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (DAT_020c61c0 - 2 < 0x80000000) {
    iVar4 = DAT_020c61c0 - 1;
    puVar5 = &DAT_020c63c8;
    do {
      FUN_0064dbe0(*puVar5,0);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (DAT_020c61c0 - 3 < 0x80000000) {
    iVar4 = DAT_020c61c0 - 2;
    puVar5 = &DAT_020c6418;
    do {
      FUN_0064dbe0(*puVar5,0);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (DAT_020c61c0 - 4 < 0x80000000) {
    iVar4 = DAT_020c61c0 - 3;
    puVar5 = &DAT_020c6468;
    do {
      FUN_0064dbe0(*puVar5,0);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (DAT_020c61c0 - 5 < 0x80000000) {
    iVar4 = DAT_020c61c0 - 4;
    puVar5 = &DAT_020c64b8;
    do {
      FUN_0064dbe0(*puVar5,0);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (-1 < (int)(DAT_020c61c0 - 6)) {
    iVar4 = DAT_020c61c0 - 5;
    puVar5 = &DAT_020c6508;
    do {
      FUN_0064dbe0(*puVar5,0);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0119a590(DAT_020c61c0,0);
  if (DAT_020c61c0 < 0x80000000) {
    iVar4 = DAT_020c61c0 + 1;
    puVar5 = &DAT_020c6328;
    do {
      FUN_0064de00(*puVar5,0);
      FUN_0064dbe0(*puVar5);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (-1 < DAT_01f29eb4 + -1) {
    puVar6 = &DAT_020420cc;
    iVar4 = DAT_01f29eb4;
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0119a360();
  *(undefined4 *)PTR_DAT_02004708 = 4000;
  FUN_00414480(&local_20);
  return;
}

