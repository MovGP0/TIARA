/* Ghidra address: 01ae4310 */
/* Ghidra symbol: FUN_01ae4310 */


void FUN_01ae4310(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xc08) + 0xa9) != '\0') {
    FUN_0064e6f0(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xc08));
  }
  lVar4 = *(longlong *)(param_1 + 0xf0);
  if ((lVar4 == 0) && (lVar4 = *(longlong *)(param_1 + 0xf8), lVar4 == 0)) {
    FUN_0064e6f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc08));
    FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae0),0);
    FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae8),0);
    FUN_01a77f90(*(undefined8 *)PTR_DAT_02001e00,0);
    return;
  }
  if (*(longlong *)(lVar4 + 0x58) != 0) {
    uVar3 = FUN_01abda80(*(longlong *)(lVar4 + 0x58));
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01cba688);
    if (cVar1 != '\0') {
      FUN_01a7b800(*(undefined8 *)PTR_DAT_02001e00,2);
      cVar1 = '\x02';
      goto LAB_01ae450d;
    }
  }
  if (*(longlong *)(lVar4 + 0x58) != 0) {
    uVar3 = FUN_01abda80(*(longlong *)(lVar4 + 0x58));
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01cb9c30);
    if (cVar1 != '\0') {
      FUN_01a7b800(*(undefined8 *)PTR_DAT_02001e00,1);
      cVar1 = '\x01';
      if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x58) + 0xd0) + 8) + 0x434) ==
          '\x01') {
        FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd18),&DAT_01ae4b70);
        FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd50),&DAT_01ae4b70);
        FUN_0074b490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcf0),0);
      }
      else {
        FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd18),&LAB_01ae4b84);
        FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd50),&LAB_01ae4b84);
      }
      goto LAB_01ae450d;
    }
  }
  cVar1 = '\0';
  if (*(int *)(param_1 + 0x110) < 0) {
    FUN_01a7b800(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  else {
    FUN_01a7b800(*(undefined8 *)PTR_DAT_02001e00,*(int *)(param_1 + 0x110));
    cVar1 = '\0';
  }
LAB_01ae450d:
  if ((*(longlong *)(param_1 + 0xf0) == 0) || (*(longlong *)(param_1 + 0xf8) != 0)) {
    if ((*(longlong *)(param_1 + 0xf0) == 0) && (*(longlong *)(param_1 + 0xf8) != 0)) {
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcf0),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd90),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcf8),0);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc48),0);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd98),0);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd30),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc50),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xdd0),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd68),0);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc80),0);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe10),0);
      FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae0),0);
      FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae8),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xca8),0);
    }
    else if ((*(longlong *)(param_1 + 0xf0) == 0) || (*(longlong *)(param_1 + 0xf8) == 0)) {
      if ((*(longlong *)(param_1 + 0xf0) == 0) && (*(longlong *)(param_1 + 0xf8) == 0)) {
        FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae0),0);
        FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae8),0);
        FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xca8),0);
      }
    }
    else {
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcf0),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd90),1);
      FUN_0064cb90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd90),0);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcf8),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc48),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd98),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd30),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc50),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xdd0),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd68),1);
      if ((cVar1 == '\0') &&
         (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xbc8) + 0x80) != '\0')) {
        FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xca8),1);
      }
      else {
        FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xca8),0);
      }
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc80),1);
      FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe10),1);
      FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae0),1);
      FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae8),1);
    }
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcf0),1);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd90),1);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcf8),1);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc48),1);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd98),1);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd30),0);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc50),0);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xdd0),0);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd68),0);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc80),0);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe10),0);
    FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae0),1);
    FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae8),0);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xca8),0);
  }
  lVar4 = *(longlong *)(param_1 + 0xf0);
  if ((((lVar4 == 0) || (*(longlong *)(param_1 + 0xf8) == 0)) || (*(longlong *)(lVar4 + 0x58) == 0))
     || (((*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x58) == 0 ||
          (cVar1 = FUN_004113d0(*(undefined8 *)(lVar4 + 0x58),&PTR_FUN_01aae560), cVar1 == '\0')) ||
         ((cVar1 = FUN_004113d0(*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x58),
                                &PTR_FUN_01aae560), cVar1 == '\0' ||
          ((*(char *)(*(longlong *)(*(longlong *)(lVar4 + 0x58) + 0xe0) + 0x2b) != '\0' ||
           (lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x58) + 0xe0),
           *(char *)(lVar4 + 0x2b) != '\0')))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc68),uVar2);
  if (((*(longlong *)(param_1 + 0xf0) != 0) || (*(longlong *)(param_1 + 0xf8) != 0)) &&
     (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) != '\x01')) {
    FUN_0064e700(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc08));
    FUN_01a7b800(*(undefined8 *)PTR_DAT_02001e00,*(undefined4 *)(param_1 + 0x110));
  }
  FUN_01ad1740(param_1);
  FUN_01ad31e0(param_1,*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
  FUN_01a7b660(*(undefined8 *)PTR_DAT_02001e00);
  FUN_01a7b5e0(*(undefined8 *)PTR_DAT_02001e00);
  FUN_01a8b560(*(undefined8 *)PTR_DAT_02001e00);
  FUN_01a77f90(*(undefined8 *)PTR_DAT_02001e00,0);
  return;
}

