/* Ghidra address: 01caffe0 */
/* Ghidra symbol: FUN_01caffe0 */


undefined8 FUN_01caffe0(longlong param_1,short param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = *(short *)(param_1 + 0x10);
  sVar2 = 0;
  do {
    sVar1 = FUN_01caffc0(param_1,sVar2);
    if (sVar1 == param_2) {
      return 1;
    }
    sVar2 = sVar2 + 1;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  return 0;
}

