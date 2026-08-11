/* Ghidra address: 004dc070 */
/* Ghidra symbol: FUN_004dc070 */


undefined1 FUN_004dc070(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_58;
  (**(code **)(*param_1 + 0x18))(param_1);
  cVar1 = FUN_00412690(param_1,param_2);
  local_19 = cVar1 == '\0';
  (**(code **)(*param_1 + 0x20))(param_1);
  return local_19;
}

