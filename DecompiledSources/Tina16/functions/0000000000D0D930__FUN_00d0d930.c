/* Ghidra address: 00d0d930 */
/* Ghidra symbol: FUN_00d0d930 */


void FUN_00d0d930(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0x40))(param_1);
  if ((char)param_2 == '\x04') {
    uVar1 = FUN_00cd7960();
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x60))(*param_1);
    FUN_00cd7950(uVar1,uVar3,uVar2);
  }
  FUN_00cd5720(param_1,param_2);
  return;
}

