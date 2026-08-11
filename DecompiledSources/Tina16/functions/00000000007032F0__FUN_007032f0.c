/* Ghidra address: 007032f0 */
/* Ghidra symbol: FUN_007032f0 */


undefined8 FUN_007032f0(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0065b870();
  iVar1 = thunk_FUN_041b2403(uVar2,0x140c,0,(longlong)*(int *)(&DAT_01e02f08 + (param_2 & 0xff) * 4)
                            );
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else if (iVar1 == 2) {
    uVar2 = 2;
  }
  else if (iVar1 == 4) {
    uVar2 = 3;
  }
  else if (iVar1 + -8 == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)(iVar1 + -8) >> 8),1);
  }
  return uVar2;
}

