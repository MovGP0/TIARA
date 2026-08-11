/* Ghidra address: 0046c9e0 */
/* Ghidra symbol: FUN_0046c9e0 */


undefined4 FUN_0046c9e0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_1c [3];
  
  uVar2 = FUN_0046c930();
  uVar1 = thunk_FUN_041aeaef(uVar2,param_2,local_1c);
  FUN_004607e0(uVar1);
  return local_1c[0];
}

