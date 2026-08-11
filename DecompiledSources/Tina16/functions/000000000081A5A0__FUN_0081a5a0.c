/* Ghidra address: 0081a5a0 */
/* Ghidra symbol: FUN_0081a5a0 */


void FUN_0081a5a0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  cVar1 = FUN_00818440(param_1);
  if (cVar1 != '\0') {
    local_28 = (int)*(short *)(param_2 + 0x10);
    local_24 = (int)*(short *)(param_2 + 0x12);
    local_20 = FUN_008199f0(param_1,&local_28);
    iVar2 = FUN_00819b30(param_1,&local_20);
    *(longlong *)(param_2 + 0x18) = (longlong)iVar2;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

