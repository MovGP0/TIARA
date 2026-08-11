/* Ghidra address: 0080f6e0 */
/* Ghidra symbol: FUN_0080f6e0 */


void FUN_0080f6e0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_02005478;
  *(undefined8 *)(PTR_PTR_02005478 + 8) = param_1;
  *(code **)puVar1 = FUN_0080f6c0;
  return;
}

