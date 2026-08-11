/* Ghidra address: 0095ef90 */
/* Ghidra symbol: FUN_0095ef90 */


undefined8 FUN_0095ef90(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_0095d540(&PTR_FUN_00911b78,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
                       param_1,param_2,param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x40))(*(undefined8 **)(param_1 + 0x40),uVar1);
  return uVar1;
}

