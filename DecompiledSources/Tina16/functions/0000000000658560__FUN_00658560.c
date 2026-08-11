/* Ghidra address: 00658560 */
/* Ghidra symbol: FUN_00658560 */


void FUN_00658560(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if ((((*(char *)(param_1 + 0x390) == '\0') || ((*(uint *)(param_1 + 0xa0) & 0x10) == 0)) ||
      (*(longlong *)(param_1 + 0x78) == 0)) || ((*(uint *)(lVar1 + 0x20) & 8) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(uint *)(lVar1 + 0x20) & 2) == 0) {
    iVar5 = thunk_FUN_0419e3da(*(undefined8 *)(param_1 + 0x468));
    if (iVar5 == 0) goto LAB_006585d9;
    bVar4 = true;
  }
  else {
LAB_006585d9:
    bVar4 = false;
  }
  if ((*(uint *)(lVar1 + 0x20) & 1) == 0) {
    iVar5 = thunk_FUN_0419e3da(*(undefined8 *)(param_1 + 0x468));
    if (iVar5 != 0) {
      bVar3 = true;
      goto LAB_0065860a;
    }
  }
  bVar3 = false;
LAB_0065860a:
  if ((bVar2) && (bVar4 || bVar3)) {
    FUN_0065b700(param_1);
  }
  if ((*(uint *)(param_1 + 0xa4) & 0x200) == 0) {
    FUN_0065be30(param_1);
  }
  FUN_00651180(param_1,param_2);
  if ((bVar2) && ((bVar4 || bVar3 || ((*(uint *)(lVar1 + 0x20) & 0xc0) != 0)))) {
    FUN_0065b700(param_1);
  }
  return;
}

