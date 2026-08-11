/* Ghidra address: 014f9670 */
/* Ghidra symbol: FUN_014f9670 */


void FUN_014f9670(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 local_10;
  
  local_10 = *param_3;
  if ((char)param_2 == '\0') {
    FUN_014f94c0(*(undefined8 *)(param_1 + 0x10),param_2,&local_10);
  }
  else if ((char)param_2 == '\x01') {
    FUN_014f94c0(*(undefined8 *)(param_1 + 8),param_2,&local_10);
  }
  return;
}

