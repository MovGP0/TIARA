/* Ghidra address: 00de5740 */
/* Ghidra symbol: FUN_00de5740 */


void FUN_00de5740(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_004b6e40(*(undefined8 *)(param_1 + 0x18),(longlong)param_3);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),param_2,param_3);
  return;
}

