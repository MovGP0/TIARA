/* Ghidra address: 006e8650 */
/* Ghidra symbol: FUN_006e8650 */


void FUN_006e8650(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x60) + 0x38);
  *(undefined8 *)(lVar1 + 0x520) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar1 + 0x528) = *(undefined8 *)(param_2 + 0x38);
  return;
}

