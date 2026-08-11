/* Ghidra address: 00efae30 */
/* Ghidra symbol: FUN_00efae30 */


void FUN_00efae30(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  longlong local_40 [2];
  
  *param_1 = 0;
  iVar3 = 0;
  local_40[0] = 0;
  if (*(char *)(param_3 + 0x92) == '\0') {
    iVar1 = FUN_00ef7f30(param_2,param_3);
    while ((iVar3 < iVar1 && (*(char *)(param_3 + 0x92) == '\0'))) {
      FUN_00ef7f80(local_40,5,param_3);
      iVar3 = iVar3 + 1;
      cVar4 = '\0';
      uVar2 = FUN_00ef8190(param_2,iVar3);
      while (((short)uVar2 != 5 && (iVar3 < iVar1))) {
        if ((short)uVar2 == 1) {
          cVar4 = cVar4 + '\x01';
        }
        else {
          FUN_00ef7f80(local_40,uVar2,param_3);
        }
        iVar3 = iVar3 + 1;
        uVar2 = FUN_00ef8190(param_2,iVar3);
      }
      FUN_00efa1d0(param_1,local_40[0],cVar4,param_3);
      FUN_00ef81f0(local_40);
      FUN_00ef7d60();
    }
  }
  return;
}

