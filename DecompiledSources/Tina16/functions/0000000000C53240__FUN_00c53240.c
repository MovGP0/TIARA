/* Ghidra address: 00c53240 */
/* Ghidra symbol: FUN_00c53240 */


void FUN_00c53240(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(param_2 + 0x240) = *param_3;
  *(undefined8 *)(param_2 + 0x248) = uVar2;
  *(undefined4 *)(param_2 + 0x250) = uVar1;
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}

