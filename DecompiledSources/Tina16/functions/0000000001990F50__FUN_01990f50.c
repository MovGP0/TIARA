/* Ghidra address: 01990f50 */
/* Ghidra symbol: FUN_01990f50 */


void FUN_01990f50(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = (**(code **)**(undefined8 **)(param_2 + 0x248))(*(undefined8 *)(param_2 + 0x248));
  FUN_00418590(uVar2,&DAT_01a96ff8);
  if (*(char *)(param_2 + 0x2a0) != '\0') {
    iVar1 = FUN_00416db0(*(undefined8 *)PTR_DAT_02001b00,L"{10920985-9400-45D4-B218-55DC7E202202}");
    if (iVar1 != 0) {
      puVar4 = (undefined8 *)(param_2 + 0x1bc);
      puVar5 = (undefined8 *)PTR_DAT_02003ad0;
      for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
      puVar4 = (undefined8 *)(param_2 + 0x13c);
      puVar5 = (undefined8 *)PTR_DAT_02005048;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  return;
}

