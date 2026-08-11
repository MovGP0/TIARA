/* Ghidra address: 016ea050 */
/* Ghidra symbol: FUN_016ea050 */


void FUN_016ea050(longlong param_1,undefined8 param_2,ushort param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar1 = FUN_00409570((longlong)(int)((uint)param_3 + *(int *)PTR_DAT_020036d8 * 2));
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    uVar2 = *(longlong *)(param_1 + 0x70) + (longlong)(*(int *)PTR_DAT_020036d8 + -1) &
            (longlong)-*(int *)PTR_DAT_020036d8;
    *(ulonglong *)(param_1 + 0x60) = uVar2;
    FUN_00409a70(param_2,uVar2,param_3);
    *(ushort *)(param_1 + 0x58) = param_3;
  }
  else if (*(ushort *)(param_1 + 0x58) == param_3) {
    FUN_00409a70(param_2,*(longlong *)(param_1 + 0x60),param_3);
  }
  else {
    FUN_01b04d70(0x210,&LAB_016ea104,0);
  }
  return;
}

