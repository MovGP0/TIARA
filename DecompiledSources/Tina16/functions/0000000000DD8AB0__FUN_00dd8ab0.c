/* Ghidra address: 00dd8ab0 */
/* Ghidra symbol: FUN_00dd8ab0 */


undefined4 FUN_00dd8ab0(longlong param_1,int param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [2];
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                    (*(longlong **)(param_1 + 8),(longlong)param_2,param_3,local_10);
  FUN_006245b0(uVar1);
  return local_10[0];
}

