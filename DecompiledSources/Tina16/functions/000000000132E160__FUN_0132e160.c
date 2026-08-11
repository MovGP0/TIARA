/* Ghidra address: 0132e160 */
/* Ghidra symbol: FUN_0132e160 */


longlong FUN_0132e160(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  
  sVar2 = (short)param_2;
  sVar3 = (short)param_3;
  if (sVar2 == 0) {
    FUN_0132c0e0(L"matrix dimension n1 must be positive integer",4,0);
  }
  else if (sVar3 == 0) {
    FUN_0132c0e0(L"matrix dimension n2 must be positive integer",4,0);
  }
  if (*param_1 == 0) {
    lVar1 = FUN_0132def0(param_2,param_3);
    *param_1 = lVar1;
    lVar1 = *param_1;
  }
  else {
    lVar1 = FUN_0132c400(*param_1 + 0x10,sVar2 * sVar3);
    *(longlong *)(*param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      FUN_004095f0(*param_1);
      *param_1 = 0;
      FUN_0132c0e0(L"failed to allocate space for block",8,0);
    }
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 8);
    *(short *)*param_1 = sVar2;
    *(short *)(*param_1 + 2) = sVar3;
    *(short *)(*param_1 + 4) = sVar3;
    *(undefined4 *)(*param_1 + 0x18) = 1;
    lVar1 = *param_1;
  }
  return lVar1;
}

