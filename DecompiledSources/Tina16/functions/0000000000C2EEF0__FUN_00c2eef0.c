/* Ghidra address: 00c2eef0 */
/* Ghidra symbol: FUN_00c2eef0 */


undefined8 FUN_00c2eef0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_33;
  undefined2 uStack_2b;
  undefined1 uStack_29;
  
  local_33 = *param_2;
  uStack_2b = *(undefined2 *)(param_2 + 1);
  uStack_29 = *(undefined1 *)((longlong)param_2 + 10);
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(param_1,iVar3);
      cVar1 = FUN_0043e2c0(puVar2 + 1,&local_33,0xb);
      if (cVar1 != '\0') {
        return *puVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}

