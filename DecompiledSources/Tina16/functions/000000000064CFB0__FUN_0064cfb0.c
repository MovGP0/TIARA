/* Ghidra address: 0064cfb0 */
/* Ghidra symbol: FUN_0064cfb0 */


void FUN_0064cfb0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 local_38 [24];
  
  FUN_0064d000(param_1,local_38);
  pcVar1 = (code *)FUN_00411550(param_1,0xffca);
  (*pcVar1)(param_1,param_2,local_38);
  return;
}

