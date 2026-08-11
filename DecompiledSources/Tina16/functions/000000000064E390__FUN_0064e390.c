/* Ghidra address: 0064e390 */
/* Ghidra symbol: FUN_0064e390 */


undefined8 FUN_0064e390(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_006482f0(PTR_PTR_02004550,param_1);
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xe8))
                    (*(longlong **)(param_1 + 0x78),param_2);
  thunk_FUN_0411ff81(uVar1,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),0);
  FUN_00428be0(uVar1,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  return uVar1;
}

