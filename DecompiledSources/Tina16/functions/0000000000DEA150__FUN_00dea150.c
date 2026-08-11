/* Ghidra address: 00dea150 */
/* Ghidra symbol: FUN_00dea150 */


void FUN_00dea150(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  double dVar3;
  undefined1 local_21;
  longlong local_20;
  
  if ((*PTR_DAT_02002b78 != '\0') || (*(char *)(param_2 + 0x335) != '\0')) {
    uVar2 = 0;
    FUN_016ee260(param_1,&local_20,0x20,0);
    dVar3 = (double)FUN_0040c850(*(undefined8 *)(local_20 + 8));
    if (1e-09 < dVar3) {
      dVar3 = (double)FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),CONCAT11(uVar2,1),2,0);
      dVar3 = (dVar3 * dVar3) / *(double *)(local_20 + 8);
      local_21 = *(double *)(local_20 + 0x10) <= dVar3 && dVar3 != *(double *)(local_20 + 0x10);
      uVar1 = FUN_016ebdc0(param_1);
      FUN_01d04b50(uVar1,&local_21);
    }
  }
  return;
}

