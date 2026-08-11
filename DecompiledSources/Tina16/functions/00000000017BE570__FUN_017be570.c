/* Ghidra address: 017be570 */
/* Ghidra symbol: FUN_017be570 */


void FUN_017be570(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  if (param_3 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xaa) = 0;
    goto LAB_017be5b3;
  }
  if (*(char *)((longlong)param_1 + 0xa9) == '\0') {
LAB_017be59e:
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
    if (cVar1 == '\0') goto LAB_017be59e;
    uVar2 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xaa) = uVar2;
LAB_017be5b3:
  if ((char)param_1[1] != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

