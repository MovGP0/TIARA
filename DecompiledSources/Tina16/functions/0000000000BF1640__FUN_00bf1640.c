/* Ghidra address: 00bf1640 */
/* Ghidra symbol: FUN_00bf1640 */


undefined8 FUN_00bf1640(undefined8 param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  while ((0 < iVar2 &&
         ((sVar1 = *(short *)(param_2 + -2 + (longlong)iVar2 * 2), sVar1 == 0x20 || (sVar1 == 9)))))
  {
    iVar2 = iVar2 + -1;
  }
  FUN_00416dc0(param_1,param_2,1,iVar2);
  return param_1;
}

