/* Ghidra address: 008362b0 */
/* Ghidra symbol: FUN_008362b0 */


void FUN_008362b0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00836330(param_1,param_2 + param_3);
  cVar1 = FUN_008324f0(*(undefined8 *)(param_1 + 0x4d8),iVar2);
  if (cVar1 != '\0') {
    iVar2 = param_2;
  }
  FUN_008358c0(param_1,iVar2);
  return;
}

