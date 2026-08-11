/* Ghidra address: 01647020 */
/* Ghidra symbol: FUN_01647020 */


void FUN_01647020(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0x140);
  cVar2 = FUN_01d04d40(*(undefined8 *)(param_2 + 0xd0));
  if ((cVar2 != '\0') && (*(char *)(*(longlong *)(param_2 + 0xd0) + 0x1a0) == '\x04')) {
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x1a8) + 0xd8) =
         *(undefined8 *)(param_2 + 0x100);
  }
  if (*(longlong *)(param_2 + 0x100) != 0) {
    FUN_016419e0(*(undefined8 *)(param_2 + 0x100));
  }
  if (*(longlong *)(param_2 + 0x100) == 0) {
    **(undefined1 **)(param_2 + 0x178) = 1;
    **(undefined1 **)(param_2 + 0x180) = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x100) + 0x78);
    **(undefined1 **)(param_2 + 0x178) = *(undefined1 *)(lVar1 + 0x139e0);
    **(undefined1 **)(param_2 + 0x180) = *(undefined1 *)(lVar1 + 0x139e1);
  }
  FUN_01602e30(L"Do_LoadAMSSubCircuit end",1);
  FUN_01602e30(0,1);
  return;
}

