/* Ghidra address: 01111610 */
/* Ghidra symbol: FUN_01111610 */


void FUN_01111610(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_006586f0(param_1,param_2);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x40) == 0) {
    iVar1 = FUN_011115a0(param_1);
    iVar3 = iVar1 * ((int)param_1[0xbb] + -1) + 1;
    iVar2 = ((int)param_1[0x13] + -1) / iVar1;
    *(int *)((longlong)param_1 + 0x5d4) = iVar2 + 1;
    iVar1 = iVar1 * iVar2 + 1;
    if (iVar1 < iVar3) {
      iVar1 = iVar3;
    }
    iVar2 = *(int *)((longlong)param_1 + 0x9c);
    if (*(int *)((longlong)param_1 + 0x9c) < *(int *)((longlong)param_1 + 0x5dc)) {
      iVar2 = *(int *)((longlong)param_1 + 0x5dc);
    }
    if ((iVar1 != (int)param_1[0x13]) || (iVar2 != *(int *)((longlong)param_1 + 0x9c))) {
      (**(code **)(*param_1 + 400))
                (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),iVar1,iVar2);
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return;
}

