/* Ghidra address: 01d2cd70 */
/* Ghidra symbol: FUN_01d2cd70 */


ulonglong FUN_01d2cd70(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (1 < (int)param_1[9]) {
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2);
    if (cVar1 != '\0') {
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if ((char)param_1[2] == '\0') {
        (**(code **)(*param_1 + 0x50))(param_1,1);
        (**(code **)(*param_1 + 0x70))(param_1,param_2);
      }
      goto LAB_01d2cdbe;
    }
  }
  uVar2 = 0;
LAB_01d2cdbe:
  return uVar2 & 0xffffffff;
}

