/* Ghidra address: 009d3c00 */
/* Ghidra symbol: FUN_009d3c00 */


undefined4 FUN_009d3c00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_c;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),param_2,param_3,&local_c);
  return local_c;
}

