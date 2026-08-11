/* Ghidra address: 00842050 */
/* Ghidra symbol: FUN_00842050 */


undefined8 FUN_00842050(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  
  local_20 = FUN_00841fb0(auStack_48,param_3,*param_2);
  uVar1 = FUN_00841fb0(auStack_48,param_3 + 0x38,param_2[1]);
  return CONCAT44(uVar1,local_20);
}

