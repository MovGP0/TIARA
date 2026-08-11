/* Ghidra address: 00723b20 */
/* Ghidra symbol: FUN_00723b20 */


undefined4 FUN_00723b20(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  FUN_007240b0(param_1);
  pcVar2 = (code *)FUN_00411550(param_1,0xffed);
  uVar1 = (*pcVar2)(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x90))(*(longlong **)(param_1 + 0x110));
  return uVar1;
}

