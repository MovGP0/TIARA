/* Ghidra address: 01b823f0 */
/* Ghidra symbol: FUN_01b823f0 */


void FUN_01b823f0(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined4 local_1c;
  
  local_1c = CONCAT22(param_3,param_2);
  uVar1 = FUN_00b95a80(local_1c);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x58),uVar1);
  return;
}

