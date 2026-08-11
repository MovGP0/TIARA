/* Ghidra address: 004be960 */
/* Ghidra symbol: FUN_004be960 */


undefined8 FUN_004be960(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  short *psVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = (undefined1 *)*param_2;
  do {
    if (puVar3 == &LAB_00474bd8) {
      if (*(longlong *)(param_1 + 0x108) == 0) {
        uVar4 = FUN_004a09a0(param_3);
      }
      else {
        uVar4 = FUN_004a0740(*(longlong *)(param_1 + 0x108),param_3);
      }
      return uVar4;
    }
    psVar2 = (short *)FUN_004a08f0(puVar3);
    if (psVar2 != (short *)0x0) {
      iVar6 = (int)*psVar2;
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar4 = **(undefined8 **)(psVar2 + (longlong)iVar5 * 4 + 1);
          cVar1 = FUN_00410be0(uVar4,param_3);
          if (cVar1 != '\0') {
            return uVar4;
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    puVar3 = (undefined1 *)FUN_00410ca0(puVar3);
  } while( true );
}

