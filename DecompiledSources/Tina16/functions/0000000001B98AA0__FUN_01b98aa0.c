/* Ghidra address: 01b98aa0 */
/* Ghidra symbol: FUN_01b98aa0 */


void FUN_01b98aa0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(char *)(param_1 + 0x8aa) = param_2;
  FUN_00660200(*(undefined8 *)(param_1 + 0x8a0));
  if (param_2 == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x7e8);
    uVar2 = FUN_006e2470(uVar1);
    uVar2 = FUN_006dd480(uVar2);
    FUN_006e24b0(uVar1,uVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x7e8);
    uVar2 = FUN_006e2470(uVar1);
    uVar2 = FUN_006dd4e0(uVar2);
    FUN_006e24b0(uVar1,uVar2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x198))(*(longlong **)(param_1 + 0x7e8));
  FUN_006601e0(*(undefined8 *)(param_1 + 0x8a0));
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x7b0),1);
  return;
}

