/* Ghidra address: 00a6a310 */
/* Ghidra symbol: FUN_00a6a310 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6a310(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined4 in_register_00000004;
  char unaff_BH;
  undefined1 *unaff_RDI;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  cVar3 = (char)in_EAX + 'S';
  uVar2 = in((short)param_2);
  _DAT_000000a6 = in_EAX;
  *unaff_RDI = uVar2;
  cVar3 = cVar3 + *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar4,cVar3));
  _DAT_c070000000000a6 = CONCAT31(uVar4,cVar3);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,_DAT_c070000000000a6) + 0x4010);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)CONCAT44(in_register_00000004,_DAT_c070000000000a6) =
       *(char *)CONCAT44(in_register_00000004,_DAT_c070000000000a6) + cVar3;
  *(char *)CONCAT44(in_register_00000004,_DAT_c070000000000a6) =
       *(char *)CONCAT44(in_register_00000004,_DAT_c070000000000a6) + cVar3;
  DAT_660b1179 = DAT_660b1179 + cVar3;
  if (-1 < DAT_660b1179) {
    *param_2 = *param_2 + cVar3;
  }
  *(char *)CONCAT44(in_register_00000004,_DAT_c070000000000a6) =
       *(char *)CONCAT44(in_register_00000004,_DAT_c070000000000a6) + cVar3;
  *(char *)CONCAT44(in_register_00000004,_DAT_c070000000000a6) =
       *(char *)CONCAT44(in_register_00000004,_DAT_c070000000000a6) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

