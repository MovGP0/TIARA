/* Ghidra address: 015e8200 */
/* Ghidra symbol: FUN_015e8200 */


void FUN_015e8200(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 local_1c [3];
  
  if (param_2 < 5) {
    if (param_2 == 4) {
      FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x104);
    }
    else if (param_2 == 1) {
      cVar1 = FUN_00e08700(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + 0x20),
                           local_1c);
      if (cVar1 == '\0') {
        FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x101);
      }
      else {
        FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),local_1c[0]);
      }
    }
    else if (param_2 == 2) {
      FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x102);
    }
    else if (param_2 == 3) {
      FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x103);
    }
  }
  else if (param_2 == 5) {
    FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x105);
  }
  else if (param_2 == 6) {
    FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x106);
  }
  else if (param_2 == 0xb) {
    FUN_00e07d30(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),0x107);
  }
  return;
}

