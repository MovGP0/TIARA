/* Ghidra address: 018047a0 */
/* Ghidra symbol: FUN_018047a0 */


void FUN_018047a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  if ((*(char *)(param_2 + 0x18) != '\0') && (*(char *)(param_2 + 0x38) != '\0')) {
    FUN_018044b0(param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_004b6dc0(puVar1,uVar2);
    local_20 = FUN_018054d0(&DAT_01802c58,1,*(undefined8 *)(param_1 + 0x30));
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x30))(*(undefined8 **)(param_1 + 0x30));
    FUN_01803c90(param_2,uVar2);
    FUN_01805d00(local_20,param_2);
    FUN_018039a0(param_2);
    FUN_00410f20(local_20);
  }
  return;
}

