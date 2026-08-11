/* Ghidra address: 00f64020 */
/* Ghidra symbol: FUN_00f64020 */


undefined4
FUN_00f64020(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 local_50;
  undefined1 local_48 [12];
  undefined8 local_3c;
  char local_31;
  undefined1 local_30 [4];
  uint local_2c;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_00f653c0(param_1,*(undefined8 *)(param_1 + 0x90));
  if ((*(char *)(param_1 + 0x80) == '\x01') && ((param_4 & 8) != 0)) {
    *(undefined1 *)(param_1 + 0x80) = 0;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar5);
        cVar1 = FUN_00f6f960(lVar2);
        if (cVar1 != '\0') {
          FUN_00f63210(param_1,lVar2,lVar2 + 0x28,0xf);
          if (PTR_DAT_02002068[2] != '\0') {
            FUN_00f607f0(lVar2 + 0x28);
          }
          FUN_00f63320(param_1,lVar2,*(undefined4 *)(PTR_DAT_02002068 + 4),*PTR_DAT_02002068);
          FUN_00f6ece0(lVar2,param_5,param_6);
          if (PTR_DAT_02002068[2] != '\0') {
            FUN_00f607f0(lVar2 + 0x20);
            FUN_00f607f0(lVar2 + 0x28);
          }
          FUN_00f6f910(lVar2,0x10);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_00f62990(param_1,1);
    FUN_00f629b0(param_1,1);
    FUN_00f62b60(param_1,*(undefined8 *)(param_1 + 0x10));
  }
  else if ((*(char *)(param_1 + 0x80) == '\0') && ((param_4 & 8) != 0)) {
    plVar3 = (longlong *)
             FUN_00f74ae0(*(undefined8 *)(param_1 + 0x48),param_5,param_6,&local_31,&local_2c,
                          local_30);
    if ((plVar3 == (longlong *)0x0) || (local_31 != '\x02')) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    if (plVar3 == (longlong *)0x0) {
      local_50 = FUN_015fd610(param_5,param_6);
      plVar3 = (longlong *)FUN_00f64dd0(param_1,&local_50,local_48);
      bVar4 = 1;
    }
    if ((plVar3 == (longlong *)0x0) || (cVar1 = FUN_00f6f970(plVar3), cVar1 != '\0')) {
      if (plVar3 == (longlong *)0x0) {
        FUN_00f750e0(*(undefined8 *)(param_1 + 0x48));
      }
    }
    else {
      FUN_00f750e0(*(undefined8 *)(param_1 + 0x48));
    }
    if ((bool)(bVar4 & plVar3 != (longlong *)0x0)) {
      FUN_00f6f900(plVar3,8);
      FUN_00f63b50(param_1);
    }
    else if ((plVar3 == (longlong *)0x0) || (local_31 != '\x01')) {
      if (plVar3 == (longlong *)0x0) {
        *(undefined1 *)(param_1 + 0x80) = 4;
        FUN_00f62b60(param_1,*(undefined8 *)(param_1 + 0x10));
        FUN_00f652e0(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x10));
        FUN_00f65300(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x2c));
        FUN_00f65320(param_1,2);
        FUN_00f652c0(param_1,0xf);
        *(undefined4 *)(param_1 + 0x1c) = param_5;
        *(undefined4 *)(param_1 + 0x20) = param_6;
        *(undefined4 *)(param_1 + 0x24) = param_5;
        *(undefined4 *)(param_1 + 0x28) = param_6;
        *(undefined1 *)(param_1 + 0x1a) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x80) = 3;
      local_3c = (**(code **)(*plVar3 + 0x20))(plVar3,local_2c);
      lVar2 = FUN_00f6fe90(&PTR_FUN_00f6a950,1,*(undefined4 *)((longlong)plVar3 + 0x3c),param_1);
      *(longlong *)(param_1 + 0x38) = lVar2;
      *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      FUN_00f652e0(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x10));
      FUN_00f65300(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x30));
      FUN_00f65320(param_1,0);
      FUN_00f652c0(param_1,0xf);
      FUN_00f6ece0(*(undefined8 *)(param_1 + 0x38),local_3c & 0xffffffff,local_3c._4_4_);
      FUN_00f6ff90(*(undefined8 *)(param_1 + 0x38),plVar3,local_2c);
      FUN_00f62a20(param_1);
    }
  }
  return *(undefined4 *)(param_1 + 0x2c);
}

