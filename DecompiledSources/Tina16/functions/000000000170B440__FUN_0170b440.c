/* Ghidra address: 0170b440 */
/* Ghidra symbol: FUN_0170b440 */


void FUN_0170b440(longlong param_1,undefined1 *param_2)

{
  undefined1 local_19;
  
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(longlong **)(param_1 + 0x50),&local_19,1);
  *param_2 = local_19;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
            (*(longlong **)(param_1 + 0x50),param_2 + 1,local_19);
  return;
}

