/* Ghidra address: 00cd20d0 */
/* Ghidra symbol: FUN_00cd20d0 */


longlong FUN_00cd20d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)PTR_DAT_02005380)();
  (**(code **)PTR_DAT_02002c08)(*(undefined8 *)(param_1 + 8),uVar1,param_2 + 4,param_2);
  return param_2;
}

