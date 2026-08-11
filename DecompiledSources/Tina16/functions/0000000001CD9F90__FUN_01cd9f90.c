/* Ghidra address: 01cd9f90 */
/* Ghidra symbol: FUN_01cd9f90 */


void FUN_01cd9f90(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_039bba01(uVar1,0);
  thunk_FUN_0416f828(*(undefined8 *)(param_1 + 0x68));
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_041cb0d4(uVar1);
  (**(code **)(*param_2 + 0xf8))
            (param_2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_039a9576(uVar1);
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_039b1e03(uVar1,5);
  return;
}

