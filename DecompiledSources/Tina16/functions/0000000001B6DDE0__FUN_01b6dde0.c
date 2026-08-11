/* Ghidra address: 01b6dde0 */
/* Ghidra symbol: FUN_01b6dde0 */


undefined4 FUN_01b6dde0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 unaff_ESI;
  undefined1 local_29 [9];
  
  if (*(char *)(param_1 + 0x7f9) == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x9d8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar1 = FUN_004113d0(plVar2,&PTR_FUN_010dab30), cVar1 == '\0')) {
      return unaff_ESI;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_29);
      FUN_00410f20(*(undefined8 *)(param_1 + 0x9d8));
    }
    plVar2 = (longlong *)
             FUN_010dc070(&PTR_FUN_010db178,1,*(undefined4 *)(param_1 + 0x7e8),
                          *(undefined8 *)(param_1 + 0x7f0));
    *(longlong **)(param_1 + 0x9d8) = plVar2;
    (**(code **)(*plVar2 + 0x48))(plVar2,local_29);
    FUN_01b6df10(param_1);
  }
  else if (*(char *)(param_1 + 0x7f9) == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x9d8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar1 = FUN_004113d0(plVar2,&PTR_FUN_010db178), cVar1 == '\0')) {
      return unaff_ESI;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_29);
      FUN_00410f20(*(undefined8 *)(param_1 + 0x9d8));
    }
    plVar2 = (longlong *)
             FUN_010dbf40(&PTR_FUN_010dab30,1,*(undefined4 *)(param_1 + 0x7e8),
                          *(undefined8 *)(param_1 + 0x7f0));
    *(longlong **)(param_1 + 0x9d8) = plVar2;
    (**(code **)(*plVar2 + 0x48))(plVar2,local_29);
    FUN_01b6df10(param_1);
  }
  return unaff_ESI;
}

