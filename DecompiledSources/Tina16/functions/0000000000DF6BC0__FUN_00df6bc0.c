/* Ghidra address: 00df6bc0 */
/* Ghidra symbol: FUN_00df6bc0 */


void FUN_00df6bc0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong in_stack_ffffffffffffffb8;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  
  uVar3 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  local_1c = 0;
  if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
    uVar2 = in_stack_ffffffffffffffb8 & 0xffffffff00000000;
    FUN_01662860(*(longlong *)(param_2 + 0x110),2,0,*(undefined8 *)(lVar1 + 0x58),uVar2,0,0);
    uVar3 = (undefined4)(uVar2 >> 0x20);
  }
  FUN_017de670(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar1 + 0x58),
               &local_1c);
  if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
    FUN_01662860(*(longlong *)(param_2 + 0x110),1,0,*(undefined8 *)(lVar1 + 0x58),
                 CONCAT44(uVar3,local_1c),0,0);
  }
  FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar1 + 0x58),1,
               &local_1c);
  return;
}

