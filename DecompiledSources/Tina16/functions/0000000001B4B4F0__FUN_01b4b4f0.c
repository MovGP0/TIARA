/* Ghidra address: 01b4b4f0 */
/* Ghidra symbol: FUN_01b4b4f0 */


void FUN_01b4b4f0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_01b4b280(&DAT_01b4ae48,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,param_2
                       ,param_3);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  return;
}

