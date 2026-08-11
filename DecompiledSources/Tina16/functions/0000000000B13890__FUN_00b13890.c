/* Ghidra address: 00b13890 */
/* Ghidra symbol: FUN_00b13890 */


undefined8 FUN_00b13890(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(longlong *)(param_1 + 0x20) = lVar1;
    *(longlong *)(lVar1 + 0x58) = param_1;
    *(code **)(lVar1 + 0x50) = FUN_00b13950;
  }
  return *(undefined8 *)(param_1 + 0x20);
}

