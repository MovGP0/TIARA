/* Ghidra address: 008925b0 */
/* Ghidra symbol: FUN_008925b0 */


void FUN_008925b0(longlong *param_1,undefined8 param_2,undefined1 param_3,char param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_4 == '\0') {
    uVar1 = 0;
    uVar2 = 0xb;
  }
  else if (param_4 == '\x01') {
    uVar1 = 0x29;
    uVar2 = 0xb;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    FUN_0089bf30(param_1);
  }
  (**(code **)(*param_1 + 0xd0))(param_1,param_2,uVar1,uVar2,param_3);
  return;
}

