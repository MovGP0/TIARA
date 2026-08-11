/* Ghidra address: 00410a00 */
/* Ghidra symbol: FUN_00410a00 */


void FUN_00410a00(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = 0;
  puVar2 = &DAT_020069a8;
  do {
    FUN_004109e0(&local_38,iVar1,0);
    *puVar2 = local_38;
    puVar2[1] = uStack_30;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 != 8);
  return;
}

