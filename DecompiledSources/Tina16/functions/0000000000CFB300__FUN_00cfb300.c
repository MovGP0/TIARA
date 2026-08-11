/* Ghidra address: 00cfb300 */
/* Ghidra symbol: FUN_00cfb300 */


void FUN_00cfb300(void)

{
  char cVar1;
  
  DAT_0201a0a8 = DAT_0201a0a8 + -1;
  if (DAT_0201a0a8 == -1) {
    DAT_01eb2478 = FUN_00cf9290(&DAT_00cf62c8,1);
    cVar1 = FUN_00cf9240(DAT_01eb2478);
    if (cVar1 != '\0') {
      FUN_00cdd790(L"NTLM",&LAB_00cf7e40);
      FUN_00cdd790(L"Negotiate",&LAB_00cf7e40);
      DAT_01eb2480 = 1;
    }
  }
  return;
}

