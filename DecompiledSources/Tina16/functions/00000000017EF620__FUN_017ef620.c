/* Ghidra address: 017ef620 */
/* Ghidra symbol: FUN_017ef620 */


void FUN_017ef620(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = *(longlong *)(param_1 + 0xb48);
  FUN_010cd780(local_res10[0],*(undefined8 *)(*(longlong *)(param_1 + 0x868) + 0x4e8),lVar1 + 0x628,
               lVar1 + 0x630,lVar1 + 0x650,0);
  FUN_00414480(local_res10);
  return;
}

