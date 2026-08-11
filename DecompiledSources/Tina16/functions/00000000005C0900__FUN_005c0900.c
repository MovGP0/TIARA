/* Ghidra address: 005c0900 */
/* Ghidra symbol: FUN_005c0900 */


void FUN_005c0900(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = 0x11;
  local_18 = param_2;
  uVar1 = FUN_0044d530(&PTR_FUN_005bb1e0,1,*(undefined8 *)(&DAT_01de68a8 + (param_1 & 0xff) * 8),
                       &local_18,0);
  FUN_004134c0(uVar1);
  return;
}

