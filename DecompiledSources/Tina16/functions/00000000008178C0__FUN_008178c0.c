/* Ghidra address: 008178c0 */
/* Ghidra symbol: FUN_008178c0 */


void FUN_008178c0(longlong param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar2 = FUN_00814e80(param_1,param_2,param_3);
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == -1) {
    if (*(char *)(param_1 + 0xc1) != '\0') {
      cVar1 = FUN_00813d90(param_1);
      if (cVar1 != '\0') {
        uVar3 = FUN_00813d00(param_1,0xf);
        uVar4 = FUN_00813d00(param_1,0xf);
        FUN_004238d0(&local_38,0,0,uVar3,uVar4);
        local_50 = local_38;
        uStack_48 = uStack_30;
        local_40 = param_2;
        local_3c = param_3;
        cVar1 = FUN_00423210(&local_50,&local_40);
        if (cVar1 != '\0') {
          FUN_00817b20(param_1);
        }
      }
    }
  }
  else {
    FUN_00813f60(param_1,1);
  }
  if (*(char *)(param_1 + 0xc1) != '\0') {
    iVar2 = FUN_00814e10(param_1,param_2,param_3);
    *(int *)(param_1 + 0x48) = iVar2;
    *(int *)(param_1 + 0xbc) = iVar2;
    if (iVar2 != -1) {
      FUN_00814f60(param_1);
    }
  }
  return;
}

