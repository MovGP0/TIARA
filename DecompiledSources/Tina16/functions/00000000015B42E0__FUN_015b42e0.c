/* Ghidra address: 015b42e0 */
/* Ghidra symbol: FUN_015b42e0 */


void FUN_015b42e0(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0x40))(param_1);
  if (param_2 == '\x04') {
    uVar1 = FUN_015abce0();
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x60))(*param_1);
    FUN_015abc70(uVar1,uVar3,uVar2);
  }
  FUN_015a93a0(param_1,param_2);
  return;
}

