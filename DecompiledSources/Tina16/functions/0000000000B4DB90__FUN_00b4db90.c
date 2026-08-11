/* Ghidra address: 00b4db90 */
/* Ghidra symbol: FUN_00b4db90 */


void FUN_00b4db90(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00b4dab0(param_1);
  lVar2 = FUN_00b23d20(**(undefined8 **)(param_1 + 0x18),uVar1);
  if (*(char *)(lVar2 + 2) != param_2) {
    *(char *)(lVar2 + 2) = param_2;
    uVar1 = FUN_00b23dd0(**(undefined8 **)(param_1 + 0x18));
    FUN_00b4da60(param_1,uVar1);
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  return;
}

