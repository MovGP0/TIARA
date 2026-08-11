/* Ghidra address: 00bc6510 */
/* Ghidra symbol: FUN_00bc6510 */


undefined8 FUN_00bc6510(longlong param_1,uint *param_2)

{
  short sVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint local_3c [3];
  
  *param_2 = 0;
  uVar2 = FUN_00bc5e20(param_1,6);
  lVar4 = 0;
  while (((sVar1 = **(short **)(param_1 + 0x150), sVar1 != 0 && (sVar1 != 0x7c)) && (sVar1 != 0x29))
        ) {
    lVar3 = FUN_00bc6820(param_1,local_3c);
    if (lVar3 == 0) {
      return 0;
    }
    *param_2 = *param_2 | local_3c[0] & 1;
    if (lVar4 == 0) {
      *param_2 = *param_2 | local_3c[0] & 4;
      lVar4 = lVar3;
    }
    else {
      FUN_00bc5d80(param_1,lVar4,lVar3);
      lVar4 = lVar3;
    }
  }
  if (lVar4 == 0) {
    FUN_00bc5e20(param_1,9);
  }
  return uVar2;
}

