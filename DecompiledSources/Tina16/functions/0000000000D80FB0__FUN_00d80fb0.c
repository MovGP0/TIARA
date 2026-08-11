/* Ghidra address: 00d80fb0 */
/* Ghidra symbol: FUN_00d80fb0 */


void FUN_00d80fb0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *in_R9;
  undefined8 local_50 [7];
  
  puVar2 = local_50;
  for (lVar1 = 7; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *in_R9;
    in_R9 = in_R9 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_50,&DAT_00d627e8);
  FUN_00417740(local_50,&DAT_00d627e8);
  return;
}

