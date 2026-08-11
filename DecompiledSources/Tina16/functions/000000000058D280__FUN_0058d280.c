/* Ghidra address: 0058d280 */
/* Ghidra symbol: FUN_0058d280 */


void FUN_0058d280(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = **(char **)*param_2;
  if ((cVar1 != '\x05') && (cVar1 != '\n')) {
    if (cVar1 == '\v') {
      FUN_00591400(&LAB_0058e4f8,param_1,param_2,param_3);
      goto code_r0x0058d300;
    }
    if (cVar1 != '\x12') goto code_r0x0058d300;
  }
  FUN_004168b0(&local_10,param_3);
  FUN_0058cfc0(param_1,param_2,local_10);
code_r0x0058d300:
  FUN_00414480(&local_10);
  return;
}

