/* Ghidra address: 01b4a570 */
/* Ghidra symbol: FUN_01b4a570 */


void FUN_01b4a570(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_01995600(param_2,0,0);
  FUN_0153dc60();
  uVar1 = FUN_01542050(&DAT_01541cf8,1,param_2);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}

