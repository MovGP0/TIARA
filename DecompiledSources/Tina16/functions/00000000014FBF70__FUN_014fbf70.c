/* Ghidra address: 014fbf70 */
/* Ghidra symbol: FUN_014fbf70 */


undefined8 FUN_014fbf70(longlong param_1,double param_2)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  
  bVar1 = false;
  iVar2 = 1;
  do {
    if (*(char *)(param_1 + 0x567 + (longlong)iVar2) != *(char *)(param_1 + 0x587 + (longlong)iVar2)
       ) {
      bVar1 = true;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 9);
  if (bVar1) {
    if (1e-12 < **(double **)(param_1 + 8) || **(double **)(param_1 + 8) == 1e-12) {
      dVar3 = **(double **)(param_1 + 8);
    }
    else {
      dVar3 = 2e-08;
    }
    FUN_01aa3d90(dVar3,param_2 + dVar3,0);
  }
  iVar2 = 1;
  do {
    *(undefined1 *)(param_1 + 0x567 + (longlong)iVar2) =
         *(undefined1 *)(param_1 + 0x587 + (longlong)iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 9);
  return 0;
}

