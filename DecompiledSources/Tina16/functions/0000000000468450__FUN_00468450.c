/* Ghidra address: 00468450 */
/* Ghidra symbol: FUN_00468450 */


void FUN_00468450(undefined8 param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  sVar1 = *param_2;
  if (sVar1 == 0) {
    FUN_0041b800(param_1);
  }
  else if (sVar1 == 1) {
    if (DAT_01dc436a != '\0') {
      FUN_00460110(1,9);
    }
    FUN_0041b800(param_1);
  }
  else if (sVar1 == 9) {
    FUN_0041b840(param_1,*(undefined8 *)(param_2 + 4));
  }
  else if (sVar1 == 0x4009) {
    FUN_0041b840(param_1,**(undefined8 **)(param_2 + 4));
  }
  else {
    sVar1 = *param_2;
    cVar2 = FUN_0046eed0(sVar1,&local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_0041b800(param_1);
      cVar2 = FUN_00411110(local_20,&LAB_00468514,uVar3);
      if (cVar2 != '\0') {
        return;
      }
    }
    FUN_00460110(sVar1,9);
  }
  return;
}

