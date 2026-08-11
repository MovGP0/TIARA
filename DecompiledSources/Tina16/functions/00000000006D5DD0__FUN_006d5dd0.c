/* Ghidra address: 006d5dd0 */
/* Ghidra symbol: FUN_006d5dd0 */


void FUN_006d5dd0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10);
  if (iVar1 == -0x228) {
    *(undefined8 *)(param_2 + 0x18) = 1;
    pcVar3 = (code *)FUN_00411550(param_1,0xffac);
    cVar2 = (*pcVar3)(param_1);
    if (cVar2 != '\0') {
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
  }
  else if (iVar1 == -0x227) {
    pcVar3 = (code *)FUN_00411550(param_1,0xffab);
    (*pcVar3)(param_1);
  }
  return;
}

