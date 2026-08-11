/* Ghidra address: 015d3060 */
/* Ghidra symbol: FUN_015d3060 */


void FUN_015d3060(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_2 + 0xe98) != 0) {
    if ((*(char *)(*(longlong *)(param_2 + 0xee0) + 0x100) == '\0') &&
       (*(char *)(param_2 + 0xebe) != '\x02')) {
      uVar1 = (**(code **)**(undefined8 **)(param_2 + 0xe98))(*(undefined8 *)(param_2 + 0xe98));
      FUN_015d9e90(*(undefined8 *)(param_2 + 0xee0),
                   *(undefined8 *)(*(longlong *)(param_2 + 0xe98) + 8),uVar1,
                   *(longlong *)(param_2 + 0xee0) + 0x250,
                   *(undefined8 *)(*(longlong *)(param_2 + 0xee0) + 0x98),0xffffffff,0);
    }
    FUN_00410f20(*(undefined8 *)(param_2 + 0xe98));
  }
  return;
}

