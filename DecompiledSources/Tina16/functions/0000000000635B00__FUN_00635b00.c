/* Ghidra address: 00635b00 */
/* Ghidra symbol: FUN_00635b00 */


void FUN_00635b00(longlong param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  iVar4 = 3;
  puVar2 = &DAT_01df58c8;
  puVar3 = local_30;
  do {
    *puVar3 = CONCAT44(*(int *)(puVar2 + (ulonglong)*(byte *)(param_1 + 0x58) * 0x18 + 4) *
                       *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x2c),
                       *(int *)(puVar2 + (ulonglong)*(byte *)(param_1 + 0x58) * 0x18) *
                       *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x28));
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      local_20 = CONCAT44(local_20._4_4_ + 1,(int)local_20 + -1);
      goto LAB_00635bd1;
    }
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        local_20 = CONCAT44(local_20._4_4_ + -1,(int)local_20 + 1);
      }
      goto LAB_00635bd1;
    }
  }
  local_20 = CONCAT44(local_20._4_4_ + 1,(int)local_20 + 1);
LAB_00635bd1:
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xe0))(*(longlong **)(param_1 + 0x50),local_30,2);
  return;
}

