/* Ghidra address: 01506ac0 */
/* Ghidra symbol: FUN_01506ac0 */


void FUN_01506ac0(longlong param_1,double param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined1 local_b1 [81];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  double local_50 [6];
  ulonglong uVar4;
  
  *(double *)(param_1 + 0xc58) = *(double *)(param_1 + 0xc58) * param_2;
  FUN_010bfdb0(param_1 + 0xc58,2);
  *(double *)(param_1 + 0xc50) = *(double *)(param_1 + 0xc50) * param_2;
  FUN_010bfdb0(param_1 + 0xc50,2);
  if (*(char *)(*(longlong *)(param_1 + 0xba8) + 0x328) == '\0') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xc50));
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xc58));
  }
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  FUN_010eb080(lVar1,param_2,1,0);
  *(undefined8 *)(lVar1 + 0x108) = param_3;
  uVar4 = 0;
  do {
    *(undefined8 *)(lVar1 + 0xd8 + uVar4 * 0x20) = *(undefined8 *)(param_1 + 0xc50);
    *(undefined8 *)(lVar1 + 0xe0 + uVar4 * 0x20) = *(undefined8 *)(param_1 + 0xc58);
    cVar2 = FUN_010e8310(lVar1,uVar4,local_b1,local_50,local_58,local_60);
    if (cVar2 != '\0') {
      FUN_010e81e0(lVar1,uVar4,local_50[0] * param_2);
    }
    bVar3 = (char)uVar4 + 1;
    uVar4 = (ulonglong)bVar3;
  } while (bVar3 != 2);
  return;
}

