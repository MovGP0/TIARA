/* Ghidra address: 00798190 */
/* Ghidra symbol: FUN_00798190 */


void FUN_00798190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  undefined8 local_20;
  undefined8 *local_18;
  undefined1 local_10;
  
  local_18 = &local_20;
  local_10 = 0x10;
  local_20 = param_3;
  uVar1 = FUN_0044d530(&PTR_FUN_004347c0,CONCAT71((int7)((ulonglong)local_18 >> 8),1) & 0xffffffff,
                       param_2,&local_18,0);
  FUN_004133b0(uVar1,unaff_retaddr);
  return;
}

