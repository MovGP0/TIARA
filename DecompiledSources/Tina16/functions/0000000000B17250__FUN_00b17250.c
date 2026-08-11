/* Ghidra address: 00b17250 */
/* Ghidra symbol: FUN_00b17250 */


undefined4 FUN_00b17250(longlong param_1,int param_2,undefined2 param_3)

{
  undefined4 local_10 [2];
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),(longlong)param_2,param_3,local_10);
  return local_10[0];
}

