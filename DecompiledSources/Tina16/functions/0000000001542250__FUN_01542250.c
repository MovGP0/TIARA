/* Ghidra address: 01542250 */
/* Ghidra symbol: FUN_01542250 */


void FUN_01542250(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  
  uVar1 = FUN_01d34560(&PTR_FUN_01542fc0,1,5,5);
  *(undefined8 *)(param_1 + 8) = uVar1;
  iVar4 = -1;
  bVar2 = false;
  do {
    iVar4 = iVar4 + 1;
    if (iVar4 < *(int *)(param_2 + 0x10)) {
      uVar1 = FUN_00b94e60(param_2,iVar4);
      cVar3 = FUN_01542740(uVar1);
      if (cVar3 != '\0') {
        FUN_00b94e60(param_2,iVar4);
        uVar1 = FUN_00b94e60(param_2,iVar4);
        cVar3 = FUN_0198a580(uVar1);
        if (cVar3 == '\x04') {
          uVar1 = FUN_00b94e60(param_2,iVar4);
          FUN_01543330(*(undefined8 *)(param_1 + 8),uVar1);
        }
      }
    }
    else {
      bVar2 = true;
    }
  } while (!bVar2);
  return;
}

