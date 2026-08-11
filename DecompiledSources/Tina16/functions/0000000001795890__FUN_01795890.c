/* Ghidra address: 01795890 */
/* Ghidra symbol: FUN_01795890 */


void FUN_01795890(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  
  FUN_01794bc0(param_1);
  uVar1 = FUN_00c5f290(&PTR_FUN_00c5d110,1,param_1,*(undefined8 *)(param_1 + 0xd28),
                       *(undefined4 *)(param_1 + 0xd30),param_2,param_3,param_4,param_5,param_6);
  FUN_01794b80(param_1,uVar1);
  return;
}

