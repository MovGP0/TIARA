/* Ghidra address: 00df4b20 */
/* Ghidra symbol: FUN_00df4b20 */


void FUN_00df4b20(longlong param_1,longlong param_2,byte param_3,ulonglong param_4,double param_5)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  double unaff_XMM6_Qa;
  int local_2c [5];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  if (param_3 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),1) <<
             (param_3 & 0x1f) & 0x22U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    unaff_XMM6_Qa = **(double **)(lVar1 + 0x18);
  }
  local_2c[0] = 0;
  if ((param_3 == 1) || (param_3 == 5)) {
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar1 + 0x58),1,local_2c);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar1 + 0x58),1,local_2c);
  }
  else if (param_3 == 6) {
    dVar3 = (double)FUN_01b08a00(param_2,0);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),unaff_XMM6_Qa * dVar3,*(undefined8 *)(lVar1 + 0x58)
                 ,1,local_2c);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),unaff_XMM6_Qa * dVar3,*(undefined8 *)(lVar1 + 0x58)
                 ,1,local_2c);
  }
  else if (param_3 == 8) {
    FUN_017de420(*(undefined8 *)(param_2 + 0xd8),param_5 * unaff_XMM6_Qa,
                 *(undefined8 *)(lVar1 + 0x58),0);
    local_2c[0] = local_2c[0] + 1;
    FUN_017de420(*(undefined8 *)(param_2 + 0xd8),param_5 * unaff_XMM6_Qa,
                 *(undefined8 *)(lVar1 + 0x58),local_2c[0]);
  }
  return;
}

