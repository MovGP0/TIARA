/* Ghidra address: 0179b9f0 */
/* Ghidra symbol: FUN_0179b9f0 */


void FUN_0179b9f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = *param_2;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar4);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017aaf70);
      if (cVar1 != '\0') {
        puVar3 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar4);
        (**(code **)*puVar3)(puVar3,local_30);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

