/* Ghidra address: 01192ab0 */
/* Ghidra symbol: FUN_01192ab0 */


undefined8 FUN_01192ab0(longlong *param_1)

{
  short sVar1;
  double dVar2;
  
  sVar1 = *(short *)(*param_1 + 0x1fa4);
  if ((sVar1 == 0x48) || (sVar1 == 0x4c)) {
    dVar2 = (double)FUN_0040c660(*(double *)(*param_1 + 0x20) / (*(double *)(*param_1 + 0x40) * 2.0)
                                );
    *(double *)(*param_1 + 0x20) = *(double *)(*param_1 + 0x40) * 2.0 * dVar2;
    dVar2 = (double)FUN_0040c660(*(double *)(*param_1 + 0x30) / (*(double *)(*param_1 + 0x40) * 2.0)
                                );
    *(double *)(*param_1 + 0x30) = *(double *)(*param_1 + 0x40) * 2.0 * dVar2;
  }
  else {
    if ((sVar1 != 0x50) && (sVar1 != 0x53)) {
      return 3;
    }
    dVar2 = (double)FUN_0040c660(*(double *)(*param_1 + 0x20) / (*(double *)(*param_1 + 0x40) * 2.0)
                                );
    *(double *)(*param_1 + 0x20) = *(double *)(*param_1 + 0x40) * 2.0 * dVar2;
    dVar2 = (double)FUN_0040c660(*(double *)(*param_1 + 0x28) / (*(double *)(*param_1 + 0x40) * 2.0)
                                );
    *(double *)(*param_1 + 0x28) = *(double *)(*param_1 + 0x40) * 2.0 * dVar2;
    dVar2 = (double)FUN_0040c660(*(double *)(*param_1 + 0x30) / (*(double *)(*param_1 + 0x40) * 2.0)
                                );
    *(double *)(*param_1 + 0x30) = *(double *)(*param_1 + 0x40) * 2.0 * dVar2;
    dVar2 = (double)FUN_0040c660(*(double *)(*param_1 + 0x38) / (*(double *)(*param_1 + 0x40) * 2.0)
                                );
    *(double *)(*param_1 + 0x38) = *(double *)(*param_1 + 0x40) * 2.0 * dVar2;
  }
  return 0;
}

