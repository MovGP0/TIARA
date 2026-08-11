/* Ghidra address: 00c11660 */
/* Ghidra symbol: FUN_00c11660 */


void FUN_00c11660(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_res10 [3];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_res10[0] = param_2;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x700) != 0)) {
    (**(code **)(lVar1 + 0x700))(*(undefined8 *)(lVar1 + 0x708),lVar1,local_res10);
  }
  if (local_res10[0] != 0) {
    FUN_004ae7e0(param_1,local_res10[0]);
  }
  return;
}

