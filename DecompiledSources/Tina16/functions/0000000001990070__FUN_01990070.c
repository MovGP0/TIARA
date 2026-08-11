/* Ghidra address: 01990070 */
/* Ghidra symbol: FUN_01990070 */


undefined1 FUN_01990070(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  if (param_2 == (longlong *)0x0) goto LAB_01990471;
  if ((((*(ushort *)(param_1 + 0x290) & 0x20) != 0) && ((undefined **)*param_2 != &PTR_FUN_010b5580)
      ) && ((undefined **)*param_2 != &PTR_FUN_017b8848)) {
    cVar2 = FUN_0198a580(param_2);
    if (cVar2 != '\x04') goto LAB_01990471;
    cVar2 = (**(code **)(*param_2 + 0x2d8))(param_2);
    if (cVar2 == '\0') goto LAB_01990471;
  }
  if ((*(ushort *)(param_1 + 0x290) & 1) == 0) {
    cVar2 = (**(code **)(*param_2 + 0x118))(param_2);
    if (cVar2 != '\0') goto LAB_01990471;
  }
  if ((*(ushort *)(param_1 + 0x290) & 4) == 0) {
    cVar2 = FUN_0198a580(param_2);
    if ((cVar2 == '\a') || ((undefined **)*param_2 == &PTR_FUN_017b8668)) goto LAB_01990471;
  }
  if ((*(ushort *)(param_1 + 0x290) & 2) == 0) {
    cVar2 = FUN_0198a580(param_2);
    if (((cVar2 == '\b') && (*(char *)(param_2[5] + 0x98) != '\x01')) &&
       ((*(char *)(param_2[5] + 0x98) != '\x02' && (*(char *)(param_2[5] + 0x98) != '\x05')))) {
      plVar1 = *(longlong **)(*(longlong *)(param_2[5] + 0x90) + 0xa0);
      (**(code **)(*plVar1 + 0x38))(plVar1,local_30);
      FUN_0043ea00(local_20,local_30[0]);
      cVar2 = FUN_005b8460(L"\\d(title)",local_20[0]);
      if (cVar2 == '\0') goto LAB_01990471;
    }
  }
  if ((*(ushort *)(param_1 + 0x290) & 0x80) == 0) {
    cVar2 = FUN_0198a580(param_2);
    if ((cVar2 == '\b') && (*(char *)(param_2[5] + 0x98) == '\x01')) goto LAB_01990471;
  }
  if ((*(ushort *)(param_1 + 0x290) & 0x40) == 0) {
    cVar2 = FUN_0198a580(param_2);
    if ((cVar2 == '\b') && (*(char *)(param_2[5] + 0x98) == '\x02')) goto LAB_01990471;
  }
  if ((*(ushort *)(param_1 + 0x290) & 0x100) == 0) {
    cVar2 = FUN_0198a580(param_2);
    if ((cVar2 == '\b') && (*(char *)(param_2[5] + 0x98) == '\x05')) goto LAB_01990471;
  }
  if ((*(ushort *)(param_1 + 0x290) & 2) == 0) {
    cVar2 = FUN_0198a580(param_2);
    if (cVar2 == '\n') goto LAB_01990471;
  }
  *(undefined1 *)(param_2 + 1) = 0;
  cVar2 = (**(code **)(*param_2 + 0x88))
                    (param_2,*(undefined8 *)(param_1 + 0x248),param_1 + 0x238,
                     *(undefined1 *)(param_1 + 0x237),*(undefined1 *)(param_1 + 0x236),
                     *(undefined1 *)(param_1 + 0x235),*(undefined1 *)(param_1 + 0x234),
                     *(undefined1 *)(param_1 + 0x233));
  if (cVar2 != '\0') {
    if ((*(ushort *)(param_1 + 0x290) & 0x20) == 0) {
      cVar2 = FUN_0198a580(param_2);
      if (cVar2 == '\x04') {
        FUN_01cfb180(param_2,*(undefined8 *)(param_1 + 0x248),*(undefined1 *)(param_1 + 0x298),
                     *(undefined1 *)(param_1 + 0x237),*(undefined1 *)(param_1 + 0x236),
                     *(undefined1 *)(param_1 + 0x235),*(undefined1 *)(param_1 + 0x234),
                     *(undefined1 *)(param_1 + 0x232),*(undefined1 *)(param_1 + 0x233));
      }
      else {
        (**(code **)(*param_2 + 0xa0))(param_2,*(undefined8 *)(param_1 + 0x248));
      }
    }
    else {
      cVar2 = FUN_0198a580(param_2);
      if (cVar2 == '\x04') {
        FUN_0173d100(param_2[0x33],*(undefined8 *)(param_1 + 0x248),*(undefined1 *)(param_1 + 0x298)
                     ,*(undefined1 *)(param_1 + 0x232));
      }
      else {
        (**(code **)(*param_2 + 0xa0))(param_2,*(undefined8 *)(param_1 + 0x248));
      }
    }
  }
LAB_01990471:
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return 0;
}

