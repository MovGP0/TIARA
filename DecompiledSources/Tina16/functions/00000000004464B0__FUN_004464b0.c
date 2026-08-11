/* Ghidra address: 004464b0 */
/* Ghidra symbol: FUN_004464b0 */


int FUN_004464b0(longlong param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  uVar2 = FUN_00446380(param_1,*(undefined8 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  do {
    while( true ) {
      if ((iVar3 == param_2) || (*(int *)(param_1 + 0xa0) <= iVar4)) {
        if ((iVar3 < param_2) || (iVar4 == *(int *)(param_1 + 0xa0))) {
          iVar4 = 0;
        }
        return iVar4;
      }
      sVar1 = FUN_004463c0(param_1,*(undefined8 *)(param_1 + 0xd8),iVar4);
      if (sVar1 == 0x22) break;
      if (sVar1 == 0x27) {
        do {
          iVar5 = iVar4;
          iVar4 = iVar5 + 1;
          if (*(int *)(param_1 + 0xa0) <= iVar4) break;
          sVar1 = FUN_004463c0(param_1,*(undefined8 *)(param_1 + 0xd8),iVar4);
        } while (sVar1 != 0x27);
        if (iVar4 < *(int *)(param_1 + 0xa0)) {
          iVar4 = iVar5 + 2;
        }
      }
      else if (sVar1 == 0x3b) {
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    do {
      iVar5 = iVar4;
      iVar4 = iVar5 + 1;
      if (*(int *)(param_1 + 0xa0) <= iVar4) break;
      sVar1 = FUN_004463c0(param_1,*(undefined8 *)(param_1 + 0xd8),iVar4);
    } while (sVar1 != 0x22);
    if (iVar4 < *(int *)(param_1 + 0xa0)) {
      iVar4 = iVar5 + 2;
    }
  } while( true );
}

