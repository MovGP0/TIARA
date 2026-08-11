/* Ghidra address: 014a47b0 */
/* Ghidra symbol: FUN_014a47b0 */


void FUN_014a47b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_9be [2107];
  undefined8 local_183;
  undefined8 local_86;
  
  FUN_00417580(local_9be,&DAT_01d0d0b8);
  FUN_01d31180(*param_1,0xf292,0x10,0x6e);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_9be,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_9be,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  puVar3 = &local_183;
  puVar4 = &local_86;
  for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
  *(undefined2 *)((longlong)puVar4 + 4) = *(undefined2 *)((longlong)puVar3 + 4);
  FUN_01d311c0(*param_1,&local_86,0x6e);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_9be,&DAT_01d0d0b8);
  return;
}

