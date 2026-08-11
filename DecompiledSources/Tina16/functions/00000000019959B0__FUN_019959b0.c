/* Ghidra address: 019959b0 */
/* Ghidra symbol: FUN_019959b0 */


longlong FUN_019959b0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  bVar1 = false;
LAB_01995b80:
  do {
    if ((bVar1) || (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x394))) {
      return lVar5;
    }
    if ((char)param_2 == '\0') {
LAB_01995af8:
      uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
      cVar2 = FUN_0198a580(uVar3);
      if (cVar2 == '\x05') {
        lVar5 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
        bVar1 = true;
      }
      else {
        *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
        while (*(int *)(param_1 + 0x394) < *(int *)(param_1 + 0x10)) {
          uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
          cVar2 = FUN_0198a580(uVar3);
          if (cVar2 == '\x04') break;
          uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
          cVar2 = FUN_0198a580(uVar3);
          if (cVar2 == '\x05') break;
          *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
        }
      }
      goto LAB_01995b80;
    }
    uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
    cVar2 = FUN_0198a580(uVar3);
    if (cVar2 != '\x04') goto LAB_01995af8;
    uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
    cVar2 = FUN_01d04d40(uVar3);
    if ((cVar2 == '\0') ||
       (lVar4 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394)),
       *(char *)(*(longlong *)(lVar4 + 0x1a8) + 0x70) != '\x01')) goto LAB_01995af8;
    uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
    lVar5 = FUN_01d04f70(uVar3,param_2);
    if (lVar5 == 0) {
      *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
      if (*(int *)(param_1 + 0x394) < *(int *)(param_1 + 0x10)) {
        uVar3 = FUN_00b94e60(param_1,*(int *)(param_1 + 0x394));
        cVar2 = FUN_0198a580(uVar3);
        if (cVar2 == '\x05') {
          lVar5 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
          bVar1 = true;
          goto LAB_01995b80;
        }
      }
      while (*(int *)(param_1 + 0x394) < *(int *)(param_1 + 0x10)) {
        uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
        cVar2 = FUN_0198a580(uVar3);
        if (cVar2 == '\x04') break;
        uVar3 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x394));
        cVar2 = FUN_0198a580(uVar3);
        if (cVar2 == '\x05') break;
        *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
      }
      goto LAB_01995b80;
    }
    bVar1 = true;
  } while( true );
}

