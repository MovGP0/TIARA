/* Ghidra address: 010f6740 */
/* Ghidra symbol: FUN_010f6740 */


void FUN_010f6740(longlong param_1,longlong param_2,undefined8 param_3,char *param_4,char param_5)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *param_4;
  *param_4 = '\0';
  if (*(longlong *)(param_2 + 0x40) != 0) {
    if (param_5 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x28))
                (*(longlong **)(param_1 + 0x9b0),*(undefined8 *)(param_2 + 0x50),0,param_4);
    }
    (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x28))
              (*(longlong **)(param_1 + 0x9b0),*(undefined8 *)(param_2 + 0x40),0,param_4);
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  if ((cVar1 == '\0') || (*param_4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),*param_4);
  }
  return;
}

