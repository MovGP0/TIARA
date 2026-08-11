/* Ghidra address: 01bfd460 */
/* Ghidra symbol: FUN_01bfd460 */


void FUN_01bfd460(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong local_30 [2];
  
  local_30[0] = 0;
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar2 == '\0') goto code_r0x01bfd64f;
  if (param_1[0x10] != 0) {
    if (param_3 == '\0') {
LAB_01bfd4cf:
      (**(code **)(*(longlong *)param_1[0x10] + 0x128))
                ((longlong *)param_1[0x10],*(undefined1 *)(param_2 + 0xd9));
    }
    else {
      cVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0xf0))((longlong *)param_1[0x10]);
      if (cVar2 == '\x01') goto LAB_01bfd4cf;
    }
    if ((param_3 == '\0') || (*(longlong *)(param_1[0x10] + 0xf0) == 0)) {
      FUN_00414ad0(param_1[0x10] + 0xf0,*(undefined8 *)(param_2 + 0xf8));
    }
    if ((param_3 == '\0') || (*(longlong *)(param_1[0x10] + 0x1f8) == 0)) {
      lVar1 = param_1[0x10];
      *(undefined8 *)(lVar1 + 0x1f8) = *(undefined8 *)(param_2 + 0x98);
      *(undefined8 *)(lVar1 + 0x200) = *(undefined8 *)(param_2 + 0xa0);
    }
  }
  if (param_3 == '\0') {
LAB_01bfd58e:
    FUN_01bfdfd0(param_1,*(undefined8 *)(param_2 + 0xd0));
  }
  else {
    FUN_01bfd990(param_1,local_30);
    if (local_30[0] == 0) goto LAB_01bfd58e;
  }
  if ((param_3 == '\0') || ((int)param_1[0x14] == 0)) {
    FUN_01bfe1b0(param_1,*(undefined4 *)(param_2 + 0x110));
  }
  if ((param_3 == '\0') || (*(short *)((longlong)param_1 + 0x8c) == 0)) {
    FUN_01bfe3e0(param_1,*(undefined2 *)(param_2 + 0x102));
  }
  if ((param_3 == '\0') || ((char)param_1[0xb] == '\x01')) {
    (**(code **)(*param_1 + 0x60))(param_1,*(undefined1 *)(param_2 + 0x100));
  }
  if ((param_3 == '\0') || (*(int *)((longlong)param_1 + 0xac) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xe0);
  }
code_r0x01bfd64f:
  FUN_00414480(local_30);
  return;
}

