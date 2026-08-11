/* Ghidra address: 01332e10 */
/* Ghidra symbol: FUN_01332e10 */


undefined8 FUN_01332e10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  uVar2 = FUN_0132f4b0(param_1 + 0x30,0,(double)*(ushort *)(param_1 + 0x28),0xc6293e5939a08cea,
                       0x3ff0000000000000);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_0132f4b0(param_1 + 0x38,0x3ff0000000000000,(double)*(ushort *)(param_1 + 0x1a),
                       0xc6293e5939a08cea,0x3ff0000000000000);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  FUN_01330c80(*(undefined8 *)(param_1 + 0x140));
  if ((*(short *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x120) != '\0')) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x148) + 0x885) = 2;
    FUN_01332af0(param_1);
  }
  FUN_01342880(4,*(undefined8 *)(param_1 + 0x148),0,0);
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 1;
  FUN_01332cc0(param_1);
  FUN_0132d960(uVar1,*(undefined8 *)(param_1 + 0x30));
  return uVar1;
}

