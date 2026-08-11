/* Ghidra address: 00723780 */
/* Ghidra symbol: FUN_00723780 */


void FUN_00723780(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_007278b0(&PTR_FUN_0071e478,1,0);
  *(undefined8 *)(lVar1 + 0x100) = param_1;
  *(code **)(lVar1 + 0xf8) = FUN_007237c0;
  return;
}

