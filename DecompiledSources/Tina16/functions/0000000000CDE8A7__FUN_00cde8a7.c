/* Ghidra address: 00cde8a7 */
/* Ghidra symbol: FUN_00cde8a7 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00cde8a7(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  char in_AL;
  char cVar3;
  byte bVar4;
  undefined7 in_register_00000001;
  undefined7 uVar6;
  undefined1 *unaff_RDI;
  char *pcVar5;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) - in_AL;
  pcVar2 = (code *)swi(0);
  pcVar5 = (char *)(*pcVar2)((byte)param_1 + *(char *)CONCAT71(in_register_00000001,in_AL) +
                             (char)((ulonglong)param_1 >> 8) +
                             CARRY1((byte)param_1,*(byte *)CONCAT71(in_register_00000001,in_AL)));
  uVar6 = (undefined7)((ulonglong)pcVar5 >> 8);
  cVar3 = (char)pcVar5;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  bVar4 = cVar3 + 'S' + *(char *)CONCAT71(uVar6,cVar3 + 'S');
  *(byte *)CONCAT71(uVar6,bVar4) = *(byte *)CONCAT71(uVar6,bVar4) | bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

