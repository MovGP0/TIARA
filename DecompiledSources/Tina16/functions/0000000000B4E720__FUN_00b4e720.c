/* Ghidra address: 00b4e720 */
/* Ghidra symbol: FUN_00b4e720 */


void FUN_00b4e720(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x48);
    uVar2 = *(undefined2 *)(param_1 + 0x4a);
    FUN_00417c40(param_1 + 0x28,param_2 + 0x28,&DAT_00b46050);
    *(undefined2 *)(param_1 + 0x48) = uVar1;
    *(undefined2 *)(param_1 + 0x4a) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    if (*(char *)(param_2 + 8) != '\0') {
      (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
    }
  }
  return;
}

