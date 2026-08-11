/* Ghidra address: 014314c0 */
/* Ghidra symbol: FUN_014314c0 */


undefined8 FUN_014314c0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  FUN_00b8fd60(param_2,uVar1,*PTR_DAT_02005310,0,1);
  return param_2;
}

