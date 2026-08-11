/* Ghidra address: 0070d200 */
/* Ghidra symbol: FUN_0070d200 */


int FUN_0070d200(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_28 [2];
  int local_20;
  
  uVar2 = FUN_00786090(*(undefined8 *)(param_1 + 0x330));
  iVar1 = thunk_FUN_041b2403(uVar2,0x467,(longlong)param_2,local_28);
  if (iVar1 == 0) {
    local_20 = 0xf;
  }
  else {
    local_20 = local_20 - local_28[0];
  }
  return local_20;
}

