/* Ghidra address: 0183da20 */
/* Ghidra symbol: FUN_0183da20 */


void FUN_0183da20(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_2;
  FUN_0183d890(auStack_38,param_2);
  FUN_0183d140(param_1,param_2,param_3,*(undefined8 *)(param_3 + 0x128));
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}

