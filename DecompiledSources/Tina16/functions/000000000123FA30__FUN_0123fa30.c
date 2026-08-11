/* Ghidra address: 0123fa30 */
/* Ghidra symbol: FUN_0123fa30 */


void FUN_0123fa30(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined4 local_1c;
  
  local_1c = CONCAT22(param_3,param_2);
  uVar1 = FUN_00b95a80(local_1c);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x68),uVar1);
  return;
}

