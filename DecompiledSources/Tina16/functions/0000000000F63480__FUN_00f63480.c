/* Ghidra address: 00f63480 */
/* Ghidra symbol: FUN_00f63480 */


void FUN_00f63480(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 local_34;
  undefined4 local_2c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_34 = (undefined4)(uVar1 >> 0x20);
  uVar3 = FUN_015fd610(uVar1 & 0xffffffff,local_34);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  uVar3 = FUN_015fd610(uVar2 & 0xffffffff,local_34);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  local_2c = (undefined4)(uVar2 >> 0x20);
  uVar3 = FUN_015fd610(uVar2 & 0xffffffff,local_2c);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  uVar3 = FUN_015fd610(uVar1 & 0xffffffff,local_2c);
  *(undefined8 *)(param_1 + 200) = uVar3;
  uVar3 = FUN_015fd610(uVar1 & 0xffffffff,local_34);
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))
            (*(longlong **)(param_1 + 0x10),param_1 + 0xb0,4);
  return;
}

