/* Ghidra address: 015846d0 */
/* Ghidra symbol: FUN_015846d0 */


bool FUN_015846d0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00417580(param_3,&DAT_01577948);
  uVar1 = FUN_015837c0(param_1,param_2);
  iVar2 = FUN_01583710(param_1,param_2,uVar1);
  if (-1 < iVar2) {
    FUN_00417c40(param_3,*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0x18,&DAT_01577948);
  }
  else {
    FUN_00417740(param_3,&DAT_01577948);
    *param_3 = 0;
    param_3[1] = 0;
  }
  return -1 < iVar2;
}

