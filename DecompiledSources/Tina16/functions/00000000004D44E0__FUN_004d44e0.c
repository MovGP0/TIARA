/* Ghidra address: 004d44e0 */
/* Ghidra symbol: FUN_004d44e0 */


undefined4 FUN_004d44e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 unaff_RDI;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_2 + 0xa0))(param_2,param_1);
      if (cVar1 != '\0') {
        uVar2 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        goto LAB_004d451d;
      }
    }
  }
  uVar2 = 0;
LAB_004d451d:
  if ((char)uVar2 != '\0') {
    (**(code **)(*param_2 + 0xa8))(param_2,param_1);
  }
  return uVar2;
}

