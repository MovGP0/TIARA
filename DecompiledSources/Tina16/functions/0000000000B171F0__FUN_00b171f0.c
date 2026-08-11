/* Ghidra address: 00b171f0 */
/* Ghidra symbol: FUN_00b171f0 */


undefined4 FUN_00b171f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_c;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,param_3,&local_c);
  return local_c;
}

