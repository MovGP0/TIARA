/* Ghidra address: 00c64e60 */
/* Ghidra symbol: FUN_00c64e60 */


void FUN_00c64e60(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_00414ad0(param_1 + 0x40,local_res10[0]);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else if (local_res10[0] != 0) {
    iVar1 = FUN_00416db0(local_res10[0],L"Not supported");
    if ((iVar1 != 0) && ((*(ushort *)(*(longlong *)(param_1 + 0xa0) + 0x34) & 0x10) != 0)) {
      FUN_0072d440(L"Dialog Workshop\rCould not insert left panel: not implemented in this version",
                   2,4,0);
    }
  }
  FUN_00414480(local_res10);
  return;
}

