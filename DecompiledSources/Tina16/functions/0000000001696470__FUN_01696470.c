/* Ghidra address: 01696470 */
/* Ghidra symbol: FUN_01696470 */


undefined8 FUN_01696470(longlong param_1,short param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_01695520(*(undefined8 *)(param_1 + 0x160));
  if ((cVar1 != '\0') &&
     (((iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),&DAT_016964e0), iVar2 == 0 ||
       (iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),&LAB_016964f0), iVar2 == 0)) &&
      (param_2 == 0x23)))) {
    return 1;
  }
  return 0;
}

