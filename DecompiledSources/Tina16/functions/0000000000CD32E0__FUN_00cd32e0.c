/* Ghidra address: 00cd32e0 */
/* Ghidra symbol: FUN_00cd32e0 */


longlong FUN_00cd32e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)PTR_DAT_02001ff8)();
  (**(code **)PTR_DAT_02002c08)(*(undefined8 *)(param_1 + 0x20),uVar1,param_2 + 4,param_2);
  return param_2;
}

