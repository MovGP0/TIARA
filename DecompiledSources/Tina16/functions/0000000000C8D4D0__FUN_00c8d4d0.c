/* Ghidra address: 00c8d4d0 */
/* Ghidra symbol: FUN_00c8d4d0 */


void FUN_00c8d4d0(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = param_2 & 0xff;
    if ((0 < *(int *)(param_1 + 200 + uVar2 * 0x18)) &&
       (plVar1 = (longlong *)(param_1 + 0xb8 + uVar2 * 0x18), *plVar1 = *plVar1 + param_3,
       *(longlong *)(param_1 + 0x88) != 0)) {
      (**(code **)(param_1 + 0x88))
                (*(undefined8 *)(param_1 + 0x90),param_1,param_2 & 0xffffffff,
                 *(undefined8 *)(param_1 + 0xb8 + uVar2 * 0x18));
    }
  }
  else {
    (**(code **)(*plVar1 + 0x98))(plVar1);
  }
  return;
}

