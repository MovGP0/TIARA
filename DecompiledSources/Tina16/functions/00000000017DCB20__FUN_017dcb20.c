/* Ghidra address: 017dcb20 */
/* Ghidra symbol: FUN_017dcb20 */


void FUN_017dcb20(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x18) == '\x02') && (0 < param_2)) {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa0),param_2 + -1);
    cVar1 = FUN_017d7420(uVar2,param_3 + -1);
    if (cVar1 != '\0') {
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    }
  }
  return;
}

