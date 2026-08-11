/* Ghidra address: 0198d660 */
/* Ghidra symbol: FUN_0198d660 */


void FUN_0198d660(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  if ((param_2 != (longlong *)0x0) &&
     (((*(ushort *)(param_1 + 0x140) & 0x20) == 0 ||
      (((undefined **)*param_2 != &PTR_FUN_010b5580 && ((undefined **)*param_2 != &PTR_FUN_017b8848)
       ))))) {
    if ((*(ushort *)(param_1 + 0x140) & 1) == 0) {
      cVar3 = (**(code **)(*param_2 + 0x118))(param_2);
      if (cVar3 != '\0') goto LAB_0198d9e5;
    }
    if ((*(ushort *)(param_1 + 0x140) & 4) == 0) {
      cVar3 = FUN_0198a580(param_2);
      if ((cVar3 == '\a') || ((undefined **)*param_2 == &PTR_FUN_017b8668)) goto LAB_0198d9e5;
    }
    if ((*(ushort *)(param_1 + 0x140) & 2) == 0) {
      cVar3 = FUN_0198a580(param_2);
      if ((((cVar3 == '\b') && (*(char *)(param_2[5] + 0x98) != '\x01')) &&
          (*(char *)(param_2[5] + 0x98) != '\x02')) && (*(char *)(param_2[5] + 0x98) != '\x05')) {
        plVar1 = *(longlong **)(*(longlong *)(param_2[5] + 0x90) + 0xa0);
        (**(code **)(*plVar1 + 0x38))(plVar1,local_30);
        FUN_0043ea00(local_20,local_30[0]);
        cVar3 = FUN_005b8460(L"\\d(title)",local_20[0]);
        if (cVar3 == '\0') goto LAB_0198d9e5;
      }
    }
    if ((*(ushort *)(param_1 + 0x140) & 0x80) == 0) {
      cVar3 = FUN_0198a580(param_2);
      if ((cVar3 == '\b') && (*(char *)(param_2[5] + 0x98) == '\x01')) goto LAB_0198d9e5;
    }
    if ((*(ushort *)(param_1 + 0x140) & 0x40) == 0) {
      cVar3 = FUN_0198a580(param_2);
      if ((cVar3 == '\b') && (*(char *)(param_2[5] + 0x98) == '\x02')) goto LAB_0198d9e5;
    }
    if ((*(ushort *)(param_1 + 0x140) & 0x100) == 0) {
      cVar3 = FUN_0198a580(param_2);
      if ((cVar3 == '\b') && (*(char *)(param_2[5] + 0x98) == '\x05')) goto LAB_0198d9e5;
    }
    if ((*(ushort *)(param_1 + 0x140) & 2) == 0) {
      cVar3 = FUN_0198a580(param_2);
      if (cVar3 == '\n') goto LAB_0198d9e5;
    }
    *(undefined1 *)(param_2 + 1) = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x210);
    if (*(char *)(lVar2 + 0x12d) == '\0') {
      cVar3 = (**(code **)(*param_2 + 0x88))
                        (param_2,lVar2,param_1 + 0xc0,*(undefined1 *)(param_1 + 0x110),
                         *(undefined1 *)(param_1 + 0x118),*(undefined1 *)(param_1 + 0x120),
                         *(undefined1 *)(param_1 + 0x128),*(undefined1 *)(param_1 + 0x138));
      if (cVar3 == '\0') goto LAB_0198d9e5;
    }
    cVar3 = FUN_0198a580(param_2);
    if (cVar3 == '\x04') {
      FUN_01cfb180(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x210),
                   *(undefined1 *)(param_1 + 0x108),*(undefined1 *)(param_1 + 0x110),
                   *(undefined1 *)(param_1 + 0x118),*(undefined1 *)(param_1 + 0x120),
                   *(undefined1 *)(param_1 + 0x128),*(undefined1 *)(param_1 + 0x130),
                   *(undefined1 *)(param_1 + 0x138));
    }
    else {
      (**(code **)(*param_2 + 0xa0))
                (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x210));
    }
  }
LAB_0198d9e5:
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

