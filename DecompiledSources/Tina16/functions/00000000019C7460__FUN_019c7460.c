/* Ghidra address: 019c7460 */
/* Ghidra symbol: FUN_019c7460 */


void FUN_019c7460(longlong param_1,undefined8 param_2)

{
  ulonglong in_stack_ffffffffffffffa8;
  undefined1 uVar1;
  undefined8 local_20;
  undefined1 local_14 [4];
  undefined1 local_10 [8];
  
  local_20 = 0;
  uVar1 = 0;
  FUN_014b7d50(0,param_2,1,0,in_stack_ffffffffffffffa8 & 0xffffffffffffff00,0,local_14);
  FUN_019c42e0(param_1,param_2,local_10,*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),CONCAT11(uVar1,1));
  FUN_00414480(&local_20);
  return;
}

