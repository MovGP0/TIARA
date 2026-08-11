/* Ghidra address: 00d063e0 */
/* Ghidra symbol: FUN_00d063e0 */


undefined1 FUN_00d063e0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0xf0))(*(longlong **)(param_1 + 0xf8));
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x100);
    (**(code **)(*plVar1 + 0x110))(plVar1,0,0);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0xf0))(*(longlong **)(param_1 + 0xf8));
  *(char *)(param_1 + 0x110) = cVar2;
  if (cVar2 == '\0') goto LAB_00d06554;
  cVar2 = *(char *)(*(longlong *)(param_1 + 0xf8) + 0x1f8);
  if (cVar2 != '\0') {
    if (cVar2 != '\x01') goto LAB_00d06554;
    FUN_0043ea00(local_20,*(undefined8 *)(param_1 + 0x28));
    cVar2 = FUN_00879070(local_20[0],L"CLOSE");
    if (cVar2 == '\0') {
      FUN_0043ea00(&local_28,*(undefined8 *)(param_1 + 0xe0));
      cVar2 = FUN_00879070(local_28,L"CLOSE");
      if (cVar2 != '\0') goto LAB_00d064e5;
      uVar3 = 1;
    }
    else {
LAB_00d064e5:
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x110) = uVar3;
    goto LAB_00d06554;
  }
  FUN_0043ea00(&local_30,*(undefined8 *)(param_1 + 0x28));
  cVar2 = FUN_00879070(local_30,L"KEEP-ALIVE");
  if (cVar2 == '\0') {
    FUN_0043ea00(&local_38,*(undefined8 *)(param_1 + 0xe0));
    cVar2 = FUN_00879070(local_38,L"KEEP-ALIVE");
    if (cVar2 != '\0') goto LAB_00d06548;
    uVar3 = 0;
  }
  else {
LAB_00d06548:
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x110) = uVar3;
LAB_00d06554:
  uVar3 = *(undefined1 *)(param_1 + 0x110);
  FUN_00414560(&local_38,4);
  return uVar3;
}

