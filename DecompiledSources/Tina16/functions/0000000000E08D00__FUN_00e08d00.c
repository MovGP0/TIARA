/* Ghidra address: 00e08d00 */
/* Ghidra symbol: FUN_00e08d00 */


void FUN_00e08d00(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 local_1c [3];
  
  if (param_2 == 1) {
    cVar1 = FUN_00e08870(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + 0x20),
                         local_1c);
    if (cVar1 == '\0') {
      FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x103);
    }
    else {
      FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),local_1c[0]);
    }
  }
  else if (param_2 == 2) {
    FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x102);
  }
  else if (param_2 == 3) {
    FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x101);
  }
  else if (param_2 == 6) {
    FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x103);
  }
  return;
}

