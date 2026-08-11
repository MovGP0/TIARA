/* Ghidra address: 01cda020 */
/* Ghidra symbol: FUN_01cda020 */


void FUN_01cda020(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_0411fefb(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_039bba01(uVar1,*(undefined8 *)(param_1 + 0x68));
  return;
}

