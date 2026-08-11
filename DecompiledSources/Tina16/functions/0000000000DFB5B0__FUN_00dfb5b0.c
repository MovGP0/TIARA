/* Ghidra address: 00dfb5b0 */
/* Ghidra symbol: FUN_00dfb5b0 */


void FUN_00dfb5b0(longlong param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_017d9e00(*(undefined8 *)(param_1 + 0xd8),1);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)param_3 * 8);
  if ((0 < param_4) && (param_4 <= (int)(uint)*(byte *)(lVar1 + 4))) {
    uVar2 = (ulonglong)**(byte **)(*(longlong *)(lVar1 + 0x40) + -8 + (longlong)param_4 * 8);
    if ((*(longlong *)(&DAT_0202dd90 + uVar2 * 8) == 0) || (*(char *)(param_1 + 0xe0) == '\0')) {
      (**(code **)(&DAT_0202dba0 + uVar2 * 8))(lVar1,param_1,param_2,param_4,param_5);
    }
    else {
      (**(code **)(&DAT_0202dd90 + uVar2 * 8))(lVar1,param_1,param_2,param_4,param_5);
    }
  }
  return;
}

