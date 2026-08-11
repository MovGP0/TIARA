/* Ghidra address: 01bd4d80 */
/* Ghidra symbol: FUN_01bd4d80 */


void FUN_01bd4d80(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_01bd3700(param_1,param_2,param_3,param_4,param_5);
  cVar1 = (**(code **)(*param_1 + 0x290))(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x366) = 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x290))(param_1);
  if ((cVar1 == '\0') || ((char)param_2 != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x6d) = uVar2;
  return;
}

