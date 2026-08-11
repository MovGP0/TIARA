/* Ghidra address: 009856d0 */
/* Ghidra symbol: FUN_009856d0 */


void FUN_009856d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  *(undefined8 *)(lVar1 + 0xc0) = *param_2;
  *(undefined8 *)(lVar1 + 200) = param_2[1];
  return;
}

