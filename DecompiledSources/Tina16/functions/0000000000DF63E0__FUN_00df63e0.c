/* Ghidra address: 00df63e0 */
/* Ghidra symbol: FUN_00df63e0 */


void FUN_00df63e0(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  ulonglong in_stack_ffffffffffffff98;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 local_3c [7];
  
  uVar5 = (undefined4)(in_stack_ffffffffffffff98 >> 0x20);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  dVar1 = *(double *)(*(longlong *)(lVar3 + 0x18) + 8);
  dVar2 = *(double *)(param_2 + 0x480);
  local_3c[0] = 0;
  if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
    uVar4 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
    FUN_01662860(*(longlong *)(param_2 + 0x110),4,0,*(undefined8 *)(lVar3 + 0x58),uVar4,0,0);
    uVar5 = (undefined4)(uVar4 >> 0x20);
  }
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar3 + 0x58),
               local_3c);
  if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
    FUN_01662860(*(longlong *)(param_2 + 0x110),2,*(longlong *)(lVar3 + 0x18) + 8,
                 *(undefined8 *)(lVar3 + 0x58),CONCAT44(uVar5,local_3c[0]),0,0);
  }
  FUN_017de540(*(undefined8 *)(param_2 + 0xd8),dVar1 * dVar2,*(undefined8 *)(lVar3 + 0x58),1,
               local_3c);
  if (((param_3 != '\b') && (*(char *)(param_2 + 0x325) == '\0')) &&
     (*(char *)(lVar3 + 0x39) == '\0')) {
    if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
      FUN_01662860(*(longlong *)(param_2 + 0x110),0x102,*(undefined8 *)(lVar3 + 0x18),
                   *(undefined8 *)(lVar3 + 0x58),local_3c[0],param_2 + 0x480,0);
    }
    FUN_017de540(*(undefined8 *)(param_2 + 0xd8),
                 **(double **)(lVar3 + 0x18) * *(double *)(param_2 + 0x480),
                 *(undefined8 *)(lVar3 + 0x58),0,local_3c);
  }
  return;
}

