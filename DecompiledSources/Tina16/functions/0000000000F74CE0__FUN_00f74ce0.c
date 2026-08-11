/* Ghidra address: 00f74ce0 */
/* Ghidra symbol: FUN_00f74ce0 */


void FUN_00f74ce0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1,iVar3);
      FUN_00f6eb60(uVar2,&local_3c,&local_40,&local_44,&local_48);
      cVar1 = FUN_00f60630(&local_38,local_3c,local_40);
      if ((((cVar1 != '\0') && (cVar1 = FUN_00f60630(&local_38,local_44,local_40), cVar1 != '\0'))
          && (cVar1 = FUN_00f60630(&local_38,local_44,local_48), cVar1 != '\0')) &&
         (cVar1 = FUN_00f60630(&local_38,local_3c,local_48), cVar1 != '\0')) {
        FUN_00f6f900(uVar2,8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

