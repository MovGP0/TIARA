/* Ghidra address: 016bb790 */
/* Ghidra symbol: FUN_016bb790 */


undefined8 FUN_016bb790(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18));
  if (((longlong)uVar1 < 0) ||
     (uVar1 <= (ulonglong)
               (*(longlong *)(param_1 + 0x9b0) - *(longlong *)(*(longlong *)(param_1 + 0x18) + 8))))
  {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

