/* Ghidra address: 0154b550 */
/* Ghidra symbol: FUN_0154b550 */


int * FUN_0154b550(int *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = 0x22;
  piVar3 = (int *)&DAT_01f6189c;
  do {
    if (*piVar3 == param_2) {
      piVar4 = param_1;
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined8 *)piVar4 = *(undefined8 *)piVar3;
        piVar3 = piVar3 + 2;
        piVar4 = piVar4 + 2;
      }
      *piVar4 = *piVar3;
      return param_1;
    }
    piVar3 = piVar3 + 0x1f;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_015fcf20(L"get_pin_rec: pin_rec not found",0,0,0);
  return param_1;
}

