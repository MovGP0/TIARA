/* Ghidra address: 00a52680 */
/* Ghidra symbol: FUN_00a52680 */


longlong FUN_00a52680(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_00a52700(&PTR_FUN_00a4ffc0,1,param_1);
  FUN_00418240(lVar1 + 0x78,param_1 + 0x78,&DAT_004013d8,0x43);
  puVar3 = (undefined8 *)(param_1 + 0x6c0);
  puVar4 = (undefined8 *)(lVar1 + 0x6c0);
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  *(undefined1 *)((longlong)puVar4 + 2) = *(undefined1 *)((longlong)puVar3 + 2);
  puVar3 = (undefined8 *)(param_1 + 0x703);
  puVar4 = (undefined8 *)(lVar1 + 0x703);
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  *(undefined1 *)((longlong)puVar4 + 2) = *(undefined1 *)((longlong)puVar3 + 2);
  return lVar1;
}

