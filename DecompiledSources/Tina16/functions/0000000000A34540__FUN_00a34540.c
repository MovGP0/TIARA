/* Ghidra address: 00a34540 */
/* Ghidra symbol: FUN_00a34540 */


void FUN_00a34540(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  
  cVar1 = FUN_00a34430(param_1,param_2,param_3,param_4);
  if ((cVar1 != '\0') && (param_4 == 7)) {
    *(ushort *)(param_1 + 0x28) =
         (ushort)**(byte **)(param_1 + 8) * 0x100 + (ushort)(*(byte **)(param_1 + 8))[1];
    *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(*(longlong *)(param_1 + 8) + 2);
    *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(*(longlong *)(param_1 + 8) + 3);
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(*(longlong *)(param_1 + 8) + 4);
    *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(*(longlong *)(param_1 + 8) + 5);
    *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(*(longlong *)(param_1 + 8) + 6);
  }
  return;
}

