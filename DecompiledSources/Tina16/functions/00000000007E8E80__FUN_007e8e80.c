/* Ghidra address: 007e8e80 */
/* Ghidra symbol: FUN_007e8e80 */


undefined8 FUN_007e8e80(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  FUN_00414480(param_1);
  iVar3 = 1;
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  if (0 < iVar4) {
    do {
      uVar1 = *(ushort *)(param_2 + -2 + (longlong)iVar3 * 2);
      if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
        if ((*(short *)(param_2 + -2 + (longlong)iVar3 * 2) == 0x26) && (0 < iVar4 - iVar3)) {
          iVar3 = iVar3 + 1;
          sVar2 = *(short *)(param_2 + -2 + (longlong)iVar3 * 2);
          if (sVar2 != 0x26) {
            FUN_00416780(param_1,sVar2);
          }
        }
      }
      else {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar4);
  }
  return param_1;
}

