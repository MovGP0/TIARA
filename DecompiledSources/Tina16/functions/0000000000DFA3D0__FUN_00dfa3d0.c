/* Ghidra address: 00dfa3d0 */
/* Ghidra symbol: FUN_00dfa3d0 */


void FUN_00dfa3d0(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined4 local_3c [7];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  dVar1 = **(double **)(lVar3 + 0x18);
  dVar2 = *(double *)(param_2 + 0x480);
  local_3c[0] = 0;
  if (param_3 == '\b') {
    FUN_017de670(*(undefined8 *)(param_2 + 0xd8),**(undefined8 **)(lVar3 + 0x18),
                 *(undefined8 *)(lVar3 + 0x58),local_3c);
    FUN_017de700(*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 8),
                 *(undefined8 *)(lVar3 + 0x58),0);
  }
  else {
    if (*(char *)(*(longlong *)(param_2 + 0x110) + 10) != '\0') {
      FUN_01662860(*(longlong *)(param_2 + 0x110),2,*(undefined8 *)(lVar3 + 0x18),
                   *(undefined8 *)(lVar3 + 0x58),0,param_2 + 0x480,0);
    }
    FUN_017de670(*(undefined8 *)(param_2 + 0xd8),dVar1 * dVar2,*(undefined8 *)(lVar3 + 0x58),
                 local_3c);
  }
  return;
}

