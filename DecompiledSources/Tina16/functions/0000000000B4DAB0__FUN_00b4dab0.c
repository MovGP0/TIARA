/* Ghidra address: 00b4dab0 */
/* Ghidra symbol: FUN_00b4dab0 */


undefined2 FUN_00b4dab0(longlong param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           FUN_00b24ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                        *(undefined4 *)(param_1 + 0x20));
  return *puVar1;
}

