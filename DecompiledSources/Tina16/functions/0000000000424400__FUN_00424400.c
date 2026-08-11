/* Ghidra address: 00424400 */
/* Ghidra symbol: FUN_00424400 */


void FUN_00424400(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_2 + 0x78) + 0x60))
                    ((longlong *)**(undefined8 **)(param_2 + 0x78),0);
  if (cVar2 == '\0') {
    (**(code **)(*(longlong *)**(undefined8 **)(param_2 + 0x78) + 0x20))
              ((longlong *)**(undefined8 **)(param_2 + 0x78));
    if (*(char *)(param_2 + 0xb0) == '\0') {
      *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18) = *(undefined4 *)(param_2 + 100);
      *(undefined1 *)(param_2 + 99) = 1;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x68) + 0x18);
      *piVar1 = *piVar1 + -1;
    }
  }
  else {
    (**(code **)(*(longlong *)**(undefined8 **)(param_2 + 0x78) + 0x40))
              ((longlong *)**(undefined8 **)(param_2 + 0x78),param_2 + 0x68);
    piVar1 = (int *)(*(longlong *)(param_2 + 0x68) + 0x10);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*(longlong *)**(undefined8 **)(param_2 + 0x78) + 0x20))
              ((longlong *)**(undefined8 **)(param_2 + 0x78));
  }
  return;
}

