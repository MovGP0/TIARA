/* Ghidra address: 01432580 */
/* Ghidra symbol: FUN_01432580 */


undefined8 FUN_01432580(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_01432520(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
            (*(longlong **)(param_1 + 0x20),param_2,(byte)PTR_DAT_020055d8[(uVar1 & 0xff) - 1] - 1);
  return param_2;
}

