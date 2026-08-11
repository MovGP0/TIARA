/* Ghidra address: 01333420 */
/* Ghidra symbol: FUN_01333420 */


undefined8 FUN_01333420(longlong param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  FUN_01331ae0(param_1);
  sVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x28))(*(longlong **)(param_1 + 0x138));
  *(short *)(param_1 + 0x28) = sVar1;
  uVar2 = 0;
  if (sVar1 == 0) {
    FUN_016fe230(L"Number of state variables = 0");
  }
  else {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      uVar2 = FUN_0132def0(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x40) = uVar2;
    }
    else {
      uVar2 = FUN_0132e160(param_1 + 0x40,*(undefined2 *)(param_1 + 0x28),
                           *(undefined2 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x40) = uVar2;
    }
    FUN_0132e440(*(undefined8 *)(param_1 + 0x40));
    uVar2 = FUN_0132f4b0(param_1 + 0xd0,*(undefined8 *)(param_1 + 0x90),
                         (double)*(ushort *)(param_1 + 0x28),0xc6293e5939a08cea,0x3ff0000000000000);
    *(undefined8 *)(param_1 + 0xd0) = uVar2;
    uVar2 = FUN_0132f4b0(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x98),
                         (double)*(ushort *)(param_1 + 0x28),0xc6293e5939a08cea,0x3ff0000000000000);
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    FUN_01330c60(*(undefined8 *)(param_1 + 0x140));
    FUN_01332120(param_1,*(undefined8 *)(param_1 + 0x50),0);
    *(undefined2 *)(param_1 + 0x18) = 0;
    uVar2 = 1;
  }
  return uVar2;
}

