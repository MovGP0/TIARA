/* Ghidra address: 00b4dad0 */
/* Ghidra symbol: FUN_00b4dad0 */


void FUN_00b4dad0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_00b4dab0(param_1);
  pcVar2 = (char *)FUN_00b23d20(**(undefined8 **)(param_1 + 0x18),uVar1);
  if (*pcVar2 != param_2) {
    *pcVar2 = param_2;
    uVar1 = FUN_00b23dd0(**(undefined8 **)(param_1 + 0x18));
    FUN_00b4da60(param_1,uVar1);
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  return;
}

