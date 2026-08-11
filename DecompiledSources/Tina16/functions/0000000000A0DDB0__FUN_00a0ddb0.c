/* Ghidra address: 00a0ddb0 */
/* Ghidra symbol: FUN_00a0ddb0 */


void FUN_00a0ddb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x50);
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x1000);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    puVar3 = *(undefined8 **)(param_1 + 0x28);
  }
  puVar3[2] = &LAB_00a0de40;
  puVar3[3] = FUN_00a0de50;
  puVar3[4] = FUN_00a0dee0;
  puVar3[5] = FUN_00a19b20;
  puVar3[6] = &DAT_00a0dfb0;
  puVar3[7] = param_2;
  *puVar3 = 0;
  puVar3[1] = 0;
  return;
}

