/* Ghidra address: 01cafc50 */
/* Ghidra symbol: FUN_01cafc50 */


void FUN_01cafc50(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_01cafae0(&DAT_01caee50,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,param_2
                       ,param_3,param_4);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  return;
}

