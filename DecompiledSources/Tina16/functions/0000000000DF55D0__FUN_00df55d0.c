/* Ghidra address: 00df55d0 */
/* Ghidra symbol: FUN_00df55d0 */


void FUN_00df55d0(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  ulonglong in_stack_ffffffffffffff78;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 local_5c;
  double local_58;
  double local_50;
  
  uVar6 = (undefined4)(in_stack_ffffffffffffff78 >> 0x20);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  dVar4 = **(double **)(lVar2 + 0x18) * *(double *)(param_2 + 0x478);
  dVar1 = (*(double **)(lVar2 + 0x18))[3];
  local_5c = 0;
  if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
    uVar5 = in_stack_ffffffffffffff78 & 0xffffffff00000000;
    FUN_01662860(*(longlong *)(param_2 + 0x110),4,*(longlong *)(lVar2 + 0x18) + 0x18,
                 *(undefined8 *)(lVar2 + 0x58),uVar5,0,0);
    uVar6 = (undefined4)(uVar5 >> 0x20);
  }
  FUN_017de110(*(undefined8 *)(param_2 + 0xd8),dVar1,*(undefined8 *)(lVar2 + 0x58),&local_5c);
  if (param_3 == '\b') {
    if (*(char *)(param_2 + 0x12f4) == '\x01') {
      lVar3 = *(longlong *)(lVar2 + 0x18);
      local_58 = (double)FUN_0040bcd0(*(undefined8 *)(lVar3 + 0x10));
      local_58 = *(double *)(lVar3 + 8) * local_58;
      lVar3 = *(longlong *)(lVar2 + 0x18);
      local_50 = (double)FUN_0040bdd0(*(undefined8 *)(lVar3 + 0x10));
      local_50 = *(double *)(lVar3 + 8) * local_50;
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x18);
      local_58 = (double)FUN_0040bdd0(*(undefined8 *)(lVar3 + 0x10));
      local_58 = -*(double *)(lVar3 + 8) * local_58;
      lVar3 = *(longlong *)(lVar2 + 0x18);
      local_50 = (double)FUN_0040bcd0(*(undefined8 *)(lVar3 + 0x10));
      local_50 = *(double *)(lVar3 + 8) * local_50;
    }
    uVar6 = local_5c;
    FUN_017de540(*(undefined8 *)(param_2 + 0xd8),local_58,*(undefined8 *)(lVar2 + 0x58),0,&local_5c)
    ;
    FUN_017de5f0(*(undefined8 *)(param_2 + 0xd8),local_50,*(undefined8 *)(lVar2 + 0x58),uVar6);
  }
  else if (*(char *)(param_2 + 0x325) == '\0') {
    if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
      FUN_01662860(*(longlong *)(param_2 + 0x110),0x102,*(undefined8 *)(lVar2 + 0x18),
                   *(undefined8 *)(lVar2 + 0x58),CONCAT44(uVar6,local_5c),param_2 + 0x478,0);
    }
    FUN_017de540(*(undefined8 *)(param_2 + 0xd8),dVar4,*(undefined8 *)(lVar2 + 0x58),0,&local_5c);
  }
  else {
    if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
      FUN_01662860(*(longlong *)(param_2 + 0x110),0x102,*(undefined8 *)(lVar2 + 0x18),
                   *(undefined8 *)(lVar2 + 0x58),CONCAT44(uVar6,local_5c),param_2 + 0x478,0);
    }
    FUN_017de540(*(undefined8 *)(param_2 + 0xd8),dVar4,*(undefined8 *)(lVar2 + 0x58),0,&local_5c);
  }
  return;
}

