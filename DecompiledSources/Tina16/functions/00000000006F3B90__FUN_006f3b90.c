/* Ghidra address: 006f3b90 */
/* Ghidra symbol: FUN_006f3b90 */


bool FUN_006f3b90(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  bool bVar1;
  
  bVar1 = *(longlong *)(param_1 + 0x6b0) != 0;
  if (bVar1) {
    (**(code **)(param_1 + 0x6b0))
              (*(undefined8 *)(param_1 + 0x6b8),param_1,param_2,param_3,param_4,param_5);
  }
  return bVar1;
}

