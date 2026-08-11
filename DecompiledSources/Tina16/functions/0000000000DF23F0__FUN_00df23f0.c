/* Ghidra address: 00df23f0 */
/* Ghidra symbol: FUN_00df23f0 */


void FUN_00df23f0(longlong param_1,longlong param_2,char param_3,ulonglong param_4,double param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar5;
  int local_3c [5];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  dVar4 = *(double *)(*(longlong *)(lVar1 + 0x18) + 8);
  if (*(char *)(lVar1 + 0x39) == '\0') {
    dVar4 = dVar4 * *(double *)(param_2 + 0x480);
  }
  local_3c[0] = 0;
  lVar2 = *(longlong *)(param_2 + 0x110);
  if (*(char *)(lVar2 + 10) != '\0') {
    uVar5 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if (*(char *)(lVar1 + 0x39) == '\0') {
      FUN_01662860(lVar2,4,*(longlong *)(lVar1 + 0x18) + 8,*(undefined8 *)(lVar1 + 0x58),
                   (ulonglong)uVar5 << 0x20,param_2 + 0x480,0);
    }
    else {
      FUN_01662860(lVar2,4,*(longlong *)(lVar1 + 0x18) + 8,*(undefined8 *)(lVar1 + 0x58),
                   (ulonglong)uVar5 << 0x20,0,0);
    }
  }
  iVar3 = local_3c[0];
  if (((*(char *)(lVar1 + 0x70) == '\0') || (*(char *)(param_2 + 0xe0) != '\x02')) ||
     (param_3 == '\b')) {
    FUN_017de110(*(undefined8 *)(param_2 + 0xd8),dVar4,*(undefined8 *)(lVar1 + 0x58),local_3c);
  }
  else {
    local_3c[0] = local_3c[0] + 4;
  }
  if (((param_3 != '\b') && (*(char *)(param_2 + 0x325) == '\0')) &&
     (*(char *)(lVar1 + 0x39) == '\0')) {
    if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
      FUN_01662860(*(longlong *)(param_2 + 0x110),0x102,*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x58),local_3c[0],param_2 + 0x480,0);
    }
    FUN_017de540(*(undefined8 *)(param_2 + 0xd8),
                 **(double **)(lVar1 + 0x18) * *(double *)(param_2 + 0x480),
                 *(undefined8 *)(lVar1 + 0x58),0,local_3c);
  }
  if (param_3 == '\b') {
    FUN_017de1e0(*(undefined8 *)(param_2 + 0xd8),
                 param_5 * *(double *)(*(longlong *)(lVar1 + 0x18) + 0x10),
                 *(undefined8 *)(lVar1 + 0x58),iVar3);
  }
  return;
}

