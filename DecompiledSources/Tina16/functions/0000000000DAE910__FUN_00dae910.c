/* Ghidra address: 00dae910 */
/* Ghidra symbol: FUN_00dae910 */


void FUN_00dae910(longlong *param_1,undefined4 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_00dae860(&DAT_00dada08,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,param_2
                      );
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  return;
}

