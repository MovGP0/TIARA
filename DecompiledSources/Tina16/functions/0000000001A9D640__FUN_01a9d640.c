/* Ghidra address: 01a9d640 */
/* Ghidra symbol: FUN_01a9d640 */


void FUN_01a9d640(longlong param_1,int param_2,int param_3,longlong param_4,int param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_30;
  
  if (0 < param_5) {
    lVar2 = FUN_004095c0((longlong)(param_5 * 8));
    iVar4 = 0;
    iVar6 = param_5;
    if (-1 < param_5 + -1) {
      do {
        lVar5 = (longlong)iVar4;
        local_30 = FUN_00498310(*(short *)(param_4 + lVar5 * 4) + param_2,
                                *(short *)(param_4 + 2 + lVar5 * 4) + param_3);
        uVar3 = FUN_01a9cdf0(param_1,&local_30);
        *(undefined8 *)(lVar2 + lVar5 * 8) = uVar3;
        piVar1 = (int *)(lVar2 + lVar5 * 8);
        FUN_01a98380(param_1,*piVar1,piVar1[1],piVar1,piVar1 + 1);
        *piVar1 = *piVar1 - *(int *)(param_1 + 0x188);
        piVar1[1] = piVar1[1] - *(int *)(param_1 + 0x18c);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (*(char *)(param_1 + 0x12d) == '\0') {
      thunk_FUN_04159037(*(undefined8 *)(param_1 + 0x148),lVar2,param_5);
    }
    FUN_004095f0(lVar2,(longlong)(param_5 * 8));
  }
  return;
}

