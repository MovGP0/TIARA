/* Ghidra address: 01867ba0 */
/* Ghidra symbol: FUN_01867ba0 */


longlong FUN_01867ba0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_00609f90(param_3);
  *(bool *)param_2 = cVar1 == '\a';
  uVar2 = (**(code **)(*param_3 + 0x58))(param_3);
  *(undefined1 *)(param_2 + 1) = uVar2;
  uVar3 = FUN_0060a330(param_3);
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)(param_2 + 6) = 100;
  uVar2 = FUN_00609f90(param_3);
  *(undefined1 *)(param_2 + 10) = uVar2;
  return param_2;
}

