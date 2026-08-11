/* Ghidra address: 017d7420 */
/* Ghidra symbol: FUN_017d7420 */


ulonglong FUN_017d7420(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined4 local_2c [3];
  
  if (param_2 < 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_017d7470(param_1,param_2,local_2c);
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),cVar1 == '\0');
    if (cVar1 == '\0') {
      FUN_017d7510(param_1,local_2c[0],param_2);
    }
  }
  return uVar2 & 0xffffffff;
}

