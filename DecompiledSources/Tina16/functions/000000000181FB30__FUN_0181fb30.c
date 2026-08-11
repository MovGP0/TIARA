/* Ghidra address: 0181fb30 */
/* Ghidra symbol: FUN_0181fb30 */


/* WARNING: Removing unreachable block (ram,0x0181fcaf) */

void FUN_0181fb30(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_54 = param_3;
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 8) == '\0') {
    local_54 = 0;
  }
  FUN_0181f950(*(undefined8 *)(param_1 + 0x30),param_2,local_54);
  iVar1 = FUN_0181e3e0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_0181e3c0(param_2,iVar3);
      FUN_0181fb30(param_1,uVar2,local_54 + 2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_0181e3e0(param_2);
  if (0 < iVar1) {
    if (*(char *)(*(longlong *)(param_1 + 0x30) + 8) == '\0') {
      FUN_00415dd0(&local_38,*(undefined8 *)(param_2 + 0x18),0);
      FUN_00415980(local_30,3,&DAT_0181fcf8,local_38,&LAB_0181fd08);
      FUN_0181f800(*(undefined8 *)(param_1 + 0x30),local_30[0]);
    }
    else {
      FUN_0181f910(&local_48,local_54);
      FUN_00415dd0(&local_50,*(undefined8 *)(param_2 + 0x18),0);
      FUN_00415980(&local_40,4,local_48,&DAT_0181fcf8,local_50,&LAB_0181fd08);
      FUN_0181f800(*(undefined8 *)(param_1 + 0x30),local_40);
    }
  }
  FUN_00414590(&local_50,5);
  return;
}

