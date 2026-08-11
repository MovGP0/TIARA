/* Ghidra address: 012bef60 */
/* Ghidra symbol: FUN_012bef60 */


void FUN_012bef60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_3c [3];
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d31720(param_2,local_3c);
    if (-1 < local_3c[0] + -1) {
      do {
        uVar2 = FUN_012be250(&DAT_012bd440,1,0xffffffff);
        FUN_012be420(uVar2,param_2);
        FUN_004ae7e0(param_1,uVar2);
        local_3c[0] = local_3c[0] + -1;
      } while (local_3c[0] != 0);
    }
  }
  return;
}

