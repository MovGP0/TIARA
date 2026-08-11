/* Ghidra address: 00df7540 */
/* Ghidra symbol: FUN_00df7540 */


void FUN_00df7540(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong in_stack_ffffffffffffff98;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_3c [7];
  
  uVar5 = (undefined4)(in_stack_ffffffffffffff98 >> 0x20);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 8);
  local_3c[0] = 0;
  if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
    uVar2 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
    FUN_01662860(*(longlong *)(param_2 + 0x110),4,*(longlong *)(lVar1 + 0x18) + 8,
                 *(undefined8 *)(lVar1 + 0x58),uVar2,0,0);
    uVar5 = (undefined4)(uVar2 >> 0x20);
  }
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),uVar4,*(undefined8 *)(lVar1 + 0x58),local_3c);
  if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
    uVar3 = CONCAT44(uVar5,local_3c[0]);
    FUN_01662860(*(longlong *)(param_2 + 0x110),4,*(longlong *)(lVar1 + 0x18) + 8,
                 *(undefined8 *)(lVar1 + 0x58),uVar3,0,0);
    uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),uVar4,*(undefined8 *)(lVar1 + 0x58),local_3c);
  if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
    uVar4 = CONCAT44(uVar5,local_3c[0]);
    FUN_01662860(*(longlong *)(param_2 + 0x110),4,0,*(undefined8 *)(lVar1 + 0x58),uVar4,0,0);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar1 + 0x58),
               local_3c);
  if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
    uVar4 = CONCAT44(uVar5,local_3c[0]);
    FUN_01662860(*(longlong *)(param_2 + 0x110),4,0,*(undefined8 *)(lVar1 + 0x58),uVar4,0,0);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar1 + 0x58),
               local_3c);
  if (((param_3 != '\b') && (*(char *)(param_2 + 0x325) == '\0')) &&
     (*(char *)(lVar1 + 0x39) == '\0')) {
    uVar2 = **(ulonglong **)(lVar1 + 0x18);
    if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
      FUN_01662860(*(longlong *)(param_2 + 0x110),0x101,*(ulonglong **)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x58),CONCAT44(uVar5,local_3c[0]),0,1);
    }
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),uVar2 ^ 0x8000000000000000,
                 *(undefined8 *)(lVar1 + 0x58),0,local_3c);
    if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
      FUN_01662860(*(longlong *)(param_2 + 0x110),0x101,*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x58),local_3c[0],0,1);
    }
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),uVar2 ^ 0x8000000000000000,
                 *(undefined8 *)(lVar1 + 0x58),0,local_3c);
  }
  return;
}

