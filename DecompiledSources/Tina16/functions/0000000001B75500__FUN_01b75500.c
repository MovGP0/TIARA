/* Ghidra address: 01b75500 */
/* Ghidra symbol: FUN_01b75500 */


void FUN_01b75500(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x748) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730))
    ;
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x104);
      puVar4 = (undefined8 *)PTR_DAT_02003ad0;
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x170);
      puVar4 = (undefined8 *)PTR_DAT_02005048;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_0064e030(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10),
                   *(undefined4 *)PTR_DAT_02003ad0);
      (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10) + 0x180))
                (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
    }
  }
  return;
}

