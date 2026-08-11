/* Ghidra address: 00de15d0 */
/* Ghidra symbol: FUN_00de15d0 */


undefined8 FUN_00de15d0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0041b800(param_1 + 0x4d8);
  (**(code **)**(undefined8 **)(param_1 + 0x4b0))
            (*(undefined8 **)(param_1 + 0x4b0),&DAT_00de1638,uVar1);
  uVar1 = FUN_0041b800(param_1 + 0x4e0);
  (**(code **)**(undefined8 **)(param_1 + 0x4b0))
            (*(undefined8 **)(param_1 + 0x4b0),&DAT_00de1648,uVar1);
  return 0;
}

