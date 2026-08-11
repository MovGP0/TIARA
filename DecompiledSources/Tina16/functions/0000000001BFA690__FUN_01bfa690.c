/* Ghidra address: 01bfa690 */
/* Ghidra symbol: FUN_01bfa690 */


void FUN_01bfa690(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_00410f20(uVar1);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if ((plVar2 != (longlong *)0x0) && ((*(ushort *)((longlong)plVar2 + 0x34) & 8) == 0)) {
    (**(code **)(*plVar2 + 0x308))(plVar2,0);
  }
  FUN_01bfa8f0(param_1);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_01bfa910(param_1);
  FUN_004b17c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

