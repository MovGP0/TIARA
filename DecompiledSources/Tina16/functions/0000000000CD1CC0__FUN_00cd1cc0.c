/* Ghidra address: 00cd1cc0 */
/* Ghidra symbol: FUN_00cd1cc0 */


undefined8 FUN_00cd1cc0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_819 [2057];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_00414480(param_2);
  }
  else {
    uVar1 = (**(code **)PTR_DAT_02004738)(*(longlong *)(param_1 + 8),local_819,0x801);
    FUN_004167a0(param_2,uVar1);
  }
  return param_2;
}

