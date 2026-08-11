/* Ghidra address: 00af1460 */
/* Ghidra symbol: FUN_00af1460 */


void FUN_00af1460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_00af2f30(param_1);
  if (cVar2 == '\0') {
    uVar1 = FUN_00a01d40(&PTR_FUN_009f2d50,1,param_2,param_3,0x4b0);
    FUN_00af0d00(param_1,uVar1,param_3,param_4);
  }
  return;
}

