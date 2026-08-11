/* Ghidra address: 01541180 */
/* Ghidra symbol: FUN_01541180 */


void FUN_01541180(longlong *param_1,undefined4 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_01541040(&DAT_01540778,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,param_2
                      );
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  return;
}

