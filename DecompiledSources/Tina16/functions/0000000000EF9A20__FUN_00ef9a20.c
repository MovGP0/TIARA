/* Ghidra address: 00ef9a20 */
/* Ghidra symbol: FUN_00ef9a20 */


void FUN_00ef9a20(undefined8 *param_1,double param_2,longlong param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar4 = 1;
  do {
    iVar3 = FUN_00ef7f30(*param_1,param_3);
    if ((iVar3 <= iVar4) || (*(char *)(param_3 + 0x92) != '\0')) {
      return;
    }
    while( true ) {
      iVar3 = FUN_00ef7f30(*param_1,param_3);
      if (iVar3 <= iVar4) break;
      sVar1 = FUN_00ef8190(*param_1,iVar4);
      if ((sVar1 == 5) || (*(char *)(param_3 + 0x92) != '\0')) break;
      iVar4 = iVar4 + 1;
    }
    uVar2 = FUN_00ef8190(*param_1,iVar4 + -1);
    dVar5 = (double)FUN_019b7350(uVar2,param_3);
    FUN_019b7640(uVar2,dVar5 / param_2,param_3);
    iVar4 = iVar4 + 1;
  } while( true );
}

