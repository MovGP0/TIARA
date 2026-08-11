/* Ghidra address: 018cd810 */
/* Ghidra symbol: FUN_018cd810 */


void FUN_018cd810(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  char local_29;
  undefined8 local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_29 = '\0';
  iVar2 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))();
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_28 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                           (*(longlong **)(param_2 + 0x80),local_1c);
      cVar1 = FUN_004113d0(local_28,&PTR_FUN_01925478);
      if ((cVar1 != '\0') && (cVar1 = FUN_0195f670(local_28,7), cVar1 != '\0')) {
        local_29 = '\x01';
        FUN_01963460(local_28);
      }
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((local_29 != '\0') && (*(char *)(param_2 + 0x230) == '\0')) {
    (**(code **)(*param_1 + 0x70))(param_1,param_2);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x228);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x22c);
    *(undefined1 *)(param_1 + 0xf) = 1;
    (**(code **)(*param_1 + 0x68))(param_1,param_2,0);
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return;
}

