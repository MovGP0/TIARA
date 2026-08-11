/* Ghidra address: 00df1fd0 */
/* Ghidra symbol: FUN_00df1fd0 */


void FUN_00df1fd0(longlong param_1,longlong param_2,char param_3,ulonglong param_4,double param_5)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  ulonglong in_stack_ffffffffffffff98;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 local_3c [5];
  
  uVar6 = (undefined4)(in_stack_ffffffffffffff98 >> 0x20);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  dVar4 = *(double *)(*(longlong *)(lVar2 + 0x18) + 8);
  if (*(char *)(lVar2 + 0x39) == '\0') {
    dVar4 = dVar4 * *(double *)(param_2 + 0x480);
  }
  local_3c[0] = 0;
  if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
    uVar5 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
    FUN_01662860(*(longlong *)(param_2 + 0x110),4,0,*(undefined8 *)(lVar2 + 0x58),uVar5,0,0);
    uVar6 = (undefined4)(uVar5 >> 0x20);
  }
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar2 + 0x58),
               local_3c);
  lVar3 = *(longlong *)(param_2 + 0x110);
  if (*(char *)(lVar3 + 10) != '\0') {
    if (*(char *)(lVar2 + 0x39) == '\0') {
      FUN_01662860(lVar3,1,*(longlong *)(lVar2 + 0x18) + 8,*(undefined8 *)(lVar2 + 0x58),
                   CONCAT44(uVar6,local_3c[0]),param_2 + 0x480,0);
    }
    else {
      FUN_01662860(lVar3,1,*(longlong *)(lVar2 + 0x18) + 8,*(undefined8 *)(lVar2 + 0x58),
                   CONCAT44(uVar6,local_3c[0]),0,0);
    }
  }
  uVar6 = local_3c[0];
  FUN_017de390(*(undefined8 *)(param_2 + 0xd8),dVar4,*(undefined8 *)(lVar2 + 0x58),1,local_3c);
  if (((param_3 != '\b') && (*(char *)(param_2 + 0x325) == '\0')) &&
     (*(char *)(lVar2 + 0x39) == '\0')) {
    dVar4 = **(double **)(lVar2 + 0x18);
    dVar1 = *(double *)(param_2 + 0x480);
    if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
      FUN_01662860(*(longlong *)(param_2 + 0x110),0x101,*(double **)(lVar2 + 0x18),
                   *(undefined8 *)(lVar2 + 0x58),local_3c[0],param_2 + 0x480,1);
    }
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),-(dVar4 * dVar1),*(undefined8 *)(lVar2 + 0x58),0,
                 local_3c);
  }
  if (param_3 == '\b') {
    FUN_017de420(*(undefined8 *)(param_2 + 0xd8),
                 param_5 * *(double *)(*(longlong *)(lVar2 + 0x18) + 0x10),
                 *(undefined8 *)(lVar2 + 0x58),uVar6);
  }
  return;
}

