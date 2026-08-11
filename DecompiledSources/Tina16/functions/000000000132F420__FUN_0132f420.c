/* Ghidra address: 0132f420 */
/* Ghidra symbol: FUN_0132f420 */


void FUN_0132f420(short *param_1,double param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  double dVar5;
  
  lVar2 = *(longlong *)(param_1 + 4);
  sVar4 = *param_1;
  uVar1 = param_1[1];
  uVar3 = 0;
  do {
    dVar5 = (double)FUN_0040c850(*(undefined8 *)(lVar2 + (ulonglong)((uint)uVar3 * (uint)uVar1) * 8)
                                );
    if (dVar5 < param_2) {
      *(undefined8 *)(lVar2 + (ulonglong)((uint)uVar3 * (uint)uVar1) * 8) = 0;
    }
    uVar3 = uVar3 + 1;
    sVar4 = sVar4 + -1;
  } while (sVar4 != 0);
  return;
}

