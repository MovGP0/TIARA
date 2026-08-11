/* Ghidra address: 01137420 */
/* Ghidra symbol: FUN_01137420 */


undefined1 FUN_01137420(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_19 = 1;
  if (*(char *)(param_1 + 0x7f9) == '\0') {
    plVar2 = *(longlong **)(param_1 + 0xa18);
    if (plVar2 != (longlong *)0x0) {
      cVar1 = FUN_004113d0(plVar2,&PTR_FUN_01108fb0);
      if (cVar1 == '\0') goto LAB_0113752b;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,&local_1a);
      FUN_00410f20(*(undefined8 *)(param_1 + 0xa18));
    }
    plVar2 = (longlong *)
             FUN_010dbbd0(&PTR_FUN_01109f78,1,*(undefined4 *)(param_1 + 0x7e8),
                          *(undefined8 *)(param_1 + 0x7f0));
    *(longlong **)(param_1 + 0xa18) = plVar2;
    (**(code **)(*plVar2 + 0x48))(plVar2,&local_19);
  }
  else if (*(char *)(param_1 + 0x7f9) == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0xa18);
    if (plVar2 != (longlong *)0x0) {
      cVar1 = FUN_004113d0(plVar2,&PTR_FUN_01109f78);
      if (cVar1 == '\0') goto LAB_0113752b;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,&local_1a);
      FUN_00410f20(*(undefined8 *)(param_1 + 0xa18));
    }
    plVar2 = (longlong *)
             FUN_010dbbd0(&PTR_FUN_01108fb0,1,*(undefined4 *)(param_1 + 0x7e8),
                          *(undefined8 *)(param_1 + 0x7f0));
    *(longlong **)(param_1 + 0xa18) = plVar2;
    (**(code **)(*plVar2 + 0x48))(plVar2,&local_19);
  }
LAB_0113752b:
  FUN_0113cec0(param_1);
  return local_19;
}

