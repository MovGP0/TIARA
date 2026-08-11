/* Ghidra address: 00a84920 */
/* Ghidra symbol: FUN_00a84920 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00a84920(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char in_AL;
  char cVar3;
  undefined7 in_register_00000001;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)param_2 * 2);
  *pcVar1 = *pcVar1 + in_AL;
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  cVar3 = in_AL + *(char *)CONCAT71(in_register_00000001,in_AL);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar3) + 0x4010);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  DAT_660cb785 = DAT_660cb785 + cVar3;
  if (-1 < DAT_660cb785) {
    *param_2 = *param_2 + cVar3;
  }
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

