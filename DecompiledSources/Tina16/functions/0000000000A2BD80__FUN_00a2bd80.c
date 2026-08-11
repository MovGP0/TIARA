/* Ghidra address: 00a2bd80 */
/* Ghidra symbol: FUN_00a2bd80 */


undefined8 FUN_00a2bd80(undefined8 param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  undefined **ppuVar3;
  
  cVar2 = '\0';
  ppuVar3 = &PTR_u_content_box_01e71048;
  do {
    iVar1 = FUN_00416db0(*ppuVar3,param_1);
    if (iVar1 == 0) {
      *param_2 = cVar2;
      return 1;
    }
    cVar2 = cVar2 + '\x01';
    ppuVar3 = ppuVar3 + 1;
  } while (cVar2 != '\x02');
  return 0;
}

