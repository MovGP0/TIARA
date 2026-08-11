/* Ghidra address: 00c8d430 */
/* Ghidra symbol: FUN_00c8d430 */


void FUN_00c8d430(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xe8);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = param_2 & 0xff;
    piVar1 = (int *)(param_1 + 200 + uVar3 * 0x18);
    *piVar1 = *piVar1 + 1;
    if (*(int *)(param_1 + 200 + uVar3 * 0x18) == 1) {
      *(undefined8 *)(param_1 + 0xc0 + uVar3 * 0x18) = param_3;
      *(undefined8 *)(param_1 + 0xb8 + uVar3 * 0x18) = 0;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        (**(code **)(param_1 + 0x98))
                  (*(undefined8 *)(param_1 + 0xa0),param_1,param_2 & 0xffffffff,param_3);
      }
    }
  }
  else {
    (**(code **)(*plVar2 + 0x90))(plVar2);
  }
  return;
}

