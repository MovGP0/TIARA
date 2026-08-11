/* Ghidra address: 010edff0 */
/* Ghidra symbol: FUN_010edff0 */


ulonglong FUN_010edff0(longlong *param_1,undefined8 param_2)

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
    (**(code **)(*param_1 + 0x50))(param_1,1);
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
  }
  return uVar2 & 0xffffffff;
}

