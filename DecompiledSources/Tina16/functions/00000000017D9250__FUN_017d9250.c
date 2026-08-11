/* Ghidra address: 017d9250 */
/* Ghidra symbol: FUN_017d9250 */


void FUN_017d9250(undefined8 param_1,longlong *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(param_2 + 2) = (int)param_2[2] + -1;
  sVar2 = *(short *)(param_2[1] + (longlong)param_3 * 2);
  iVar4 = (int)sVar2;
  *(undefined2 *)(param_2[1] + (longlong)param_3 * 2) = 0xffff;
  if ((int)sVar2 < (int)param_2[2]) {
    FUN_00409a70(*param_2 + (longlong)(iVar4 + 1) * 0x18,*param_2 + (longlong)iVar4 * 0x18,
                 (longlong)(((int)param_2[2] - iVar4) * 0x18));
    FUN_0040d200(*param_2 + (longlong)(int)param_2[2] * 0x18,0x18,0);
    iVar3 = (int)param_2[2] + -1;
    if (iVar4 <= iVar3) {
      iVar3 = (iVar3 - iVar4) + 1;
      do {
        psVar1 = (short *)(param_2[1] +
                          (longlong)*(int *)(*param_2 + 0x10 + (longlong)iVar4 * 0x18) * 2);
        *psVar1 = *psVar1 + -1;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

