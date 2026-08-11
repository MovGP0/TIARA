/* Ghidra address: 010f0940 */
/* Ghidra symbol: FUN_010f0940 */


ulonglong FUN_010f0940(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((char)param_1[2] == '\0') {
      (**(code **)(*param_1 + 0x50))(param_1,1);
      (**(code **)(*param_1 + 0x98))(param_1,param_2);
    }
  }
  return uVar2 & 0xffffffff;
}

