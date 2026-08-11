/* Ghidra address: 01cc86b0 */
/* Ghidra symbol: FUN_01cc86b0 */


undefined4 FUN_01cc86b0(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_01cc7e10(param_1,param_2,param_3,0);
  uVar2 = FUN_00c44470(*param_3,0xc059000000000000);
  *param_3 = uVar2 ^ 0x8000000000000000;
  return uVar1;
}

