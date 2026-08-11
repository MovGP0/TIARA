/* Ghidra address: 012adc40 */
/* Ghidra symbol: FUN_012adc40 */


void FUN_012adc40(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined1 *param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xa8))(*(longlong **)(param_1 + 0xdb8));
  *param_2 = uVar1;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xc0))(*(longlong **)(param_1 + 0xdb8));
  *param_3 = uVar2;
  *param_5 = *(undefined1 *)(param_1 + 0xd90);
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xd8))(*(longlong **)(param_1 + 0xdb8),param_6);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xb8))(*(longlong **)(param_1 + 0xdb8));
  *param_4 = uVar3;
  return;
}

