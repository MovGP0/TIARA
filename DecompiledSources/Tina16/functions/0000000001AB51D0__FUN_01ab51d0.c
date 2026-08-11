/* Ghidra address: 01ab51d0 */
/* Ghidra symbol: FUN_01ab51d0 */


void FUN_01ab51d0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01abd060(*(undefined8 *)(param_1 + 200));
  if (cVar1 != (char)param_2) {
    FUN_01cc8390(*(undefined8 *)(param_1 + 200));
    uVar2 = FUN_01abc400(param_2,*(undefined8 *)(param_1 + 0xd0));
    *(undefined8 *)(param_1 + 200) = uVar2;
    FUN_01cc8360(uVar2);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x58))
                      (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x60))
                      (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x68))
                      (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x70))
                      (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0x98) = uVar2;
  }
  return;
}

