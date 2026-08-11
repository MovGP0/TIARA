/* Ghidra address: 0045c860 */
/* Ghidra symbol: FUN_0045c860 */


void FUN_0045c860(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  local_58 = *param_2;
  uStack_50 = param_2[1];
  uStack_48 = param_2[2];
  uStack_40 = param_2[3];
  iVar4 = *(int *)(param_1 + 0xa0);
  if (iVar4 < 5) {
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        cVar2 = FUN_0045c830(param_1 + 0x18 + (longlong)iVar3 * 0x20,&local_58);
        if (cVar2 != '\0') {
          FUN_0045c810(&local_78);
          puVar1 = (undefined8 *)(param_1 + 0x18 + (longlong)iVar3 * 0x20);
          *puVar1 = local_78;
          puVar1[1] = uStack_70;
          puVar1[2] = uStack_68;
          puVar1[3] = uStack_60;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    iVar4 = 0;
    do {
      cVar2 = FUN_0045c830(param_1 + 0x18 + (longlong)iVar4 * 0x20,&local_58);
      if (cVar2 != '\0') {
        FUN_0045c810(&local_78);
        puVar1 = (undefined8 *)(param_1 + 0x18 + (longlong)iVar4 * 0x20);
        *puVar1 = local_78;
        puVar1[1] = uStack_70;
        puVar1[2] = uStack_68;
        puVar1[3] = uStack_60;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    iVar4 = 0;
    if (-1 < *(int *)(param_1 + 0xa0) + -5) {
      iVar3 = *(int *)(param_1 + 0xa0) + -4;
      do {
        cVar2 = FUN_0045c830(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0x20,&local_58);
        if (cVar2 != '\0') {
          FUN_0045c810(&local_78);
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0x20);
          *puVar1 = local_78;
          puVar1[1] = uStack_70;
          puVar1[2] = uStack_68;
          puVar1[3] = uStack_60;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

