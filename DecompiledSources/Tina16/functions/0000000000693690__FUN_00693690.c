/* Ghidra address: 00693690 */
/* Ghidra symbol: FUN_00693690 */


void FUN_00693690(longlong *param_1,longlong param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *(short *)(param_2 + 10);
  if ((((sVar1 == 10) || (sVar1 == 9)) || (sVar1 == 8)) || ((sVar1 == 7 || (sVar1 == 1)))) {
    if ((*(short *)(param_2 + 10) == 7) || (*(short *)(param_2 + 10) == 1)) {
      uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x260))((longlong *)param_1[2]);
      *(undefined4 *)(param_1 + 0x12) = uVar2;
    }
    if ((int)param_1[0x11] != 0) {
      FUN_006926b0(param_1);
    }
    *(undefined1 *)((longlong)param_1 + 100) = 0;
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}

