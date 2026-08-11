/* Ghidra address: 017a6700 */
/* Ghidra symbol: FUN_017a6700 */


void FUN_017a6700(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(char *)(param_1 + 0x7b2) = param_2;
  FUN_00660200(*(undefined8 *)(param_1 + 0x780));
  if (param_2 == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x6f0);
    uVar2 = FUN_006e2470(uVar1);
    uVar2 = FUN_006dd480(uVar2);
    FUN_006e24b0(uVar1,uVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x6f0);
    uVar2 = FUN_006e2470(uVar1);
    uVar2 = FUN_006dd4e0(uVar2);
    FUN_006e24b0(uVar1,uVar2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x198))(*(longlong **)(param_1 + 0x6f0));
  FUN_006601e0(*(undefined8 *)(param_1 + 0x780));
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x798),1);
  return;
}

