/* Ghidra address: 0040bcd0 */
/* Ghidra symbol: FUN_0040bcd0 */


ulonglong FUN_0040bcd0(undefined8 param_1)

{
  int iVar1;
  double dVar2;
  ulonglong uVar3;
  undefined8 local_28;
  undefined8 local_20 [3];
  
  dVar2 = (double)FUN_0040c850(param_1);
  if (0.7853981633974483 <= dVar2) {
    iVar1 = FUN_0040b760(param_1,local_20,&local_28);
    if (iVar1 == 0) {
      uVar3 = FUN_0040bb40(local_20[0],local_28);
    }
    else if (iVar1 == 1) {
      uVar3 = FUN_0040bc10(local_20[0],local_28);
      uVar3 = uVar3 ^ 0x8000000000000000;
    }
    else if (iVar1 == 2) {
      uVar3 = FUN_0040bb40(local_20[0],local_28);
      uVar3 = uVar3 ^ 0x8000000000000000;
    }
    else if (iVar1 == 3) {
      uVar3 = FUN_0040bc10(local_20[0],local_28);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = FUN_0040bb40(param_1,0);
  }
  return uVar3;
}

