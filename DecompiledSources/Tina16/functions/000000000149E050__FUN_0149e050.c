/* Ghidra address: 0149e050 */
/* Ghidra symbol: FUN_0149e050 */


undefined4 FUN_0149e050(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01a97e00(param_2);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))
                    (*(longlong **)(param_1 + 0x28),uVar2,param_3,param_4);
  FUN_01a97ea0(param_2,uVar2);
  return uVar1;
}

