/* Ghidra address: 01a9cf10 */
/* Ghidra symbol: FUN_01a9cf10 */


void FUN_01a9cf10(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0x2c) & 4) != 0) {
    param_2 = 0xffffff;
  }
  uVar1 = FUN_005fbf20(param_2);
  (**(code **)(*param_1 + 200))(param_1,uVar1);
  return;
}

