/* Ghidra address: 017b5e30 */
/* Ghidra symbol: FUN_017b5e30 */


undefined8 FUN_017b5e30(longlong param_1,int param_2)

{
  undefined8 local_10;
  
  if (param_2 == -1) {
    local_10 = *(undefined8 *)(param_1 + 0x18);
  }
  else if (param_2 == 0) {
    local_10 = *(undefined8 *)(param_1 + 0x48);
  }
  else {
    local_10 = FUN_017b5a60();
  }
  return local_10;
}

