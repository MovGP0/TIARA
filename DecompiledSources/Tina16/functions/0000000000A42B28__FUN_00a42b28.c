/* Ghidra address: 00a42b28 */
/* Ghidra symbol: FUN_00a42b28 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00a42b28(undefined8 param_1,char *param_2)

{
  undefined1 uVar1;
  char cVar2;
  char *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  char *pcVar3;
  
  cVar2 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar2;
  *in_RAX = *in_RAX + cVar2;
  pcVar3 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)param_2 * 2);
  *pcVar3 = *pcVar3 + cVar2;
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  cVar2 = cVar2 + *in_RAX;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  pcVar3[0x4010] = pcVar3[0x4010] + unaff_BH;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  DAT_6608998d = DAT_6608998d + cVar2;
  if (-1 < DAT_6608998d) {
    *param_2 = *param_2 + cVar2;
  }
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

