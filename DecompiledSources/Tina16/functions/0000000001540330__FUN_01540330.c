/* Ghidra address: 01540330 */
/* Ghidra symbol: FUN_01540330 */


void FUN_01540330(longlong *param_1,undefined4 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_01540280(&DAT_0153ee20,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,param_2
                      );
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  return;
}

