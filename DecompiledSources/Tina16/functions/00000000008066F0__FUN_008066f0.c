/* Ghidra address: 008066f0 */
/* Ghidra symbol: FUN_008066f0 */


undefined8 FUN_008066f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x510) != 0) &&
     (iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x510))
                        (*(undefined8 **)(param_1 + 0x510),param_2,param_3), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_004d46e0(param_1,param_2,param_3);
  return uVar2;
}

