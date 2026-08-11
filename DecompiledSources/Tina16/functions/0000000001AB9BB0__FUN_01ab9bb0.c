/* Ghidra address: 01ab9bb0 */
/* Ghidra symbol: FUN_01ab9bb0 */


void FUN_01ab9bb0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_01cc8390(*(undefined8 *)(param_1 + 0x80));
  uVar1 = FUN_01abc400(param_2,*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  FUN_01cc8360(uVar1);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x58))
                    (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x60))
                    (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x68))
                    (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 200) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x70))
                    (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  return;
}

